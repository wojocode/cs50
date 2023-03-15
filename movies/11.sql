SELECT title FROM movies, stars, people , ratings
WHERE people.name = "Chadwick Boseman"
AND movies_id = stars.movie_id
AND stars.person_id = people.id


AND movies.id = stars.movies_id
AND people.id = stars.movie_id
AND ratings.movie_id stars.movie_id
ORDER BY rating DESC LIMIT 5;




SELECT title FROM movies WHERE id IN
(SELECT movie_id FROM ratings
WHERE movie_id IN (SELECT movie_id FROM stars
WHERE person_id IN (SELECT id FROM people WHERE name = "Chadwick Boseman")) ORDER BY rating DESC LIMIT 5) d;
;

----------+
| 453562   |
| 1825683  |
| 5301662  |
| 10514222 |
| 2473602