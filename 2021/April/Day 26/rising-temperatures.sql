#Source :https://leetcode.com/problems/rising-temperature/submissions/

SELECT t2.id
FROM Weather t1, Weather t2
WHERE t1.recordDate = DATE_SUB(t2.recordDate, INTERVAL 1 DAY)
AND t2.Temperature > t1.Temperature
