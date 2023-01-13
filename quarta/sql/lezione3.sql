DROP TABLE Customers;
DROP TABLE Orders;
DROP TABLE Shippings:

CREATE TABLE Impiegati (
    ID smallint PRIMARY KEY,
    Nome char(20) NOT NULL,
    Cognome char(30) NOT NULL,
    Residenza char(20) DEFAULT "Manca Residenza",
    Stipendio decimal(9,2)
);

INSERT INTO Impiegati (ID, Nome, Cognome, Residenza, Stipendio) VALUES 
    (20, 'Mario', 'Rossini', 'Caserta', 31500),
    (21, 'Luca', 'Bianchi', 'Caserta', 31500);


SELECT * FROM Impiegati WHERE ID = 20
