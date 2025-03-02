#include <iostream>
#include <string>
using namespace std;

/* This is the class declaration for a student object */

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
      void set_name(string name) {
        name = name;
      }

      void set_gpa(double gpa) {
        gpa = gpa;
      }

      void set_math_grade(double math_grade) {
        math_grade = math_grade;
      }

      void set_cs_grade(double cs_grade) {
        cs_grade = cs_grade;
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