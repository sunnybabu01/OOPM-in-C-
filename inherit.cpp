#include<iostream>
#include<string>
using namespace std;



class person{
    public:
    string name;
    int age;

    // person(string name, int age){
    //     this->name = name;
    //     this-> age= age;
    // }
// person(){   

//     }
    

};
class student : public person{
    public:
    int rollno;
    void getInfo(){
        cout<< "Name:"<<name<<endl;
        cout<< "Age:"<<age<<endl;
        cout <<"Roll No:"<< rollno<<endl;
    }

 
};


int main (){
    student s1;
    s1.name="Sunny Ranjan";
    s1.age=20;
    s1.rollno=281;

    s1.getInfo();
    return 0;
}