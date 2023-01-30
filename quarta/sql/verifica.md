# COSE DA SAPERE

* ### Creazione tabella
    ```sql
        CREATE TABLE table_name (
            value_name1 type constraint
        )
    ```
    - Tipi:
        1. #### caratteri
            `varchar(x)` oppure `char(x)`
            -    `x`: lunghezza massima stringa
        2. #### numeri
            - `smallint`, `int` - numeri interi
            - `decimal(x, y)`
                - `x`: max numeri interi
                - `y`: max cifre decimali
        3. ### Altri
            - `date` - nel formato `YYYY-MM-DD`
            - `year` - anno, valore di 4 cifre numeriche


    - Restrizioni:
        `NOT NULL` - Questo campo non può essere nullo
        `UNIQUE` - Questo campo deve essere unico rispetto i valori delle altre tuple
        `PRIMARY KEY` - Identifica una tupla, è la combinazione tra `NOT NULL` e `UNIQUE`


* ### Cancella tabella
    ```sql
    DROP tabel_name
    ```
    
* ### Aggiunta campo
    ```sql
        ALTER TABLE table_name ADD 'new_field' field_type
    ```

* ### Togliere campo
    ```sql
        ALTER TABLE table_name DROP COLUMN 'field_name'
    ```

* ### Creazione indice
    ```sql
        CREATE UNIQUE INDEX Indice ON table_name(fields)
    ```

* ### Aggiungere tuple ad una tabella
    ```sql
        INSERT INTO table_name (field1, field2, ...) VALUES (value1, value2, ...)
    ```

* ### Aggiornare tuple di una tabella
    ```sql
        UPDATE table_name SET field_name = value1 WHERE field_n = value2
    ```

* ### Eliminare tuple di una tabella
    ```sql
        DELETE FROM table_name WHERE field_name = value1
    ```

* ### Selezioni con condizioni
    ```sql
        SELECT fields, ..., * FROM table_name WHERE
    ```
    - #### Condizioni
         ```sql
            SELECT fields, ..., * FROM table_name WHERE condizione
        ```
        - operatori logici: `AND`, `OR`


    - #### Tuple uniche o ripetute

* ### Funzioni di aggregazione


* ### Creare view


* ### Ricerca