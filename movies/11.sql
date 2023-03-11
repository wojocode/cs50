SELECT title FROM movies
WHERE id IN (SELECT movie_id FROM stars
    WHERE person_id IN (SELECT id FROM people
        WHERE name = "Chadwick Boseman" AND id IN (SELECT person_id FROM stars
            WHERE movie_id IN (SELECT movie_id FROM ratings ORDER BY rating ASC)))) LIMIT 5;