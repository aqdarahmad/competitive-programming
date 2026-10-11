<div align="center">

# 175. Combine Two Tables

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Database](https://img.shields.io/badge/Database-MySQL-blue?style=for-the-badge)
![Runtime](https://img.shields.io/badge/Runtime-426_ms-orange?style=for-the-badge)
![Beats](https://img.shields.io/badge/Beats-67.85%25-success?style=for-the-badge)

[🔗 Open on LeetCode](https://leetcode.com/problems/combine-two-tables/)

</div>

---

## 📝 Problem

Write a solution to report the **first name, last name, city, and state** of each person in the `Person` table. If the address of a `personId` is not present in the `Address` table, report `null` instead.

Return the result table in **any order**.

<details>
<summary><b>📋 Table schemas</b></summary>

<br>

**Person**

| Column Name | Type    |
|-------------|---------|
| personId    | int     |
| lastName    | varchar |
| firstName   | varchar |

`personId` is the primary key.

**Address**

| Column Name | Type    |
|-------------|---------|
| addressId   | int     |
| personId    | int     |
| city        | varchar |
| state       | varchar |

`addressId` is the primary key.

</details>

<details>
<summary><b>💡 Example</b></summary>

<br>

**Input**

Person

| personId | lastName | firstName |
|----------|----------|-----------|
| 1        | Wang     | Allen     |
| 2        | Alice    | Bob       |

Address

| addressId | personId | city          | state      |
|-----------|----------|---------------|------------|
| 1         | 2        | New York City | New York   |
| 2         | 3        | Leetcode      | California |

**Output**

| firstName | lastName | city          | state    |
|-----------|----------|---------------|----------|
| Allen     | Wang     | Null          | Null     |
| Bob       | Alice    | New York City | New York |

</details>

---

## ✅ Solution

```sql
SELECT p.lastName, p.firstName, a.city, a.state
FROM Person p
LEFT JOIN Address a ON p.personId = a.personId;
```

## 🧠 Approach

`LEFT JOIN` keeps every row from `Person`, even when there is no matching row in `Address`. In that case `city` and `state` come back as `NULL`.
