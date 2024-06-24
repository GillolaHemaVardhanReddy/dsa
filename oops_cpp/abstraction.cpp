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
    /*
     To provide an implementation for the abstract function, we need to
     inherit from the abstract class in the class where we want to implement the body.
     In C++, we inherit using ":".
     Once a class inherits from an abstract class, it must implement all the abstract functions.
    */
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

int main() {
    // Creating an instance of the class Employee
    Employee e1("hema vardhan", "brochill", 21);
    e1.introduce();
    e1.AskForPromotion();

    // Modifying the attributes using setters
    e1.setName("jagan");
    e1.setCompany("google");
    e1.setAge(25);
    e1.AskForPromotion();

    // Introducing the modified employee
    e1.introduce();
    
    return 0;
}
