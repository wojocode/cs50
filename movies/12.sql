
SELECT title FROM 
SELECT movie_id FROM stars
WHERE stars.person_id IN
(SELECT id FROM people WHERE name = "Johnny Depp" OR name = "Helena Bonham Carter")
GROUP BY movie_id;
HAVING COUNT(movie_id) > 1;







