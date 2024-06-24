#include<bits/stdc++.h>
using namespace std;

class Employee {
    // attributes and properties
    // 3 access modifies public , private , protected
    /*
     "private property" of method of a class is only accessible inside class only
     it cant be used outside
     "public property" of method of a class is accessible inside class and
     outside
     "protected" is somewhere between private and public which is defined by some rules
     everything in class is private by default
     we define private: or public: or protected: 
     anything below these keywords follow the rules of that keyword
    */
   /*
    constructor is a special method
    constructor rules: 
        1. won't have a return value specified or used
        2. its name is same as class name
        3. constructor may be private or public
   */
   public:
    string Name ;
    string Company ;
    int Age ;
    void introduce() {
        cout << "Name : " << Name << endl ;
        cout << "Age : " << Age << endl ;
        cout << "Company : " << Company << endl ;
    }
    Employee( string name,string company,int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    // creating instance of class Empoyee
    Employee e1("hema vardhan","brochill",21) ; // whenever we create a class instance a constructor is envoked
    // if we dont create any constructor then compiler creates its own


    // e1.Age = 21 ;
    // e1.Company = "brochill" ;
    // e1.Name = "hema vardhan" ;
    e1.introduce();
    
    return 0;
}