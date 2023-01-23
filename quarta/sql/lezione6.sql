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
    (22, 'Luca', 'Rossi', 'Torino', 22575),
    (23, 'Alessandro', 'Borsato', 'Montebelluna', 35000);

SELECT COUNT(ID) AS Dipendenti, Residenza, SUM(Stipendio) AS Stipendi FROM Impiegati GROUP BY (Residenza);
/*
    Dipendenti	Residenza	    Stipendi
    1	        Montebelluna	35000
    2	        Napoli	        63000
    1	        Torino	        22575
*/

SELECT COUNT(ID) AS Dipendenti, Residenza, SUM(Stipendio) AS Stipendi FROM Impiegati GROUP BY (Residenza) HAVING COUNT(ID) > 1:
/*
    Dipendenti	Residenza	Stipendi
    2	        Napoli	    63000
*/

SELECT * FROM Impiegati WHERE Stipendio BETWEEN 20000 AND 32000;
/*
    ID	Nome	Cognome	Residenza	Stipendio
    20	Mario	Rossini	Napoli	    31500
    21	Luca	Bianchi	Napoli	    31500
    22	Luca	Rossi	Torino	    22575
*/

SELECT * FROM Impiegati WHERE Nome IN ('Mario', 'Luca');
/*
    ID	Nome	Cognome	Residenza	Stipendio
    20	Mario	Rossini	Napoli	    31500
    21	Luca	Bianchi	Napoli	    31500
    22	Luca	Rossi	Torino	    22575
*/

SELECT * FROM Impiegati WHERE Nome LIKE 'Ale%'; --escape special chars: "... LIKE '..$_' ESCAPE '_'"
SELECT * FROM Impiegati WHERE Nome LIKE '%dro'; --si può abbinare al NOT
SELECT * FROM Impiegati WHERE Nome LIKE '%le%';
SELECT * FROM Impiegati WHERE Nome LIKE '__ca%';
/*
    ID	Nome	    Cognome	Residenza	    Stipendio
    23	Alessandro	Borsato	Montebelluna	35000

    ID	Nome	    Cognome	Residenza	    Stipendio
    23	Alessandro	Borsato	Montebelluna	35000

    ID	Nome	    Cognome	Residenza	    Stipendio
    23	Alessandro	Borsato	Montebelluna	35000

    ID	Nome	Cognome	Residenza	    Stipendio
    21	Luca	Bianchi	Napoli	        31500
    22	Luca	Rossi	Torino	        22575
*/

--CARATTERI JOLLY
/*
    ?: indica un qualsiasi carattere in qualsiasi posizione,
    *char: indica una sequenza di caratteri in una quasiasi posizione
*/

SELECT * FROM Impiegati WHERE campo NOT NULL;
--ritorna tutti i campi di una tabella dove il campo richiesto non è vuoto