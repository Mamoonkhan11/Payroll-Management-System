// Builder File Of Definitions (implementation of methods) //

#include "employee.h"

// Base Employee Implementation //
Employee::Employee(string n, int i) : name(n), id(i) {}

void Employee::displayInfo() const {
    cout << "Name: " << name << ", ID: " << id;
}

// Full-Time Implementation //
FullTime::FullTime(string n, int i, double b, double h, double d)
    : Employee(n, i), basic(b), hra(h), da(d) {}

double FullTime::calculateSalary() const {
    return basic + hra + da;
}

void FullTime::displayInfo() const {
    Employee::displayInfo();
    cout << ", Type: Full-Time, Salary: " << calculateSalary() << endl;
}

// Part-Time Implementation //
PartTime::PartTime(string n, int i, double h, double r)
    : Employee(n, i), hours(h), rate(r) {}

double PartTime::calculateSalary() const {
    return hours * rate;
}

void PartTime::displayInfo() const {
    Employee::displayInfo();
    cout << ", Type: Part-Time, Salary: " << calculateSalary() << endl;
}

// Freelancer Implementation //
Freelancer::Freelancer(string n, int i, int p, double pay)
    : Employee(n, i), projects(p), payPerProject(pay) {}

double Freelancer::calculateSalary() const {
    return projects * payPerProject;
}

void Freelancer::displayInfo() const {
    Employee::displayInfo();
    cout << ", Type: Freelancer, Salary: " << calculateSalary() << endl;
}