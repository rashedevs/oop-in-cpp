#include <iostream>
#include <string>

using namespace std;

/*
When one object acquires all the properties and behaviours of the parent object, 
i.e. known as inheritance, it provides code reusability. It is used to achieve
runtime polymorphism.
*/

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
---------------- constructor execution order based on types----------------------

A. for inheritance constructor, parent constructor called first before child constructor.
B. for inheritance destructor, child constructor called first to de allocate memory then parent.

-----------------modes of inheritance based on access specifier--------------------

1. if we inherits any public property from parent and inherits as a private like,
   class Student : private Person{......}
   then the child inherited property turns private into child.
2. same for protected and public.
3. private properties of parent class can be inherited in any mode from child.
4. protected mode properties can be inherited as private or protected, if we inherit any 
   protected property of parent, in public mode from child. then it will turn into protected
   automatically.
5. parent public properties will turn into your mode defined at child class.

--------------------------types of inheritance---------------------------------

1. Single Inheritance.

   Parent (Person) --> Child (student)

2. Multilevel Inheritance.

   Parent (Person) --> Parent (Student) --> Child (Graduate Students - msc/phd)

3. Multiple Inheritance. 

   Parent (Student - name, roll)---~~~]
                                      |---> Child (TA - name, roll, sub, salary)
   Parent (Teacher - sub, salary)--~~~]

4. Hierarchial Inheritance.

                                   |-----> Child (Teacher - name, age, sub, salary)
   Parent (Person - name, age)---|
                                   |-----> Child (Student - name, age, roll)
   
5. Hybrid Inheritance.

   Mixed of multiple types of inheritance alltogether.
*/