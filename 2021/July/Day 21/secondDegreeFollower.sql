SELECT f.followee as 'follower', count(distinct f.follower) as num from follow f
where f.followee in (select distinct f3.follower from follow f3)
group by f.followee
order by f.followee
