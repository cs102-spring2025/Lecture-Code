#include <iostream>
#include <string>
using namespace std;

/**
 * @class Student
 * @brief A class representing a student
 */
class Student { 
    public: 
     
      Student(string initial_name, double initial_gpa, double initial_math, double initial_cs);
      // initializes current Student's name, gpa, math grade and cs grade     
      
      Student(string initial_name, double initial_gpa);
      // initializes current Student's name and gpa; sets math and cs grade to 0.0
      
      Student();
      // initalizes the current Student's name to "no name"; gpa to 0.0; math and cs grade to 0.0
      void set_name(string name);
      // sets the current Student's name

      void set_gpa(double gpa);
      // sets the current Student's gpa

      void set_math_grade(double math_grade);
      // sets the current Student's math grade
      
      void set_cs_grade(double cs_grade);
      // sets the current Student's cs grade 
      
      string get_name();
      // returns the current Student's name

      double get_gpa();
      // returns the current Student's gpa
      
      double get_math_grade();
      // returns the current Student's math grade

      double get_cs_grade();
      // returns the current Student's cs grade

      void write_output();
      // output the current Student's data

    private:
      string name; 
      double gpa;
      double math_grade;
      double cs_grade;

    };

    int main() {

      Student student1("Alice Brown", 3.5, 88.0, 91.0);
      student1.write_output();
      Student student2("John Smith", 4.0);
      student2.write_output();
      student2.set_cs_grade(99.0);
      student2.write_output();
      
      return 0;
    }
     /*
     * the dot operator versus the scope resolution operator
     */

      Student::Student(string initial_name, double initial_gpa, double initial_math, double initial_cs) 
      {
        name = initial_name;
        gpa = initial_gpa;
        math_grade = initial_math;
        cs_grade = initial_cs;
      }

   
     Student::Student(string initial_name, double initial_gpa) 
     {
        name = initial_name;
        gpa = initial_gpa;
        math_grade = 0.0;
        cs_grade = 0.0; 
     }

    Student::Student() 
    {
        name = "No name yet";
        gpa = 0.0;
        math_grade = 0.0;
        cs_grade = 0.0;
    }

    void Student::set_name(string new_name) 
    {
        name = new_name;
    }

    void Student::set_gpa(double new_gpa) 
    {
        gpa = new_gpa;
    }

    void Student::set_math_grade(double new_math_grade) 
    {
        math_grade = new_math_grade;
    }

    void Student::set_cs_grade(double new_cs_grade) 
    {
        cs_grade = new_cs_grade;
    }

    string Student::get_name() 
    {
        return name;
    }

    double Student::get_gpa() 
    {
        return gpa;
    }

    double Student::get_math_grade() 
    {
        return math_grade;
    }

    double Student::get_cs_grade() 
    {
        return cs_grade;
    }

    void Student::write_output()
    {
        cout << "Name: " << get_name() 
        << " GPA: " << get_gpa() 
        << " Math Grade: " << get_math_grade()
        << " CS Grade: " << get_cs_grade() << endl;
    }

    