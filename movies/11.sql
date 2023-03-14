



SELECT title FROM movies WHERE id IN
(SELECT movie_id FROM ratings
WHERE movie_id IN (SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Chadwick Boseman")) ORDER BY rating DESC LIMIT 5);





SELECT movie_id FROM ratings
WHERE movie_id IN (SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Chadwick Boseman")) ORDER BY rating DESC LIMIT 5;


SELECT title FROM movies WHERE id =10514222;

 453562   |
| 1825683  |
| 5301662  |
| 10514222 |
| 2473602