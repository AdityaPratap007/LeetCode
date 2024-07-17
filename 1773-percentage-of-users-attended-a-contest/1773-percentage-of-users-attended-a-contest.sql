# Write your MySQL query statement below
select c.contest_id,round((count(distinct c.user_id)/(select count(user_id) from Users)*100),2) as percentage
from Users u RIGHT join Register c on u.user_id=c.user_id 
group by contest_id
order by percentage DESC,contest_id asc