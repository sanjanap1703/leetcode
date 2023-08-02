# Write your MySQL query statement be
#UPDATE Salary
#SET sex=(case when sex='f'then 'm' else 'f' end) ;
update salary set sex=replace('fm',sex,'');