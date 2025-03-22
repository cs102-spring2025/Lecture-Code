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
         * @brief displays an object's data member values
         */
        void display() {
            cout << name << ":" << student_id << endl;
        }

};

class StudentRecord {
        public:
            /**
             * @brief Construct a new Student Record object
             */
            StudentRecord() {
                num_students = 0;
                Student record[num_students];
            }

            /**
             * @brief Set the record object
             * @param student 
             */
            void set_record(Student student) {
                record[num_students] = student;
                num_students++;
            }

            /**
             * @brief updates a student's name given an id and updates the array
             * @param student which is a reference
             * @param target_id 
             * @param new_name 
             */
            void modify_record(Student &student, int target_id, string new_name){
                
                // update student name using the reference to the student object
                student.set_name(new_name);

                // update record array by first searching for the record 
                for (int i = 0; i < num_students; i ++) {
                    if (record[i].get_student_id() == target_id ){
                        record[i].set_name(new_name);
                    }
                }
            }


            /**
             * @brief displays student objects from record array 
             */
            void display(){
                for (int i = 0; i < num_students; i++) {
                   cout << record[i].get_name() << " : " << record[i].get_student_id();
                   cout << endl; 
                }
            }

        private:
            int num_students;
            Student record[RECORDS];

};

int main () {
    
    Student s1("Mary Poppins", 1111);
    Student s2("Charlie Brown", 2222);
    StudentRecord hamilton;
    hamilton.set_record(s1);
    hamilton.set_record(s2);
    hamilton.display();
    hamilton.modify_record(s2, 2222, "Lucy Brown");
    // display the array of students to test updating the name in array 
    hamilton.display();
    // display the object's name to test modifying the name directly
    cout << "Name changed: " << s2.get_name() << endl;
    return 0;
}

