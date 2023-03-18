-- Keep a log of any SQL queries you execute as you solve the mystery.

--FACTS
--THE CRIME TOOK PLACE 28 JULY 2021
-- TOOK PLACE ON Humphrey Street

--FIND OUT :
-- WHO THE THIEF IS
-- WHERE THE THIEF ESCAPED TO
--WHO THE THIEF'S ACOMPLICE WAS

--INVESTIGATION

--CRIME DESCRIPTION FROM CRIME SCENE REPORTS
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND year = 2021 AND street = "Humphrey Street";

--crime desctription
 Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery.
 Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery.

-- withnesses description:
 1.Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away.
 If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.

 2. I don't know the thief's name, but it was someone I recognized.
 Earlier this morning, before I arrived at Emmas bakery I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.

 3. As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call,
 I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow.
 The thief then asked the person on the other end of the phone to purchase the flight ticket.


-- BAKERY PARKING POSSIBLE LICENSE_PLATE

SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND HOUR = 10 AND minute BETWEEN 14 AND 25;

-- POSSIBLE PEOPLE DETAILS BASED ON LICENSE PLATE
SELECT * FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND HOUR = 10 AND minute BETWEEN 14 AND 25);

|   id   |  name   |  phone_number  | passport_number | license_plate |
+--------+---------+----------------+-----------------+---------------+
| 221103 | Vanessa | (725) 555-4692 | 2963008352      | 5P2BI95       |
| 243696 | Barry   | (301) 555-4174 | 7526138472      | 6P58WS2       |
| 396669 | Iman    | (829) 555-5269 | 7049073643      | L93JTIZ       |
| 398010 | Sofia   | (130) 555-0289 | 1695452385      | G412CB7       |
| 467400 | Luca    | (389) 555-5198 | 8496433585      | 4328GD8       |
| 514354 | Diana   | (770) 555-1861 | 3592750733      | 322W7JE       |
| 560886 | Kelsey  | (499) 555-9472 | 8294398571      | 0NTHK55       |
| 686048 | Bruce   | (367) 555-5533 | 5773159633      | 94KL13X       |
| 745650 | Sophia  | (027) 555-1068 | 3642612721      | 13FNH73



--TRANSACTION
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| id  | account_number | year | month | day |  atm_location  | transaction_type | amount |
+-----+----------------+------+-------+-----+----------------+------------------+--------+
| 246 | 28500762       | 2021 | 7     | 28  | Leggett Street | withdraw         | 48     |
| 264 | 28296815       | 2021 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 266 | 76054385       | 2021 | 7     | 28  | Leggett Street | withdraw         | 60     |
| 267 | 49610011       | 2021 | 7     | 28  | Leggett Street | withdraw         | 50     |
| 269 | 16153065       | 2021 | 7     | 28  | Leggett Street | withdraw         | 80     |
| 288 | 25506511       | 2021 | 7     | 28  | Leggett Street | withdraw         | 20     |
| 313 | 81061156       | 2021 | 7     | 28  | Leggett Street | withdraw         | 30     |
| 336 | 26013199       | 2021 | 7     | 28  | Leggett Street | withdraw         | 35



-- CRIME FACTS
 took place at 10.15am at bakery


-- person_id based on account
SELECT name FROM people WHERE id IN(SELECT person_id FROM bank_accounts
WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE atm_location = "Leggett Street" AND  day = 28 AND month = 7 AND year = 2021 AND transaction_type = "withdraw"));

|  name   |
+---------+
| Kenny   |
| Iman    |
| Benista |
| Taylor  |
| Brooke  |
| Luca    |
| Diana   |
| Bruce


SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND DURATION < 120
AND caller  IN (SELECT phone_number FROM people
WHERE id IN(SELECT person_id FROM bank_accounts
WHERE account_number IN (SELECT account_number FROM atm_transactions
WHERE atm_location = "Leggett Street" AND  day = 28 AND month = 7 AND year = 2021 AND transaction_type = "withdraw")))

| id  |     caller     |    receiver    | year | month | day | duration |
+-----+----------------+----------------+------+-------+-----+----------+
| 233 | (367) 555-5533 | (375) 555-8161 | 2021 | 7     | 28  | 45       |
| 254 | (286) 555-6063 | (676) 555-6554 | 2021 | 7     | 28  | 43       |
| 255 | (770) 555-1861 | (725) 555-3243 | 2021 | 7     | 28  | 49       |
| 279 | (826) 555-1652 | (066) 555-9701 | 2021 | 7     | 28  | 55       |
| 281 | (338) 555-6650 | (704) 555-2131 | 2021 | 7     | 28  | 54       |
| 285 | (367) 555-5533 | (704) 555-5790 | 2021 | 7     | 28  | 75



-- THIEF FLIGHT
SELECT id FROM flights WHERE year = 2021 AND month = 7 AND day = 29 ORDER BY hour LIMIT 1;
+----+-------------------+------------------------+------+-------+-----+------+--------+
| id | origin_airport_id | destination_airport_id | year | month | day | hour | minute |
+----+-------------------+------------------------+------+-------+-----+------+--------+
| 36 | 8                 | 4                      | 2021 | 7     | 29  | 8    | 20


-- passengers

SELECT * FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE year = 2021 AND month = 7 AND day = 29 ORDER BY hour LIMIT 1);

+-----------+-----------------+------+
| flight_id | passport_number | seat |
+-----------+-----------------+------+
| 36        | 7214083635      | 2A   |
| 36        | 1695452385      | 3B   |
| 36        | 5773159633      | 4A   |
| 36        | 1540955065      | 5C   |
| 36        | 8294398571      | 6C   |
| 36        | 1988161715      | 6D   |
| 36        | 9878712108      | 7A   |
| 36        | 8496433585      | 7B


SELECT phone_number FROM people
WHERE passport_number IN (SELECT passport_number FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE year = 2021 AND month = 7 AND day = 29 ORDER BY hour LIMIT 1))
----------------+
|  phone_number  |
+----------------+
| (826) 555-1652 |
| (130) 555-0289 |
| (286) 555-6063 |
| (389) 555-5198 |
| (499) 555-9472 |
| (328) 555-1152 |
| (367) 555-5533 |
| (066) 555-9701 |
+----------------+



-- cut down to 3 people
SELECT phone_number FROM people
WHERE passport_number IN (SELECT passport_number FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE year = 2021 AND month = 7 AND day = 29 ORDER BY hour LIMIT 1)) AND phone_number IN (SELECT caller FROM phone_calls WHERE year = 2021 AND month = 7 AND day = 28 AND DURATION < 120
AND caller  IN (SELECT phone_number FROM people
WHERE id IN(SELECT person_id FROM bank_accounts
WHERE account_number IN (SELECT account_number FROM atm_transactions
WHERE atm_location = "Leggett Street" AND  day = 28 AND month = 7 AND year = 2021 AND transaction_type = "withdraw"))));
+----------------+
|  phone_number  |
+----------------+
| (826) 555-1652 |
| (286) 555-6063 |
| (367) 555-5533


--------+
|  name  |
+--------+
| Kenny  |
| Taylor |
| Bruce
