# Verifica SQL, cose da sapere

* ### Creazione tabella
    ```sql
        CREATE TABLE table_name (
            value_name1 type constraint
        )
    ```
    - Tipi:
     - caratteri
            `varchar(x)` oppure `char(x)`
            `x`: lunghezza massima stringa
   	 - numeri:
            `smallint`, `int` - numeri interi
            `decimal(x, y)`
                - `x`: max numeri interi
                - `y`: max cifre decimali
     - altri
            - `date` - nel formato `YYYY-MM-DD`
            - `year` - anno, valore di 4 cifre numeriche
    ### Restrizioni:
	 - `NOT NULL` - Questo campo non può essere nullo
     - `UNIQUE` - Questo campo deve essere unico rispetto i valori delle altre tuple
     - `PRIMARY KEY` - Identifica una tupla, è la combinazione tra `NOT NULL` e `UNIQUE`


* ## Eliminare tabella
    ```sql
    DROP tabel_name
    ```
    
* ## Aggiunta colonna
    ```sql
        ALTER TABLE table_name ADD 'new_field' field_type
    ```

* ## Eliminare colonna
    ```sql
        ALTER TABLE table_name DROP COLUMN 'field_name'
    ```

* ## Creazione indice
    ```sql
        CREATE UNIQUE INDEX Indice ON table_name(fields)
    ```

* ## Aggiungere tuple ad una tabella
    ```sql
        INSERT INTO table_name (field1, field2, ...) VALUES (value1, value2, ...)
    ```

* ## Aggiornare tuple di una tabella
    ```sql
        UPDATE table_name SET field_name = value1 WHERE field_n = value2
    ```

* ## Eliminare tuple di una tabella
    ```sql
        DELETE FROM table_name WHERE field_name = value1
    ```

* ## Selezioni con condizioni
    ```sql
        SELECT fields, ..., * FROM table_name WHERE
    ```
    - ### Condizioni di ricerca
         ```sql
            SELECT fields, ..., * FROM table_name WHERE condizione
        ```
        - #### Operatori logici: `AND`, `OR`, `NOT`
        - #### BETWEEN:
            ```sql
                SELECT fields, ..., * FROM table_name WHERE field BETWEEN value1 AND value2
            ```
            equivalente a `WHERE field >= x AND field >= y`
        - #### IN:
            ```sql
                SELECT fields, ..., * FROM table_name WHERE field IN (value1, value2, ...)
            ```
            equivalente a `WHERE field == x OR field == y OR ...`
        - #### LIKE:
            ```sql
                SELECT fields, ..., * FROM table_name WHERE field LIKE 'condizione'
            ```
            Permette la ricerca di stringhe attraverso i caratteri jolly `_` e  `OR`.

            Esempi:
            - `LIKE ‘xyz%’`: vengono ricercate tutte le stringhe che iniziano con i caratteri ‘xyz’;
            - `LIKE ‘%xyz’`: serve a ricercare tutte le stringhe che finiscono con i caratteri ‘xyz’
            - `LIKE ‘%xyz%’`: per tutte le stringhe di 3 o più caratteri che contengono i caratteri ‘xyz’ 
            - `LIKE ‘_xyz%’`: controlla le stringhe di 4 caratteri che finiscono con ‘xyz’

    - ### Tipologia tebella
        - #### Tuple uniche: 
            ```sql
            SELECT DISTINCT fields, ..., * FROM table_name ...
            ```
        - #### Tuple ripetute: 
            ```sql
            SELECT ALL fields, ..., * FROM table_name ... --`ALL` si può omettere--
            ```

* ### Funzioni di aggregazione
    `SUM`, `AVG`, `MIN`, `MAX`
    ```sql
        SELECT FUNC(field), field2, ...  FROM table_name ...
    ```