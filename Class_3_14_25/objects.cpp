#include <iostream>
#include <string>
using namespace std;
const int RECORDS= 100; 

class Student {
    
    private:
        string name;    
        int student_id;

    public:
        /**
         * @brief Construct a new Student object 
         */
        Student(){
            name = "no name";
            student_id = 0;
        }
        
        /**
         * @brief Construct a new Student object 
         * @param initial_name 
         * @param initial_id 
         */
        Student(string initial_name, int initial_id) {
            name = initial_name;
            student_id = initial_id;
        }

        /**
         * @brief Get the name object
         * @return string 
         */
        string get_name() {
            return name;
        }
        
        /**
         * @brief Get the student id object
         * @return int 
         */
        int get_student_id() {
            return student_id;
        }

        /**
         * @brief Set the name object 
         * @param new_name 
         */
        void set_name(string new_name) {
            name = new_name;
        }
        
        /**
         * @brief display name and id of object 
         */
        void display() {
            cout << name << ":" << student_id << endl;
        }

        /**
         * @brief change name and id of object 
         * @param s 
         * @param name 
         */
        void change_info(Student &s, string name){
            s.set_name(name);
        }

};

    int main() {
        // create a student object
        Student s1("Mary Brown", 1111);
        // display the address where in memory the object is storing its data
        cout << &s1 << endl;
        // create a pointer to that object if we want to manipulate the memory
        Student* point = &s1;
        cout << s1.get_name() << endl;
        s1.change_info(s1, "Change Name");
        cout << s1.get_name() << endl;

        return 0;
    }