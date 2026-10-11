SELECT (
    SELECT DISTINCT s.salary
    FROM Employee s
    WHERE salary IS NOT NULL
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
