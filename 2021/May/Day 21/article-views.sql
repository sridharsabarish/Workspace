# Source : https://leetcode.com/problems/article-views-ii/submissions/

SELECT distinct a1.viewer_id as id from

(SELECT  viewer_id, count( distinct article_id) as tot,view_date from Views
group by viewer_id,view_date) as a1

WHERE a1.tot>1;
