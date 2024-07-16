# Write your MySQL query statement below
select A.id from Weather A inner join weather B 
on A.recordDate=B.recordDate + interval 1 DAY 
where A.temperature> B.temperature