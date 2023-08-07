# Write your MySQL query statement below
select s.product_id , t1.y as first_year, s.quantity, s.price from  Sales s,(select product_id,min(year) as y from Sales group by product_id) as t1 where t1.y=s.year and t1.product_id=s.product_id