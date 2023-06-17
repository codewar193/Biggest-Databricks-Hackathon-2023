SELECT d.name
FROM department d
WHERE d.dept_Id NOT IN (SELECT DISTINCT i.dept_Id FROM instructor i);
