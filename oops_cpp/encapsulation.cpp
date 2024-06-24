#include<bits/stdc++.h>
using namespace std;

class Employee {
    /*
     Encapsulation is the idea of bundling or wrapping data together, and 
     methods are created to operate on that data, which is tied to that class itself.
     This restricts other classes from directly interacting with the data.

     Other classes can interact with some getters and setters.
     These getters and setters are public methods.

     We use private to create encapsulation, and these are not directly accessible 
     to other classes.
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
};

int main() {
    // Creating an instance of the class Employee
    Employee e1("hema vardhan", "brochill", 21);
    e1.introduce();

    // Modifying the attributes using setters
    e1.setName("jagan");
    e1.setCompany("google");
    e1.setAge(25);

    // Introducing the modified employee
    e1.introduce();
    
    return 0;
}
