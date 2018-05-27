# Write your MySQL query statement below
SELECT c.class
    FROM (SELECT DISTINCT student,class FROM courses) c
    GROUP BY c.class
    HAVING COUNT(c.student)>=5;