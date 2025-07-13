#include <iostream>
#include <string>

using namespace std;

class Person {
    public:                        
        string name;
        int age;

        // Person(string name, int age){  
        //     this -> name = name;
        //     this -> age = age;
        // }

        // void getInfo(){                      
        //     cout << "name :" << name << endl;
        //     cout << "age :" << age << endl;
        // }

        Person(){  
            cout << "1st Runs Parent or base constructor \n";
        };
};

class Student : public Person{      // name and age inherits from person class
        //  name, age, rollno
        public:
            int rollno;

            Student (){
                cout << "Then runs Child or derived constructor \n";
            };

            void getInfo(){                      
                cout << "name :" << name << endl;
                cout << "age :" << age << endl;
                cout << "rollno :" << rollno << endl;
            }
            
    };

int main(){
    Student s1;
    s1.name = "Rashed";
    s1.age = 51;
    s1.rollno = 20;
    s1.getInfo();


    return 0;
};

/*
1. for inheritance constructor, parent constructor called first before child constructor.
2. for inheritance destructor, child constructor called first to de allocate memory then parent.
*/