#include <iostream>
#include <string>
using namespace std;
const int RECORDS= 100; 

class Student {
    public:
        Student(){
            name = "no name";
            student_id = 0;
        }
        Student(string initial_name, int initial_id) {
            name = initial_name;
            student_id = initial_id;
        }
        string get_name() {
            return name;
        }
        int get_student_id() {
            return student_id;
        }
        void set_name(string new_name) {
            name = new_name;
        }
        void display() {
            cout << name << ":" << student_id << endl;
        }

        void change_info(Student &s, string name){
            s.set_name(name);
        }
    
        private:
        string name;    
        int student_id;

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