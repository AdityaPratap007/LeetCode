# Write your MySQL query statement below
select query_name , round(sum(rating/position)/count(query_name),2) as quality,
round((sum(if( rating < 3,1,0))/count(query_name))*100,2) 
as poor_query_percentage from Queries
WHERE 
query_name IS NOT NULL
 group by query_name
