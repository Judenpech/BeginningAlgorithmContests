# Write your MySQL query statement below
SELECT e1.Name Employee
    FROM Employee e1
    WHERE e1.Salary>(
    SELECT e2.Salary
    From Employee e2
    WHERE e2.Id=e1.ManagerId);