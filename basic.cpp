#include <iostream>
#include <string>

using namespace std;

class Person {                     // encapsulate property and methods within a class is encapsulation.
    public:                        // public access specifier/identifier
        string name;
        int age;

        Person (){                 // non-parameterized constructor
            this -> salary = 0;
        }

        Person(string name, int age, double salary){  //parameterized constructor
            this -> name = name;
            this -> age = age;
            this -> salary = salary;
        }

        // N.B - as there is two constructor here, it creates constructor overloading. 
        //      which is basically an example of polymorphism.........

        void getInfo(){                    // getter function/method --- a member function
            
            cout << "name :" << name << endl;
            cout << "age :" << age << endl;
            cout << "salary :" << salary << endl;
        }
        void setInfo(double salary){       // setter function/method --- a member function
            this -> salary = salary;
        }

    private:                               // private access specifier/identifier
        double salary;
};

int main(){
    Person p1("Rashed", 30, 40000);
    p1.getInfo();
    return 0;
};