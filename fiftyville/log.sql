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
