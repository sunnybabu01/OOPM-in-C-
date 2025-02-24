#include <iostream>

using namespace std;

class Person {
public:
    virtual void payBill() = 0; // Pure virtual function (abstract class)
};

class Student : public Person {
public:
    void payBill() override {
        cout << "Student pays tuition fees." << endl;
    }
};

class Employee : public Person {
public:
    void payBill() override {
        cout << "Employee pays utility and other bills." << endl;
    }
};

int main() {
    Person* person1 = new Student(); // Student object
    Person* person2 = new Employee(); // Employee object

    cout << "As a Student: ";
    person1->payBill();

    cout << "As an Employee: ";
    person2->payBill();

    // Free allocated memory
    delete person1;
    delete person2;

    return 0;
}
