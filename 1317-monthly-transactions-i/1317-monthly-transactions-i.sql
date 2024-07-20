# Write your MySQL query statement
SELECT SUBSTR(trans_date,1,7) as month,country,count(id) as trans_count,Sum(CASE WHEN state='approved' then 1 else 0 end) as approved_count,
SUM(amount) as trans_total_amount,Sum(CASE WHEN state='approved'then amount else 0 end) as approved_total_amount from transactions 
group by month,country;