#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
        string name;
        double cgpa;

        //parameterized constructor
        // Student(string name,int roll, double cgpa){ 
        //     this->name = name;
        //     this->roll = roll;
        //     this->cgpa = cgpa;
        // }

        void getInfo(){
            cout << "name :" << name << endl;
            cout << "cgpa :" << cgpa << endl;
            cout << "roll :" << roll << endl;
        }
        void setInfo(int roll){
            this->roll = roll;
        }
    private:
        int roll;  // private outside, only can be accessed using getter/setter method
};

int main(){
    Student s9; // default constructor invoked
    s9.name = "rashed";
    s9.cgpa = 3.34;
    s9.setInfo(1510); // using setter method to set value of private properties
    s9.getInfo();

    // Student s1("Rashed",15108, 3.34); //creating an object t1 using parameterized constructor
    // s1.getInfo();
    // Student s2(s1); // default copy constructor
    // s2.getInfo();
};