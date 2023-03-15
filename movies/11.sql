SELECT title FROM movies, stars, people , ratings
WHERE people.name = "Chadwick Boseman"
AND people.id = stars.person_id
AND ratings.movie_id = movies.id
AND stars.movie_id = movies.id
AND 
ORDER BY rating DESC LIMIT 5;




SELECT title FROM movies, stars, people , ratings
WHERE people.name = "Chadwick Boseman"
AND people.id = stars.person_id
AND stars.movie_id = movies.id
AND ratings.movie_id = movies.id
ORDER BY rating DESC LIMIT 5;