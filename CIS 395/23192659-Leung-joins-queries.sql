/*1. Write a SQL statement to prepare a list with salesman name, customer name and their cities for the salesmen and customer who belongs to the 
	same city. (salesman + customer)*/
select name as 'Salesman Name', cust_name as 'Customer Name', salesman.city from salesman, customer where salesman.city = customer.city;
/*2. Write a SQL statement to make a list with order no, purchase amount, customer name and their cities for those orders which order amount between 
	500 and 2000. (orders + customer)*/
select ord_no as 'Order Number', purch_amt as 'Purchase Amount', cust_name as 'Customer Name', city as 'City' from orders, customer 
	where orders.customer_id = customer.customer_id and purch_amt > 500 and  purch_amt < 2000;
/*3. Write a SQL statement to know which salesman are working for which customer. (customer + salesman)*/
select name as 'Salesman Name', cust_name as 'Customer Name' from customer, salesman
	where salesman.salesman_id = customer.salesman_id;
/*4. Write a SQL statement to find the list of customers who appointed a salesman for their jobs who gets a commission from the company is more 
	than 12%. (customer + salesman)*/
select cust_name as 'Customer Name', name as 'Salesman Name', commission from customer, salesman where salesman.salesman_id = customer.salesman_id 
	and salesman.commission > 0.12;
/*5. Write a SQL statement to find the list of customers who appointed a salesman for their jobs who does not live in the same city where their 
	customer lives, and gets a commission is above 12%. (customer + salesman)*/
select cust_name as 'Customer Name', name as 'Salesman Name', commission from customer, salesman where salesman.salesman_id = customer.salesman_id 
	and salesman.city <> customer.city and salesman.commission > 0.12;
/*6. Write a SQL statement to find the details of an order using order number, order date, amount of order, which customer placed the order and 
	which salesman worked for that customer and how much commission he gets for an order. (orders + customer + salesman)*/
select cust_name as 'Customer Name', name as 'Salesman Name', commission from orders, customer, salesman 
	where orders.customer_id = customer.customer_id and orders.salesman_id =  salesman.salesman_id;
/*7. Write a SQL statement to make a join on the tables salesman, customer and orders in such a form that the same column of each table will appear 
	once and only the relational rows will come. (orders + customer + salesman)*/
select * from orders natural join customer natural join salesman;
/*8. Write a SQL statement to make a list in ascending order for the customer who works either through a salesman or by own. (customer + salesman)*/
select cust_name as 'Customer Name', customer.city as 'Customer City', grade, salesman.name as 'Salesman Name' from customer
	left join salesman on customer.salesman_id = salesman.salesman_id order by customer.customer_id;
/*9. Write a SQL statement to make a list in ascending order for the customer who holds a grade less than 300 and works either through a salesman 
	or by own. (customer + salesman)*/
select cust_name as 'Customer Name', customer.city as 'Customer city', grade, name as 'Salesman Name', salesman.city as 'Salesman city' 
	from customer left join salesman on customer.salesman_id = salesman.salesman_id where grade < 300 order by customer.customer_id;
/*10. Write a SQL statement to make a report with customer name, city, order number, order date, and order amount in ascending order according to 
	the order date to find that either any of the existing customers have placed no order or placed one or more orders. (orders + customer)*/
select cust_name as 'Customer Name', city as 'Customer City', ord_no as 'Order Number', ord_date as 'Order Date', purch_amt as 'Purchase amonut' 
	from orders left join customer on customer.customer_id = orders.customer_id order by ord_date;
/*11. Write a SQL statement to make a report with customer name, city, order number, order date, order amount salesman name and commission to find 
	that either any of the existing customers have placed no order or placed one or more orders by their salesman or by own. 
    (customer + orders + salesman)*/
select cust_name as 'Customer Name', customer.city as 'Customer City', ord_no as 'Order Number', ord_date as 'Order Date', 
	purch_amt as 'Purchase amonut' from customer left join orders on customer.customer_id = orders.customer_id left join salesman
    on salesman.salesman_id = customer.salesman_id;
/*12. Write a SQL statement to make a list in ascending order for the salesmen who works either for one or more customer or not yet join under any 
	of the customers. (customer + salesman)*/
