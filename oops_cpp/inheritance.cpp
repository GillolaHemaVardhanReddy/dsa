#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
   virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : public AbstractEmployee { // Changed inheritance to public
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

class Developer : public Employee { // Changed inheritance to public
    /*
     Inheritance: There are 2 classes, a parent/base class and a child/derived class.
     Any class which inherits from another class is called a child class.
     The class which is inherited by other classes is called a parent class.

     A child class can have its own methods that are not present in the parent
     and can also use the parent class methods and attributes.

     In C++, inheritance is done using the ":" symbol.

     Here Developer is the child class and Employee is the parent class.
     The Developer class has all properties/attributes of the Employee class.

     If the parent class has a user-defined constructor, the child class also needs
     a user-defined constructor because it loses the default constructor.
    */
    public: 
        string FavProgramLang;
        /*
            When declaring a user-defined constructor in the child class, we also need
            to call the parent class constructor since it has no default constructor.
            We do that using a colon ":" after the child constructor, as
            shown below.

            We can use all public methods and variables of the parent class,
            but to access private members, we use getters and setters.
        */
        Developer(string name, string company, int age, string favprogramlang)
        :Employee(name, company, age) {
            FavProgramLang = favprogramlang;
        }
        void fixBug() {
            cout << getName() << " fixes bugs using " << FavProgramLang << endl;
        }
};

int main() {
    Developer d("hema vardhan", "brochill", 28, "cpp");

    cout<<d.getName();
    
    return 0;
}
