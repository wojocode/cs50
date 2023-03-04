UPDATE shows SET title = 'The Office' WHERE title =(SELECT title FROM shows WHERE title LIKE "the%office%");
