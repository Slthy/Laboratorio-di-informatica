DROP TABLE Customers;
DROP TABLE Orders;
DROP TABLE Shippings;

CREATE TABLE Impiegati (
    ID smallint PRIMARY KEY,
    Nome char(20) NOT NULL,
    Cognome char(30) NOT NULL,
    Residenza char(20) DEFAULT "Manca Residenza",
    Stipendio decimal(9,2)
);

INSERT INTO Impiegati (ID, Nome, Cognome, Residenza, Stipendio) VALUES 
    (20, 'Mario', 'Rossini', 'Napoli', 31500),
    (21, 'Luca', 'Bianchi', 'Napoli', 31500),
    (22, 'Luca', 'Rossi', 'Torino', 22575);

SELECT AVG (Stipendio) FROM Impiegati;
SELECT MIN (Stipendio) FROM Impiegati;
SELECT MAX (Stipendio) FROM Impiegati;
SELECT SUM (Stipendio) FROM Impiegati;
/*
    AVG (Stipendio)
        28525
    MIN (Stipendio)
        22575
    MAX (Stipendio)
        31500
    SUM (Stipendio)
        85575
*/

SELECT SUM (Stipendio) FROM Impiegati WHERE Residenza = "Napoli";
/*
    SUM (Stipendio)
    63000
*/

SELECT nome, cognome FROM Impiegati ORDER BY (cognome);
SELECT nome, cognome FROM Impiegati ORDER BY (cognome) DESC;

/*
    Nome	Cognome
        Luca	Bianchi
        Luca	Rossi
        Mario	Rossini

    Nome	Cognome
        Mario	Rossini
        Luca	Rossi
        Luca	Bianchi
*/
SELECT * FROM Impiegati GROUP BY Residenza = 'Napoli';
/*
    ID	Nome	Cognome	Residenza	Stipendio
    22	Luca	Rossi	Torino	    22575
    20	Mario	Rossini	Napoli	    31500
*/

having
/*  Possibili domande verifica

    create table
    alter table, drop, alter
    update
    insert into
    struttura select: SELECT colonne FROM tabelle WHERE condizione, * = ALL, Distinct
    rinominare colonna: as


*/