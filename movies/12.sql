SELECT movies.title
FROM movies,stars,people
WHERE movies.id = (SELECT movie_id FROM movies WHERE people.name = "Johnny Depp" OR people.name = "Helena Bonham Carter")
AND movies.id = stars.movie_id
AND people.id = stars.person_id;







