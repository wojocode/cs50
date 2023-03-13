




-- movie id w których występuje Kevin Bacon
SELECT COUNT(movie_id) FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Kevin Bacon" AND birth = 1958);