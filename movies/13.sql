




-- movie id w których występuje Kevin Bacon
SELECT movie_id FROM stars
WHERE person_id IN (SELECT id )