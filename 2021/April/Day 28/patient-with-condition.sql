#Source : https://leetcode.com/problems/patients-with-a-condition/submissions/
# Write your MySQL query statement below

SELECT patient_id, patient_name, conditions from Patients
WHERE conditions like '%DIAB1%' and conditions not like 'SADIAB100%'
