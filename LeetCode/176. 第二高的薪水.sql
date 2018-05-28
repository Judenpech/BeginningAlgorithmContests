Create table If Not Exists Employee (Id int, Salary int)
Truncate table Employee
insert into Employee (Id, Salary) values ('1', '100')
insert into Employee (Id, Salary) values ('2', '200')
insert into Employee (Id, Salary) values ('3', '300')

-----

# Write your MySQL query statement below
SELECT MAX(e1.Salary) SecondHighestSalary
	FROM Employee e1
		WHERE e1.Salary<(SELECT MAX(Salary) FROM Employee);