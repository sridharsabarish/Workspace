/* Write your T-SQL query statement below */


SELECT CONCAT_WS(', ',d.weekday,d.date,d.year) as day from
(SELECT datename(w,day) as weekday,datename(m,day)+space(1)+ datename(d,day) as date, datename(yy,day) as year from days)d
