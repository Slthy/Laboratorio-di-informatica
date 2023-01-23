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

DELETE FROM Impiegati;

INSERT INTO Impiegati (ID, Nome, Cognome, Residenza, Stipendio) VALUES 
    (20, 'Mario', 'Rossini', 'Napoli', 31500),
    (21, 'Luca', 'Bianchi', 'Napoli', 31500),
    (22, 'Luca', 'Rossi', 'Torino', 22575);

SELECT Residenza FROM Impiegati;
/*
    Residenza
    Napoli
    Napoli
    Torino
*/

SELECT DISTINCT Residenza FROM Impiegati;
/*
    Residenza
    Napoli
    Torino
*/

SELECT ID As Matricola, Nome, Cognome, Residenza, Stipendio FROM Impiegati;
/*
    Matricola	Nome	Cognome	Residenza	Stipendio
    20	        Mario	Rossini	Napoli	    31500
    21	        Luca	Bianchi	Napoli	    31500
    22	        Luca	Rossi	Torino	    22575
*/

SELECT ID As Matricola, Nome, Cognome, Residenza, Stipendio AS Attuale, Stipendio * 1.05 AS Nuovo FROM Impiegati;
/*
    Matricola	Nome	Cognome	Residenza	Attuale	    Nuovo
    20	        Mario	Rossini	Napoli	    31500	    33075
    21	        Luca	Bianchi	Napoli	    31500	    33075
    22	        Luca	Rossi	Torino	    22575	    23703.75
*/

SELECT ID As Matricola, Nome, Cognome, Residenza, Stipendio AS Attuale, Stipendio * 1.05 AS Nuovo FROM Impiegati WHERE Residenza = 'Torino';
/*
    Matricola	Nome	Cognome	Residenza	Attuale	    Nuovo
    22	        Luca	Rossi	Torino	    22575	    23703.75
*/