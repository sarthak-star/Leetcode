# Write your MySQL query statement below
select pro.product_name as product_name , s.year , s.price from Sales s inner join Product pro using(product_id);