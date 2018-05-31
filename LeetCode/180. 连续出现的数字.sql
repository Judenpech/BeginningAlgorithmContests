Create table If Not Exists Logs (Id int, Num int)
Truncate table Logs
insert into Logs (Id, Num) values ('1', '1')
insert into Logs (Id, Num) values ('2', '1')
insert into Logs (Id, Num) values ('3', '1')
insert into Logs (Id, Num) values ('4', '2')
insert into Logs (Id, Num) values ('5', '1')
insert into Logs (Id, Num) values ('6', '2')
insert into Logs (Id, Num) values ('7', '2')

-----

# Write your MySQL query statement below
select distinct l1.Num ConsecutiveNums from Logs l1
left join Logs l2 on l1.Id=l2.Id-1
left join Logs l3 on l1.Id=l3.Id-2
where l1.Num=l2.Num and l2.Num=l3.Num;