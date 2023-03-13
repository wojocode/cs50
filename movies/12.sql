SELECT movies.title
FROM movies,stars,people
WHERE stars.movie_id = ((SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Helena Bonham Carter"))
AND (SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Johnny Depp")))








