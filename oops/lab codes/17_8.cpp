#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
protected:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    string Mobile_no;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee Name: ";
        cin >> Emp_name;

        cout << "Enter Employee ID: ";
        cin >> Emp_id;

        cout << "Enter Address: ";
        cin >> Address;

        cout << "Enter Mail ID: ";
        cin >> Mail_id;

        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee Name : " << Emp_name;
        cout << "\nEmployee ID   : " << Emp_id;
        cout << "\nAddress       : " << Address;
        cout << "\nMail ID       : " << Mail_id;
        cout << "\nMobile No.    : " << Mobile_no;
    }
};

// Derived class
class Programmer : public Employee {
private:
    double BP;

public:
    void generatePaySlip() {
        cout << "\n\n--- Programmer Pay Slip ---";
        getEmployeeDetails();

        cout << "Enter Basic Pay: ";
        cin >> BP;

        double DA = 0.52 * BP;
        double HRA = 0.27 * BP;
        double PF = 0.12 * BP;
        double StaffClubFund = 0.001 * BP;

        double GrossSalary = BP + DA + HRA;
        double NetSalary = GrossSalary - PF - StaffClubFund;

        displayEmployeeDetails();

        cout << fixed << setprecision(2);
        cout << "\nBasic Pay        : " << BP;
        cout << "\nDA (52%)         : " << DA;
        cout << "\nHRA (27%)        : " << HRA;
        cout << "\nPF (12%)         : " << PF;
        cout << "\nStaff Club (0.1%): " << StaffClubFund;
        cout << "\nGross Salary     : " << GrossSalary;
        cout << "\nNet Salary       : " << NetSalary << endl;
    }
};

// Derived class
class TeamLead : public Employee {
private:
    double BP;

public:
    void generatePaySlip() {
        cout << "\n\n--- Team Lead Pay Slip ---";
        getEmployeeDetails();

        cout << "Enter Basic Pay: ";
        cin >> BP;

        double DA = 0.52 * BP;
        double HRA = 0.27 * BP;
        double PF = 0.12 * BP;
        double StaffClubFund = 0.001 * BP;

        double GrossSalary = BP + DA + HRA;
        double NetSalary = GrossSalary - PF - StaffClubFund;

        displayEmployeeDetails();

        cout << fixed << setprecision(2);
        cout << "\nBasic Pay        : " << BP;
        cout << "\nDA (52%)         : " << DA;
        cout << "\nHRA (27%)        : " << HRA;
        cout << "\nPF (12%)         : " << PF;
        cout << "\nStaff Club (0.1%): " << StaffClubFund;
        cout << "\nGross Salary     : " << GrossSalary;
        cout << "\nNet Salary       : " << NetSalary << endl;
    }
};

// Derived class
class AssistantProjectManager : public Employee {
private:
    double BP;

public:
    void generatePaySlip() {
        cout << "\n\n--- Assistant Project Manager Pay Slip ---";
        getEmployeeDetails();

        cout << "Enter Basic Pay: ";
        cin >> BP;

        double DA = 0.52 * BP;
        double HRA = 0.27 * BP;
        double PF = 0.12 * BP;
        double StaffClubFund = 0.001 * BP;

        double GrossSalary = BP + DA + HRA;
        double NetSalary = GrossSalary - PF - StaffClubFund;

        displayEmployeeDetails();

        cout << fixed << setprecision(2);
        cout << "\nBasic Pay        : " << BP;
        cout << "\nDA (52%)         : " << DA;
        cout << "\nHRA (27%)        : " << HRA;
        cout << "\nPF (12%)         : " << PF;
        cout << "\nStaff Club (0.1%): " << StaffClubFund;
        cout << "\nGross Salary     : " << GrossSalary;
        cout << "\nNet Salary       : " << NetSalary << endl;
    }
};

// Derived class
class ProjectManager : public Employee {
private:
    double BP;

public:
    void generatePaySlip() {
        cout << "\n\n--- Project Manager Pay Slip ---";
        getEmployeeDetails();

        cout << "Enter Basic Pay: ";
        cin >> BP;

        double DA = 0.52 * BP;
        double HRA = 0.27 * BP;
        double PF = 0.12 * BP;
        double StaffClubFund = 0.001 * BP;

        double GrossSalary = BP + DA + HRA;
        double NetSalary = GrossSalary - PF - StaffClubFund;

        displayEmployeeDetails();

        cout << fixed << setprecision(2);
        cout << "\nBasic Pay        : " << BP;
        cout << "\nDA (52%)         : " << DA;
        cout << "\nHRA (27%)        : " << HRA;
        cout << "\nPF (12%)         : " << PF;
        cout << "\nStaff Club (0.1%): " << StaffClubFund;
        cout << "\nGross Salary     : " << GrossSalary;
        cout << "\nNet Salary       : " << NetSalary << endl;
    }
};

int main() {

    Programmer p;
    TeamLead t;
    AssistantProjectManager a;
    ProjectManager pm;

    int choice;

    cout << "===== Employee Pay Slip System =====";
    cout << "\n1. Programmer";
    cout << "\n2. Team Lead";
    cout << "\n3. Assistant Project Manager";
    cout << "\n4. Project Manager";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            p.generatePaySlip();
            break;

        case 2:
            t.generatePaySlip();
            break;

        case 3:
            a.generatePaySlip();
            break;

        case 4:
            pm.generatePaySlip();
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}