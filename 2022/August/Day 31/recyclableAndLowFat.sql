# source : https://leetcode.com/problems/recyclable-and-low-fat-products/submissions/
# Write your MySQL query statement below

SELECT product_id from Products WHERE low_fats='Y' AND recyclable='Y';
