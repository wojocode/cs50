SELECT title FROM movies
WHERE id IN (SELECT movie_id FROM stars
WHERE movie_id IN (SELECT person_id FROM ))