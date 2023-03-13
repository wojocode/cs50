SELECT movies.title
FROM movies,stars,people
WHERE (SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Helena Bonham Carter"))
= (SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Johnny Depp"));
AND stars.movie_id = movies.id
AND people.id = stars.person_id;






