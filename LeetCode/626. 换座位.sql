Create table If Not Exists seat(id int, student varchar(255))
Truncate table seat
insert into seat (id, student) values ('1', 'Abbot')
insert into seat (id, student) values ('2', 'Doris')
insert into seat (id, student) values ('3', 'Emerson')
insert into seat (id, student) values ('4', 'Green')
insert into seat (id, student) values ('5', 'Jeames')


-----

# Write your MySQL query statement below
SELECT s.id,s.student
FROM (SELECT id-1 id,student FROM seat WHERE MOD(id,2)=0 
      UNION
	  SELECT id+1 id,student FROM seat WHERE MOD(id,2)=1 AND id!=(SELECT COUNT(*) FROM seat) 
      UNION
	  SELECT id,student FROM seat WHERE MOD(id,2)=1 AND id=(SELECT COUNT(*) FROM seat)) s
ORDER BY id; 