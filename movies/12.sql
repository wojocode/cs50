SELECT movies.title
FROM movies,stars,people
WHERE movies.id IN
(SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people
WHERE name = "Johnny Depp" OR name ="Helena Bonham Carter"));




-- SELECT 2 actors name
SELECT id FROM people
WHERE name = "Johnny Depp" OR name ="Helena Bonham Carter";







