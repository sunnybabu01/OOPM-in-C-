#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    double* cgpaptr;
    student (string name, double cgpa){
        this-> name = name ;
         cgpaptr = new double;
         *cgpaptr = cgpa;

    }

    student(student &obj){
        this->name= name;
        this->cgpaptr=cgpaptr;
    }

    void getInfo(){
        cout <<"name: "<< name << endl;
        cout <<"cgpa: "<< cgpaptr << endl;

    }

};

int main(){
    student s1("Sunny Ranjan", 8.9);
    // student s2(s1);
    s1.getInfo();
    

    return 0;

}