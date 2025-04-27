#include <iostream>
#include <string>
using namespace std;

class Employee{
   public:
     Employee(string name) {
        _name = name;
     } 

     virtual void display() {
         cout << "Name: " << _name << endl;
      }

      string get_name() {
        return _name;
      }
    
    private:
      string _name;
};


class Faculty : public Employee{
   public:
      Faculty(string name, string dept) : Employee(name) {
        _dept = dept;
      }
      void display() {
         cout << "Name: " << get_name() << " Dept: " << _dept << endl;
        
      }

      string get_dept() {
        return _dept;
      }
    private:
      string _dept;
};

// Graduate class derived from Student
class TA : public Faculty {
   public:
      
      TA(string name, string dept, int course) : Faculty(name, dept) {
        _course = course;
      } 

      void display() {
        cout << "Name: " << get_name() << " Dept: " << get_dept() << " Course: " << _course << endl;
      }

      int get_course() {
        return _course;
      }
    private: 
      int _course;
};

int main() {
  


   return 0;
}