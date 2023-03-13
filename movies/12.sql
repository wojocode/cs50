SELECT movies.title
FROM movies,stars,people


SELECT movies.id
FROM movies,stars,people
WHERE movies.id IN
(SELECT movie_id FROM stars
WHERE stars.person_id IN
(SELECT id FROM people WHERE name = "Johnny Depp" OR name = "Helena Bonham Carter"))
AND movies.id = stars.movie_id;
AND people.id = stars.person_id;



-- SELECT 2 actors name
SELECT id FROM people
WHERE name = "Johnny Depp" OR name ="Helena Bonham Carter";







