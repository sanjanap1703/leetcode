# Write your MySQL query statement below
#select p.product_name , s.year, s.price from Sales s Left Join Product p on s.product_id=p.product_id;
SELECT p.product_name, s.year, s.price
FROM Sales s
JOIN Product p ON s.product_id = p.product_id
GROUP BY s.sale_id;