# Write your MySQL query statement below
select  ifnull((select num from MyNumbers group by num having count(*)<2 order by  num desc limit 1),NULL) as num;