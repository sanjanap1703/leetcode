# Write your MySQL query statement below
SELECT e.employee_id, e.name, r.reports_count,  average_age
FROM Employees e join (select  reports_to  , count(distinct employee_id) as reports_count,round(avg(age)) as average_age  from Employees group by reports_to having count(distinct employee_id)>=1 and not isnull(reports_to))r ON e.employee_id=r.reports_to
ORDER BY e.employee_id;