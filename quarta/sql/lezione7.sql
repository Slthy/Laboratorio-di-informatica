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

CREATE VIEW ImpiegatiCapi AS SELECT * FROM Impiegati WHERE ID IN(22, 23);
SELECT * FROM ImpiegatiCapi;
/*
    ID	Nome	    Cognome	Residenza	    Stipendio
    22	Luca	    Rossi	Torino	        22575
    23	Alessandro	Borsato	Montebelluna	35000
*/

