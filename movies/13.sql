




-- movie id w których występuje Kevin Bacon
SELECT name FROM people WHERE id IN
(SELECT person_id FROM stars WHERE movie_id IN
(SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" AND birth = 1958))
AND NOT person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" AND birth = 1958)
);





SELECT count(person_id) FROM stars WHERE movie_id IN
(SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" AND birth = 1958))
AND NOT person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" and birth = 1958);



SELECT person_id FROM stars WHERE movie_id IN
(SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" AND birth = 1958))