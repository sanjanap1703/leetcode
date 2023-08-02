# Write your MySQL query statement below
select distinct p.product_id,p.product_name from Product p left join Sales s on p.product_id=s.product_id group by product_id having MIN(sale_date) >= CAST('2019-01-01' AS DATE) AND
       MAX(sale_date) <= CAST('2019-03-31' AS DATE)  ;