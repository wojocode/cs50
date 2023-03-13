SELECT movies.title
FROM movies,stars,people
WHERE people.name = "Johnny Depp" OR people.name = "Helena Bonham Carter"
AND movies.id = stars.movie_id
AND stars.person_id = people.id;




