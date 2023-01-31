# Source : https://leetcode.com/problems/recyclable-and-low-fat-products/submissions/
SELECT product_id from products WHERE
low_fats='Y' AND recyclable='Y';