# Write your MySQL query statement below
#select s.name from SalesPerson s Join Orders o on s.sales_id=o.sales_id join Company c on  c.#com_id=o.com_id where c.name!="RED" or c.name is NULL;
select name from SalesPerson where sales_id not in (select sales_id from Orders where com_id=(select com_id from Company where name="RED"));