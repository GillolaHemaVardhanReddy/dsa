#include<bits/stdc++.h>
using namespace std;

class Employee {
    // attributes and properties
    // 3 access modifiers: public, private, protected

    /*
     "private property" of a method of a class is only accessible inside the class only.
     It can't be used outside.
     "public property" of a method of a class is accessible both inside and outside the class.
     "protected" is somewhere between private and public which is defined by some rules.
     Everything in a class is private by default.
     We define private:, public:, or protected:.
     Anything below these keywords follows the rules of that keyword.
    */

    /*
     Constructor is a special method.
     Constructor rules: 
        1. Won't have a return value specified or used.
        2. Its name is the same as the class name.
        3. Constructor may be private or public.

        once we create a class with our own constructor it looses 
        default constructor and
        any class that inherits this user defined constructor class will also
        loose their own default constructor which means
        even children of theses classes need a user defined constructors
    */
   
   public:
    string Name;
    string Company;
    int Age;

    // Member function to introduce the employee
    void introduce() {
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Company : " << Company << endl;
    }

    // Constructor to initialize an Employee object
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    // Creating instance of class Employee
    Employee e1("hema vardhan", "brochill", 21); // Whenever we create a class instance, a constructor is invoked
    // also can use Employee e1 = Employee("hema","brochill",21);
    // If we don't create any constructor, then the compiler creates its own

    // Calling the introduce method
    e1.introduce();
    
    return 0;
}
