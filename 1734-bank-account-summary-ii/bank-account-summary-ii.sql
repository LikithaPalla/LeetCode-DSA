# Write your MySQL query statement below
select name, sum(amount) as balance from Transactions
left join Users on Users.account=Transactions.account
group by name
having balance>10000;