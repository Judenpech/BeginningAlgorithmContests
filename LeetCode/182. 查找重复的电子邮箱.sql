# Write your MySQL query statement below
SELECT p.Email
    From Person p
    GROUP BY p.Email
    HAVING COUNT(p.Email)>1;