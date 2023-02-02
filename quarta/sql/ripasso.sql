DROP TABLE Customers;
DROP TABLE Orders;
DROP TABLE Shippings;

CREATE TABLE films (
    ID smallint PRIMARY KEY,
    nome_film char(20) unique,
    incasso decimal(9, 2),
    regista char(30),
    anno smallint
);

INSERT INTO films (ID, nome_film, incasso, regista, anno) VALUES 
    (0, 'film1', 1000000, 'regista1', 1980),
    (1, 'film2', 2000000, 'regista2', 2000),
    (2, 'film3', 3000000, 'regista3', 2010),
    (3, 'film4', 4000000, 'regista4', 2022),
    (4, 'film5', 5000000, 'regista5', 2023);

SELECT SUM(incasso) FROM Films;
SELECT AVG(incasso) FROM Films;
SELECT MAX(incasso), nome_film FROM Films;
SELECT MIN(incasso), nome_film FROM Films;