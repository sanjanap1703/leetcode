# Write your MySQL query statement below
select buyer_id,join_date,count(distinct order_id) as orders_in_2019 from Orders o right join Users u on user_id=buyer_id where year(order_date)=2019 group by user_id  union select user_id as buyer_id ,join_date ,0 as orders_in_2019 from Orders o right join Users u on buyer_id=user_id where user_id not in(select buyer_id from Orders where year(order_date)=2019)order by buyer_id;