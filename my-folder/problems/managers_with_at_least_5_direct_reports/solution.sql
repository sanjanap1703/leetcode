# Write your MySQL query statement below
select name from Employee e,(select  managerId from Employee group by managerId having count(id)>=5) as i where e.id=i.managerId;