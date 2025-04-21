#include "student.h"
#include <iostream>
using namespace std;
 

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

   