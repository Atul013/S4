		--01-02-2025
--select lower('ARTIFICIAL INTELLIGENCE')from dual;



--select upper ('artificial intelligence') from dual;



--select initcap('artificial intelligence') from dual;



		--Character- Manipulative functions 
--select concat ('artificial', 'intelligence') from dual;



--select length('Artificial Intelligence') from dual;
--select length('') from dual;



--select substr('Database Management System', 13) from dual;



--select instr('ASIET is a great institution', 'ins', 1,1) from dual;



		--lpad and rpad 
--select lpad ('100', 5, '*') from dual;
--select rpad ('hehe', 13, '~') from dual;



--select trim('A' from 'ASIET') from dual;
--select trim ('             ASIET	') from dual;



--select replace ('Data Management', 'Data' , 'Database')  from dual;



		-- Date Functions
--select sysdate from dual;
--select next_day(sysdate, 'wed') from dual;
--select add_months(sysdate, 2) from dual;
--select last_day(sysdate) from dual;
--select months_between (sysdate, hiredate) from employees;
--select least('01-jan-2001', '02-feb-2001') from dual;



--create new table ar_op with id, name and salary
--select emp_id, emp_name, salar, salar+emp_id AS "Salary + Emp_ID" from ar_op;
--select  emp_id, emp_name, salar, salar+1000 AS "Increment by 1k" from ar_op;
--select  emp_id, emp_name, salar, salar-500 AS "Decrement by 500" from ar_op;
--select  emp_id, emp_name, salar, salar*10 AS "10x Salary" from ar_op
--select  emp_id, emp_name, salar, salar%5000 AS "Divide by 5000" from ar_op;
--alter table ar_op add address varchar(15);

--update ar_op set address ='Pattikkaad' where emp_id = 4;
--update ar_op set address ='Oolampara' where emp_id = 1;
--update ar_op set address ='Kuthiravattam' where emp_id = 3;
--update ar_op set address ='Kochi' where emp_id = 7;
--update ar_op set address ='Palakkad' where emp_id = 9;

--select emp_id, address from ar_op where emp_name like 'Sh%';
--select emp_id, address from ar_op where emp_name like '%yi%';
--select emp_id from ar_op where emp_name like 'Sh%' and address like '%Pa%';
--select emp_id from ar_op where emp_name like 'Sh%' or address like '%Oo%';
--select emp_name from ar_op where address in ('Kochi', 'Kozhikkode');
select emp_name from ar_op where address not in ('Kochi', 'Kozhikkode');
