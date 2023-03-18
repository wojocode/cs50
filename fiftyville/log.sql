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
-- bakery
SELECT * FROM bakery_security_logs WHERE year = 2021 AND month = 7 AND day = 28 AND HOUR = 10 AND minute = 15;
-- NO INFO 


-- CRIME FACTS
 took place at 10.15am at bakery

