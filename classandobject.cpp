#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
     double salary;
    //properties ya attributes
    public:
    //non-parameterized
    Teacher(){
        dept = "CSIT";
    }
    //parameterized
    Teacher(string n, string d, string s, double sal){
        name =n;
        dept = d;
        subject = sal;
    }
    string name;
    string subject;
    string dept;
     void changeDept(string newDept){
        dept = newDept;
     }
    //methods ya member fuction
        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Subject:"<<subject<<endl;
            cout<<"dept:"<<dept<<endl;
        }
};

int main (){
    Teacher t1 ("Chetna maam", "CSIT" , "OOPM",35000);
    t1.getInfo();
    return 0;
}