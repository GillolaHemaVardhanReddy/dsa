#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
    /*
     Abstraction: Hiding the complex logic or code and showing simple or logical
     methods outside. This enables complex functionality without exposing it to
     users and provides a user-friendly environment.
     To implement this, we use abstract classes in C++.
     In abstract classes, we can have functions declared without a body and
     attributes without values.
     Any method can be declared as abstract using the keyword "virtual" followed by "= 0".
    */
   virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : AbstractEmployee {
   private:
    string Name;
    string Company;
    int Age;

   public:
    // Setter for Name
    void setName(string name) {
        Name = name;
    }
    // Getter for Name
    string getName() {
        return Name;
    }

    // Setter for Company
    void setCompany(string company) {
        Company = company;
    }
    // Getter for Company
    string getCompany() {
        return Company;
    }

    // Setter for Age
    void setAge(int age) {
        // Additional logic can be added here (e.g., age validation)
        if (age >= 18) {  // Example validation: Age should be 18 or older
            Age = age;
        }
    }
    // Getter for Age
    int getAge() {
        return Age;
    }

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
        // Use the setter for Age to ensure validation logic is applied
        setAge(age);
    }

    // Implementation of the pure virtual function
    void AskForPromotion() {
        if(Age > 23) 
            cout << Name << " got promoted" << endl;
        else 
            cout << Name << " sorry, no promotion for you" << endl;
    }
};

class Developer: Employee {
    /*
     inheritance : there are 2 classes parent/base class and child or derived class
     any class which inherits other class is child class
     and class which is getting inherited by other classes is called parent

     child class can also have its own methods that are not present in parent
     and also use parent class methods and attributes

     usually inheritance is done using extends but in cpp we just use ":"
     semicolon to do so

     here Developer is child class and Employee is parent
     Developer class have all properties/attributes of Employee 
    */
    public: 
        string FavProgramLang;
};
int main() {
    Developer d;
    
    return 0;
}
