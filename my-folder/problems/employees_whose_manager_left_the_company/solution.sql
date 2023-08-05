# Write your MySQL query statement below
#select t.* from (SELECT e1.employee_id 
#FROM Employees e1, Employees e2
#WHERE e1.employee_id=e2.manager_id and e1.salary<30000) as t;
select  employee_id from Employees  where manager_id not in (select  employee_id from Employees ) and salary<30000 order by employee_id;