select cust_name as 'Customer Name', customer.city as 'Customer City', grade as 'Grade', name as 'Salesman Name' from customer
	right join salesman on customer.salesman_id = salesman.salesman_id order by customer.salesman_id;
/*13. Write a SQL statement to make a list for the salesmen who works either for one or more customer or not yet join under any of the customers 
	who placed either one or more orders or no order to their supplier. (customer + salesman + orders)*/
select cust_name as 'Customer Name', customer.city as 'Customer City', grade as 'Grade', name as 'Salesman Name', ord_no as 'Order Number', 
	ord_date as 'Order Date', purch_amt as 'Purcahse Amount'from customer right join salesman on customer.salesman_id = salesman.salesman_id 
	right join orders on orders.customer_id = customer.customer_id;
/*14. Write a SQL statement to make a list for the salesmen who either work for one or more customers or yet to join any of the customer. 
	The customer may have placed, either one or more orders on or above order amount 2000 and must have a grade, or he may not have placed 
	any order to the associated supplier. (customer + salesman + orders)*/
select cust_name as 'Customer Name', customer.city as 'Customer City', grade as 'Grade', name as 'Salesman Name', ord_no as 'Order Number', 
	ord_date as 'Order Date', purch_amt as 'Purcahse Amount' from customer right join salesman on customer.salesman_id = salesman.salesman_id 
	left join orders on orders.customer_id = customer.customer_id where purch_amt >= 2000 and grade is not null;
/*15. Write a SQL statement to make a cartesian product between salesman and customer i.e. each salesman will appear for all customer and 
	vice versa. (salesman + customer)*/
select * from salesman cross join customer;
/*16. Write a SQL statement to make a cartesian product between salesman and customer i.e. each salesman will appear for all customer and 
	vice versa for that customer who belongs to a city. (salesman + customer)*/
select * from salesman cross join customer where salesman.city is not null;
/*17. Write a SQL statement to make a cartesian product between salesman and customer i.e. each salesman will appear for all customer and 
	vice versa for those salesmen who belongs to a city and the customers who must have a grade. (salesman + customer)*/
select * from salesman cross join customer where salesman.city is not null and grade is not null;
/*18. Write a SQL statement to make a cartesian product between salesman and customer i.e. each salesman will appear for all customer and 
	vice versa for those salesmen who must belong a city which is not the same as his customer and the customers should have an own grade. 
    (salesman + customer)*/
select * from salesman cross join customer where salesman.city is not null and grade is not null and salesman.city <> customer.city;
/*19. Write a SQL query to display all the data from the item_mast, including all the data for each item's producer company. 
	(company_mast + item_mast)*/
select * from item_mast inner join company_mast on item_mast.pro_com = company_mast.com_id;
/*20. Write a SQL query to display the item name, price, and company name of all the products. (company_mast + item_mast)*/
select pro_name as 'Product Name', pro_price as 'Product Price', com_name as 'Company Name' from item_mast inner join company_mast 
	on item_mast.pro_com = company_mast.com_id;
/*21. Write a SQL query to display the average price of items of each company, showing the name of the company. (company_mast + item_mast)*/
select avg(pro_price) as 'Average Product Price', com_name as 'Company Name' from item_mast inner join company_mast 
	on item_mast.pro_com = company_mast.com_id group by company_mast.com_name;
/*22. Write a SQL query to display the names of the company whose products have an average price larger than or equal to 350. 
	(company_mast + item_mast)*/
select avg(pro_price) as 'Average Product Price', com_name as 'Company Name' from item_mast inner join company_mast 
	on item_mast.pro_com = company_mast.com_id group by company_mast.com_name having avg(pro_price) >= 350;
/*23. Write a SQL query to display the name of each company along with the ID and price for their most expensive product. 
	(company_mast + item_mast)*/
select pro_name as 'Product Name', pro_price as 'Prodcut Price', com_name as 'Company Name' from item_mast inner join company_mast
    on item_mast.pro_com = company_mast.com_id and pro_price = (select max(pro_price) from item_mast where item_mast.pro_com = company_mast.com_id);