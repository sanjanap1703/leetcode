# Write your MySQL query statement below
 select a.user_id,round(a.c1/s.c2,2) as confirmation_rate   from (select user_id, count(*) as c2 from Confirmations  group by user_id) as s join (select user_id, count(*) as c1  from Confirmations  where action="confirmed "group by user_id ) as a on s.user_id=a.user_id 
 union 
 select user_id , 0 as confirmation_rate from Signups where user_id not in(select user_id from Confirmations where action="confirmed" );