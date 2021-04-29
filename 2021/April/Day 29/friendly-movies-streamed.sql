# Source : https://leetcode.com/problems/friendly-movies-streamed-last-month/submissions/
# Write your MySQL query statement below

SELECT distinct title from TVProgram t inner join content c on t.content_id = c.content_id
WHERE c.content_type='Movies' and Kids_content='Y'
and
t.program_date>='2020-06-01 00:00' and t.program_date<'2020-07-01 00:00'
