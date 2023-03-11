--SELECT title FROM movies
--WHERE id IN (SELECT movie_id FROM ratings ORDER BY rating DESC
   -- WHERE movie_id IN (SELECT movie_id FROM stars
   --     WHERE person_id IN (SELECT id FROM people
    --        WHERE name = "Chadwick Boseman")));


SELECT title , rating FROM movies, ratings
WHERE id IN (SELECT movie_id FROM ratings
    WHERE movie_id IN (SELECT movie_id FROM stars
        WHERE person_id IN (SELECT id FROM people
            WHERE name = "Chadwick Boseman"))) LIMIT 230;