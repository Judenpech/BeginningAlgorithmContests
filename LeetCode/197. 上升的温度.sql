Create table If Not Exists Weather (Id int, RecordDate date, Temperature int)
Truncate table Weather
insert into Weather (Id, RecordDate, Temperature) values ('1', '2015-01-01', '10')
insert into Weather (Id, RecordDate, Temperature) values ('2', '2015-01-02', '25')
insert into Weather (Id, RecordDate, Temperature) values ('3', '2015-01-03', '20')
insert into Weather (Id, RecordDate, Temperature) values ('4', '2015-01-04', '30')

-----

solution 1

# MySQL的函数Datadiff来计算两个日期的差值
SELECT w1.Id 
    FROM Weather w1 INNER JOIN Weather w2
    ON w1.Temperature>w2.Temperature AND DATEDIFF(w1.RecordDate,w2.RecordDate)=1;

-----

solution 2

# MySQL的TO_DAYS函数，用来将日期换算成天数
SELECT w1.Id 
    FROM Weather w1 INNER JOIN Weather w2
    ON w1.Temperature>w2.Temperature AND TO_DAYS(w1.RecordDate)-TO_DAYS(w2.RecordDate)=1;

-----

solution 3

# Subdate函数，来实现日期减1，得到一个新的日期
SELECT w1.Id 
    FROM Weather w1 INNER JOIN Weather w2
    ON w1.Temperature>w2.Temperature AND SUBDATE(w1.RecordDate,1)=w2.RecordDate;