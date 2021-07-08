# Write your MySQL query statement below


SELECT id,
sum(jan_revenue) as Jan_revenue,
sum(feb_revenue) as Feb_revenue,
sum(mar_revenue) as Mar_revenue,
sum(apr_revenue) as Apr_revenue,
sum(may_revenue) as May_revenue,
sum(jun_revenue) as Jun_revenue,
sum(jul_revenue) as Jul_revenue,
sum(aug_revenue) as Aug_revenue,
sum(sep_revenue) as Sep_revenue,
sum(oct_revenue) as Oct_revenue,
sum(nov_revenue) as Nov_revenue,
sum(dec_revenue) as Dec_revenue

from (
    select
        department.*,
        case when month = 'Jan' then revenue end as 'Jan_Revenue',
        case when month = 'Feb' then revenue end as 'Feb_Revenue',
        case when month = 'Mar' then revenue end as 'Mar_Revenue',
        case when month = 'Apr' then revenue end as 'Apr_Revenue',
        case when month = 'May' then revenue end as 'May_Revenue',
        case when month = 'Jun' then revenue end as 'Jun_Revenue',
        case when month = 'Jul' then revenue end as 'Jul_Revenue',
        case when month = 'Aug' then revenue end as 'Aug_Revenue',
        case when month = 'Sep' then revenue end as 'Sep_Revenue',
        case when month = 'Oct' then revenue end as 'Oct_Revenue',
        case when month = 'Nov' then revenue end as 'Nov_Revenue',
        case when month = 'Dec' then revenue end as 'Dec_Revenue'
    from department
) tbl
group by id;
