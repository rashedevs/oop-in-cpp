#include <iostream>
#include <string>

using namespace std;

class Person {
    public:                        
        string name;
        int age;

        Person(string name, int age){  
            this -> name = name;
            this -> age = age;
        }

        void getInfo(){                      
            cout << "name :" << name << endl;
            cout << "age :" << age << endl;
        }

};

int main(){
    Person p1("Rashed", 30);
    p1.getInfo();

    
    return 0;
};