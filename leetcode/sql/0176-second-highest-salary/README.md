<div align="center">

# 176. Second Highest Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Database](https://img.shields.io/badge/Database-MySQL-blue?style=for-the-badge)
![Runtime](https://img.shields.io/badge/Runtime-242_ms-orange?style=for-the-badge)
![Memory](https://img.shields.io/badge/Memory-0.0_B-success?style=for-the-badge)

[🔗 Open on LeetCode](https://leetcode.com/problems/second-highest-salary/)

</div>

---

## 📝 Problem

Write a solution to find the **second highest distinct salary** from the `Employee` table. If there is no second highest salary, return `null`.

<details>
<summary><b>📋 Table schema</b></summary>

<br>

**Employee**

| Column Name | Type |
|-------------|------|
| id          | int  |
| salary      | int  |

`id` is the primary key.

</details>

<details>
<summary><b>💡 Examples</b></summary>

<br>

**Example 1**

Input

| id | salary |
|----|--------|
| 1  | 100    |
| 2  | 200    |
| 3  | 300    |

Output

| SecondHighestSalary |
|---------------------|
| 200                 |

**Example 2**

Input

| id | salary |
|----|--------|
| 1  | 100    |

Output

| SecondHighestSalary |
|---------------------|
| null                |

</details>

---

## ✅ Solution

```sql
SELECT (
    SELECT DISTINCT s.salary
    FROM Employee s
    WHERE salary IS NOT NULL
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
```

## 🧠 Approach

- `DISTINCT` removes duplicate salaries, so the second highest means the second highest *distinct* value.
- `ORDER BY salary DESC` puts the highest salary first.
- `LIMIT 1 OFFSET 1` skips the highest and takes the next one.
- The query is wrapped in an outer `SELECT (...)` so that it returns `NULL` instead of an empty result when there is no second highest salary.
