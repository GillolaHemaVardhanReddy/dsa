#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
   virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : public AbstractEmployee { // Changed inheritance to public
   protected: 
   /*
        whenever we use protected and keep methods or variables in it
        every child class that inherits these can also access them directly
        but no instance can use them directly

        in case of private not even child can use them
   */
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
    
    public: 
        string FavProgramLang;
        /*
            
        */
        Developer(string name, string company, int age, string favprogramlang)
        :Employee(name, company, age) {
            FavProgramLang = favprogramlang;
        }
        void fixBug() {
            // here we can use Name directly coz of protected
            cout << Name << " fixes bugs using " << FavProgramLang << endl;
        }
};

int main() {
    Developer d("hema vardhan", "brochill", 28, "cpp");

    d.fixBug();
    
    return 0;
}
