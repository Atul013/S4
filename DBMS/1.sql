--DECLARE
--	a number;
--	b number;
--	c number;
--PROCEDURE findMin(x IN number, y IN number, z OUT number) IS
--BEGIN
--	IF x<y THEN
--		z:=x;	
--	ELSE
--		z:=y;
--	END IF;
--END;
--
--BEGIN
--	a:= 23;
--	b:= 45;
--	findMin(a,b,c);
--	dbms_output.put_line('Minimum of (23,45) : ' || c);
--END;
--/


--create table customers (customer_id number(3) primary key, name char(10), age number (2), address char (20), salary decimal (7,2));                                                                                                              

--INSERT INTO customers (customer_id, name, age, address, salary) VALUES (3, 'Alice Brow', 25, '789 Pine St  ', 47000.00);
--INSERT INTO customers (customer_id, name, age, address, salary) VALUES (4, 'Bob White ', 41, '101 Maple St ', 55000.00);
--INSERT INTO customers (customer_id, name, age, address, salary) VALUES (5, 'Charlie G', 38, '202 Cedar St ', 64000.00);
--INSERT INTO customers (customer_id, name, age, address, salary) VALUES (6, 'David Blu', 30, '303 Birch St ', 52000.00);
--INSERT INTO customers (customer_id, name, age, address, salary) VALUES (7, 'Eve Black', 26, '404 Willow St', 48000.00);


--CREATE OR REPLACE FUNCTION totalCustomers
--	RETURN number IS
--	total number(2) := 0;
---	BEGIN
--	SELECT count(*) into total
--	FROM customers;
--	RETURN total;
--	END;
--	/


--DECLARE 
--	c number(2);
--	BEGIN
--	c:= totalCustomers();
--	dbms_output.put_line('Total no of customers: ' || c);
-- 	END;
--	/


--CREATE TABLE electricity (
--    cons_id   NUMBER(10) PRIMARY KEY,
--    c_name     CHAR(20),
--    rent       NUMBER(2) CHECK (rent = 20),
--    unit       NUMBER(6)
--);

--INSERT INTO electricity (cons_id, c_name, rent, unit) VALUES (1, 'John Doe', 20, 150);
--INSERT INTO electricity (cons_id, c_name, rent, unit) VALUES (2, 'Jane Smith', 20, 300);
--INSERT INTO electricity (cons_id, c_name, rent, unit) VALUES (3, 'Alice Brown', 20, 450);
--INSERT INTO electricity (cons_id, c_name, rent, unit) VALUES (4, 'Bob Johnson', 20, 600);
--INSERT INTO electricity (cons_id, c_name, rent, unit) VALUES (5, 'Charlie Davis', 20, 750);


--ALTER table electricity ADD (total number(6,2));


DECLARE
	v_total electricity.total%TYPE;
	CURSOR c IS SELECT * FROM electricity;
BEGIN
	FOR i IN c LOOP
		BEGIN
			IF i.unit <= 40 THEN
				v_total := i.rent;
			ELSIF i.unit <= 80 THEN
				v_total := i.rent + (i.unit - 40) * 0.40;
			ELSE
				v_total := i.rent + (40 * 0.40) + (i.unit -80) * 1.40;
			END IF;
			UPDATE electricity 
			SET total = v_total
			WHERE cons_id = i.cons_id;
		END;
	END LOOP;
COMMIT;
END;
/
