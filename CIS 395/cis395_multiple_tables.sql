# ************************************************************
# Sequel Pro SQL dump
# Version 4541
#
# http://www.sequelpro.com/
# https://github.com/sequelpro/sequelpro
#
# Host: 127.0.0.1 (MySQL 5.7.23)
# Database: cis395class
# Generation Time: 2019-09-19 22:54:11 +0000
# ************************************************************


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


# Dump of table customer
# ------------------------------------------------------------

DROP TABLE IF EXISTS `customer`;

CREATE TABLE `customer` (
  `customer_id` varchar(4) NOT NULL,
  `cust_name` varchar(30) DEFAULT NULL,
  `city` varchar(20) DEFAULT NULL,
  `grade` varchar(4) DEFAULT NULL,
  `salesman_id` varchar(4) DEFAULT NULL,
  PRIMARY KEY (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `customer` WRITE;
/*!40000 ALTER TABLE `customer` DISABLE KEYS */;

INSERT INTO `customer` (`customer_id`, `cust_name`, `city`, `grade`, `salesman_id`)
VALUES
	('3001','Brad Guzan','London','','5005'),
	('3002','Nick Rimando','New York','100','5001'),
	('3003','Jozy Altidor','Moscow ','200','5007'),
	('3004','Fabian Johnson','Paris','300','5006'),
	('3005','Graham Zusi','California','200','5002'),
	('3007','Brad Davis','New York','200','5001'),
	('3008','Julian Green','London','300','5002'),
	('3009','Geoff Cameron','Berlin','100','5003');

/*!40000 ALTER TABLE `customer` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table emp_details
# ------------------------------------------------------------

DROP TABLE IF EXISTS `emp_details`;

CREATE TABLE `emp_details` (
  `emp_id` varchar(6) NOT NULL,
  `emp_fname` varchar(30) DEFAULT NULL,
  `emp_lname` varchar(30) DEFAULT NULL,
  `emp_dept` varchar(3) DEFAULT NULL,
  PRIMARY KEY (`emp_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `emp_details` WRITE;
/*!40000 ALTER TABLE `emp_details` DISABLE KEYS */;

INSERT INTO `emp_details` (`emp_id`, `emp_fname`, `emp_lname`, `emp_dept`)
VALUES
	('127323','Michale','Robbin','57'),
	('328717','Jhon','Snares','63'),
	('444527','Joseph','Dosni','7'),
	('526689','Carlos','Snares','63'),
	('539569','George','Mardy','27'),
	('555935','Alex','Manuel','57'),
	('631548','Alan','Snappy','27'),
	('659831','Zanifer','Emily','47'),
	('733843','Mario','Saule','63'),
	('748681','Henrey','Gabriel','47'),
	('839139','Maria','Foster','57'),
	('843795','Enric','Dosio','57'),
	('847674','Kuleswar','Sitaraman','57');

/*!40000 ALTER TABLE `emp_details` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table item_mast
# ------------------------------------------------------------

DROP TABLE IF EXISTS `item_mast`;

CREATE TABLE `item_mast` (
  `prod_id` varchar(4) DEFAULT NULL,
  `pro_name` varchar(30) DEFAULT NULL,
  `pro_pice` decimal(6,2) DEFAULT NULL,
  `mfg_cod` varchar(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `item_mast` WRITE;
/*!40000 ALTER TABLE `item_mast` DISABLE KEYS */;

INSERT INTO `item_mast` (`prod_id`, `pro_name`, `pro_pice`, `mfg_cod`)
VALUES
	('101','Mother Board',320.00,'15'),
	('102','Key Board',45.00,'16'),
	('103','ZIP drive',25.00,'14'),
	('104','Speaker',55.00,'16'),
	('105','Monitor',500.00,'11'),
	('106','DVD drive',90.00,'12'),
	('107','CD drive',80.00,'12'),
	('108','Printer',260.00,'13'),
	('109','Refill cartridge',35.00,'13'),
	('110','Mouse',25.00,'12');

/*!40000 ALTER TABLE `item_mast` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table movies
# ------------------------------------------------------------

DROP TABLE IF EXISTS `movies`;

CREATE TABLE `movies` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `title` varchar(30) DEFAULT NULL,
  `director` varchar(30) DEFAULT NULL,
  `year` varchar(4) DEFAULT NULL,
  `length_minutes` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `movies` WRITE;
/*!40000 ALTER TABLE `movies` DISABLE KEYS */;

INSERT INTO `movies` (`id`, `title`, `director`, `year`, `length_minutes`)
VALUES
	(1,'Toy Story','John Lasseter','1995',81),
	(2,'A Bug\'s Life','John Lasseter','1998',95),
	(3,'Toy Story 2','John Lasseter','1999',93),
	(4,'Monsters, Inc.','Pete Docter','2001',92),
	(5,'Finding Nemo','Andrew Stanton','2003',107),
	(6,'The Incredibles','Brad Bird','2004',116),
	(7,'Cars','John Lasseter','2006',117),
	(8,'Ratatouille','Brad Bird','2007',115),
	(9,'WALL-E','Andrew Stanton','2008',104),
	(10,'Up','Pete Docter','2009',101),
	(11,'Toy Story 3','Lee Unkrich','2010',103),
	(12,'Cars 2','John Lasseter','2011',120),
	(13,'Brave','Brenda Chapman','2012',102),
	(14,'Monsters University','Dan Scanlon','2013',110);

/*!40000 ALTER TABLE `movies` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table nobel_win
# ------------------------------------------------------------

DROP TABLE IF EXISTS `nobel_win`;

CREATE TABLE `nobel_win` (
  `year` varchar(4) DEFAULT NULL,
  `subject` varchar(30) DEFAULT NULL,
  `winner` varchar(40) DEFAULT NULL,
  `contry` varchar(30) DEFAULT NULL,
  `category` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `nobel_win` WRITE;
/*!40000 ALTER TABLE `nobel_win` DISABLE KEYS */;

INSERT INTO `nobel_win` (`year`, `subject`, `winner`, `contry`, `category`)
VALUES
	('1970','Physics','Hannes Alfven','Sweden','Scientist'),
	('1970','Physics','Louis Neel','France','Scientist'),
	('1970','Chemistry','Luis Federico Leloir','France','Scientist'),
	('1970','Physiology','Ulf von Euler','Sweden','Scientist'),
	('1970','Physiology','Bernard Katz','Germany','Scientist'),
	('1970','Literature','Aleksandr Solzhenitsyn','Russia','Linguist'),
	('1970','Economics','Paul Samuelson','USA','Economist'),
	('1970','Physiology','Julius Axelrod','USA','Scientist'),
	('1971','Physics','Dennis Gabor','Hungary','Scientist'),
	('1971','Chemistry','Gerhard Herzberg','Germany','Scientist'),
	('1971','Peace','Willy Brandt','Germany','Chancellor'),
	('1971','Literature','Pablo Neruda','Chile','Linguist'),
	('1971','Economics','Simon Kuznets','Russia ','Economist'),
	('1978','Peace','Anwar al-Sadat','Egypt','President'),
	('1978','Peace','Menachem Begin','Israel','Prime Minister'),
	('1987','Chemistry','Donald J. Cram','USA','Scientist'),
	('1987','Chemistry','Jean-Marie Lehn','France','Scientist'),
	('1987','Physiology','Susumu Tonegawa','Japan','Scientist'),
	('1994','Economics','Reinhard Selten','Germany','Economist'),
	('1994','Peace','Yitzhak Rabin','Israel','Prime Minister'),
	('1987','Physics','Johannes Georg Bednorz','Germany','Scientist'),
	('1987','Literature','Joseph Brodsky','Russia','Linguist'),
	('1987','Economics','Robert Solow','USA','Economist'),
	('1994','Literature','Kenzaburo Oe','Japan','Linguist');

/*!40000 ALTER TABLE `nobel_win` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table north_american_cities
# ------------------------------------------------------------

DROP TABLE IF EXISTS `north_american_cities`;

CREATE TABLE `north_american_cities` (
  `city` varchar(30) DEFAULT NULL,
  `country` varchar(30) DEFAULT NULL,
  `population` int(11) DEFAULT NULL,
  `latitude` varchar(20) DEFAULT NULL,
  `longitude` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `north_american_cities` WRITE;
/*!40000 ALTER TABLE `north_american_cities` DISABLE KEYS */;

INSERT INTO `north_american_cities` (`city`, `country`, `population`, `latitude`, `longitude`)
VALUES
	('Guadalajara','Mexico',1500800,'20.659699','-103.349609'),
	('Toronto','Canada',2795060,'43.653226','-79.383184'),
	('Houston','United States',2195914,'29.760427','-95.369803'),
	('New York','United States',8405837,'40.712784','-74.005941'),
	('Philadelphia','United States',1553165,'39.952584','-75.165222'),
	('Havana','Cuba',2106146,'23.05407','-82.345189'),
	('Mexico City','Mexico',8555500,'19.432608','-99.133208'),
	('Phoenix','United States',1513367,'33.448377','-112.074037'),
	('Los Angeles','United States',3884307,'34.052234','-118.243685'),
	('Ecatepec de Morelos','Mexico',1742000,'19.601841','-99.050674'),
	('Montreal','Canada',1717767,'45.501689','-73.567256'),
	('Chicago','United States',2718782,'41.878114','-87.629798');

/*!40000 ALTER TABLE `north_american_cities` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table orders
# ------------------------------------------------------------

DROP TABLE IF EXISTS `orders`;

CREATE TABLE `orders` (
  `ord_no` varchar(5) NOT NULL,
  `purch_amt` decimal(6,2) DEFAULT NULL,
  `ord_date` varchar(10) DEFAULT NULL,
  `customer_id` varchar(4) DEFAULT NULL,
  `salesman_id` varchar(4) DEFAULT NULL,
  PRIMARY KEY (`ord_no`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `orders` WRITE;
/*!40000 ALTER TABLE `orders` DISABLE KEYS */;

INSERT INTO `orders` (`ord_no`, `purch_amt`, `ord_date`, `customer_id`, `salesman_id`)
VALUES
	('70001',150.50,'2012-10-05','3005','5002'),
	('70002',65.26,'2012-10-05','3002','5001'),
	('70003',2480.40,'2012-10-10','3009','5003'),
	('70004',110.50,'2012-08-17','3009','5003'),
	('70005',2400.60,'2012-07-27','3007','5001'),
	('70007',948.50,'2012-09-10','3005','5002'),
	('70008',5760.00,'2012-09-10','3002','5001'),
	('70009',270.65,'2012-09-10','3001','5005'),
	('70010',1983.43,'2012-10-10','3004','5006'),
	('70011',75.29,'2012-08-17','3003','5007'),
	('70012',250.45,'2012-06-27','3008','5002'),
	('70013',3045.60,'2012-04-25','3002','5001');

/*!40000 ALTER TABLE `orders` ENABLE KEYS */;
UNLOCK TABLES;


# Dump of table salesman
# ------------------------------------------------------------

DROP TABLE IF EXISTS `salesman`;

CREATE TABLE `salesman` (
  `salesman_id` varchar(4) NOT NULL,
  `name` varchar(30) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `commission` decimal(4,2) DEFAULT NULL,
  PRIMARY KEY (`salesman_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

LOCK TABLES `salesman` WRITE;
/*!40000 ALTER TABLE `salesman` DISABLE KEYS */;

INSERT INTO `salesman` (`salesman_id`, `name`, `city`, `commission`)
VALUES
	('5001','James Hoog','New York',0.15),
	('5002','Nail Knite','Paris',0.13),
	('5003','Lauson Hen','San Jose',0.12),
	('5005','Pit Alex','London',0.11),
	('5006','Mc Lyon','Paris',0.14),
	('5007','Paul Adam ','Rome',0.13);

/*!40000 ALTER TABLE `salesman` ENABLE KEYS */;
UNLOCK TABLES;



/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
