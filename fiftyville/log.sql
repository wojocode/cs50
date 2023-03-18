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
 ID 295
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




-- CRIME FACTS
 took place at 10.15am at bakery

