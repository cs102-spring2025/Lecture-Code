#ifndef STUDENT_H
#define STUDENT_H 

#include <iostream>
#include <string>
using namespace std;

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
    #endif //STUDENT_H
