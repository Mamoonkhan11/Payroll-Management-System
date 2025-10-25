// Main driver (menu, user interaction) and Manager of Blueprint

#include "employee.h"

int main() {
    vector<unique_ptr<Employee>> employees;     // List of all employees //
    int choice;

    do {

        // Add 5-sec pause before showing the menu (for better readability) //
        std::this_thread::sleep_for(std::chrono::seconds(5));

        cout << "\n PAYROLL MANAGEMENT SYSTEM \n";
        cout << "1. Add Full-Time Employee\n";
        cout << "2. Add Part-Time Employee\n";
        cout << "3. Add Freelancer\n";
        cout << "4. Display All Employees\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Add Full-Time Employee //
            string name;
            int id;
            double basic, hra, da;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Basic Salary: ";
            cin >> basic;
            cout << "Enter HRA: ";
            cin >> hra;
            cout << "Enter DA: ";
            cin >> da;

            employees.push_back(make_unique<FullTime>(name, id, basic, hra, da));
            cout << "Full-Time Employee Added Successfully!\n";
        } 
        else if (choice == 2) {

            // Add Part-Time Employee //
            string name;
            int id;
            double hours, rate;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Hours Worked: ";
            cin >> hours;
            cout << "Enter Rate per Hour: ";
            cin >> rate;

            employees.push_back(make_unique<PartTime>(name, id, hours, rate));
            cout << "Part-Time Employee Added Successfully!\n";
        } 
        else if (choice == 3) {
            
            // Add Freelancer //
            string name;
            int id, projects;
            double payPerProject;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Number of Projects: ";
            cin >> projects;
            cout << "Enter Pay per Project: ";
            cin >> payPerProject;

            employees.push_back(make_unique<Freelancer>(name, id, projects, payPerProject));
            cout << "Freelancer Added Successfully!\n";
        } 
        else if (choice == 4) {
            
            // Display All Employees //
            if (employees.empty()) {
                cout << "No employees added yet.\n";
            } else {
                cout << "\n=== Employee Details ===\n";
                for (auto &e : employees)
                    e->displayInfo();

                cout << "Total Employees: " << employees.size() << endl;
            }
        } 
        else if (choice == 5) {
            cout << "Exiting Payroll System...\n";
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}