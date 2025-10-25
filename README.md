# Employee Management System (C++)

A simple **Employee Management System** implemented in C++ demonstrating **inheritance**, **polymorphism**, and **salary calculation** for different types of employees: Full-Time, Part-Time, and Freelancer.

---

## Table of Contents

* [Overview](#overview)
* [Classes](#classes)
* [Features](#features)
* [Usage](#usage)
* [Code Structure](#code-structure)
* [Example Output](#example-output)
* [License](#license)

---

## Overview

This project models an Employee management system with multiple employee types. Each employee type has its own salary calculation logic:

* **Full-Time:** Salary = Basic + HRA + DA
* **Part-Time:** Salary = Hours × Rate
* **Freelancer:** Salary = Projects × Pay Per Project

Polymorphism allows the system to handle different employee types seamlessly.

---

## Classes

### `Employee` (Base Class)

Represents a generic employee.

**Attributes:**

* `name` : `string` — Employee's name
* `id` : `int` — Employee ID

**Methods:**

* `displayInfo()` — Prints employee basic information

---

### `FullTime` (Derived Class)

Represents a full-time employee.

**Attributes:**

* `basic` : `double` — Basic salary
* `hra` : `double` — House Rent Allowance
* `da` : `double` — Dearness Allowance

**Methods:**

* `calculateSalary()` — Returns total salary
* `displayInfo()` — Prints full-time employee info including salary

---

### `PartTime` (Derived Class)

Represents a part-time employee.

**Attributes:**

* `hours` : `double` — Hours worked
* `rate` : `double` — Hourly rate

**Methods:**

* `calculateSalary()` — Returns total salary
* `displayInfo()` — Prints part-time employee info including salary

---

### `Freelancer` (Derived Class)

Represents a freelancer.

**Attributes:**

* `projects` : `int` — Number of projects completed
* `payPerProject` : `double` — Payment per project

**Methods:**

* `calculateSalary()` — Returns total salary
* `displayInfo()` — Prints freelancer info including salary

---

## Features

* Demonstrates **OOP concepts**: inheritance, polymorphism, constructors
* Salary calculation for multiple employee types
* Simple, modular, and extendable code structure

---

## Usage

1. Clone the repository:

```bash
git clone https://github.com/Mamoonkhan11/Payroll-Management-System
```

2. Compile the code:

```bash
g++ main.cpp employee.cpp -o EmployeeApp
```

3. Run the application:

```bash
./EmployeeApp
```

---

## Code Structure

```
PAYROLL MANAGEMENT SYSTEM
├── employee.h         
├── employee.cpp       
├── main.cpp           
└── README.md          
```

---

## Example Output

```
Name: Alice, ID: 101, Type: Full-Time, Salary: 50000
Name: Bob, ID: 102, Type: Part-Time, Salary: 12000
Name: Charlie, ID: 103, Type: Freelancer, Salary: 30000
```

---
