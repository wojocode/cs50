SELECT title FROM movies
WHERE id IN (SELECT movie_id FROM ratings
WHERE id IN (SELECT movie_id FROM stars WHERE person_id IN (SELECT id FROM people WHERE name = "Chadwick Boseman"))ORDER BY rating DESC);






SELECT title FROM movies
WHERE id IN (SELECT movie_id FROM ratings ORDER BY rating DESC
WHERE id IN (SELECT movie_id FROM stars WHERE person_id IN (SELECT id FROM people WHERE name = "Chadwick Boseman")));