// Blueprint File of Declarations (structure, classes, prototypes)

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <thread>      // For sleep_for() //
#include <chrono>     // For chrono::seconds //

using namespace std;

//  Base Class for All Employees //
class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i);
    virtual double calculateSalary() const = 0;     // Pure virtual (abstract) //
    virtual void displayInfo() const;               // Common info display //
    virtual ~Employee() {}
};

//  Derived Class: Full-Time Employee //
class FullTime : public Employee {
private:
    double basic, hra, da;

public:
    FullTime(string n, int i, double b, double h, double d);
    double calculateSalary() const override;
    void displayInfo() const override;
};

//  Derived Class: Part-Time Employee //
class PartTime : public Employee {
private:
    double hours, rate;

public:
    PartTime(string n, int i, double h, double r);
    double calculateSalary() const override;
    void displayInfo() const override;
};

// Derived Class: Freelancer //
class Freelancer : public Employee {
private:
    int projects;
    double payPerProject;

public:
    Freelancer(string n, int i, int p, double pay);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif