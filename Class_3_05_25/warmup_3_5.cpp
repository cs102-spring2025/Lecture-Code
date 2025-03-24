#include <iostream>
#include <string>
using namespace std;

/**
 * @class EmployeeRecord
 * @brief A class that creates an employee record
 * Each employee record contains a name and an id
 * 
 */
class EmployeeRecord { // naming convention
    public:
        EmployeeRecord(string initial_name, int initial_id){ // constructor with two param
            name = initial_name;
            id = initial_id;
        }

        EmployeeRecord(){ // default constructor
            name = "no name";
            id = 0;
        }

        void set_name(string new_name){ // member functions
                name = new_name;
        }

        void set_id(int new_id) { // member functions
            id = new_id;
        }

        string get_name(){ // member functions
            return name;
        }

        int get_id(){ // member functions
            return id;
        }
        
        void display() { // class function
            cout << "Employee  " << name << 
            " with employee id " << id << endl;
        }

        /** NEW
         * @brief compare two employee ids
         * @param other 
         * @return true 
         * @return false 
         */
        bool compare_ids(EmployeeRecord& other) { // use reference so we don't have to copy entire object - common
            return (id == other.id && name == other.name);
        }

    private:
        string name; // data members
        int id; // data member
};

int main() {
    // create object with 2 parameters
    // output object values
    // create object with no parameters --> EmployeeRecord emp1; NOT EmployeeRecord emp1();
    // show how to set the value
    // compare two employee by id
   
    EmployeeRecord emp1("Mary Smith", 4444);
    EmployeeRecord emp2("John Brown", 3333);

    EmployeeRecord emp3; // to invoke default constructor
    emp1.display();
    emp3.display();
    emp3.set_id(4444);
    emp3.display();

    cout << emp1.compare_ids(emp3) << endl;
    

}