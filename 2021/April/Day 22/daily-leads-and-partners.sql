#Source :https://leetcode.com/problems/daily-leads-and-partners/submissions/
# Write your MySQL query statement below
SELECT date_id, make_name,  count(DISTINCT lead_id) as unique_leads,count(DISTINCT partner_id) as unique_partners from DailySales
Group by date_id,make_name
