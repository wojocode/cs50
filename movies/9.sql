SELECT name FROM people WHERE name IN (SELECT name FROM people WHERE id IN (SELECT person_id FROM stars WHERE movie_id IN (SELECT id FROM movies WHERE year = 2006)) ORDER BY birth) GROUP BY name LIMIT 10;


--SELECT name FROM people WHERE id IN (SELECT person_id FROM stars WHERE movie_id IN (SELECT id FROM movies WHERE year = 2006)) ORDER BY birth;