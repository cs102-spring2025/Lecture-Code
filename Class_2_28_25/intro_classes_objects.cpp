#include <iostream>
#include <string>
using namespace std;

/**
 * @class Student
 * @brief A class representing a student
 */
class Student {
    private: //accessible within the class only
        // data members
        string name; 
        double gpa;
        double math_grade;
        double cs_grade;

    public: // accessible inside the class and outside
      // member functions

      // constructor with 4 parameters
      Student(string initial_name, double initial_gpa, double initial_math, double initial_cs) {
            name = initial_name;
            gpa = initial_gpa;
            math_grade = initial_math;
            cs_grade = initial_cs;
      }

       // constructor with 2 parameters
       Student(string initial_name, double initial_gpa) {
        name = initial_name;
        gpa = initial_gpa;
        math_grade = 0.0;
        cs_grade = 0.0; 

     }

      // default constructor
      Student() {
        name = "No name yet";
        gpa = 0.0;
        math_grade = 0.0;
        cs_grade = 0.0;
      }

      // setters
      void set_name(string new_name) {
        name = new_name;
      }

      void set_gpa(double new_gpa) {
        gpa = new_gpa;
      }

      void set_math_grade(double new_math_grade) {
        math_grade = new_math_grade;
      }

      void set_cs_grade(double new_cs_grade) {
        cs_grade = new_cs_grade;
      }

      // getters
      string get_name() {
        return name;
      }

      double get_gpa() {
        return gpa;
      }

      double get_math_grade() {
        return math_grade;
      }

      double get_cs_grade() {
        return cs_grade;
      }

    };

    int main() {

        // create objects of type student
        // this is typically in a separate file --> later.
        Student student1 = Student("Alice", 3.5);
        cout << student1.get_gpa() << endl;
        return 0;
    }