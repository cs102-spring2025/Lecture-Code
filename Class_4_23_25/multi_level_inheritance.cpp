#include <iostream>
#include <string>
using namespace std;

// Base class
class Person{
   public:
     Person(string name) {
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

// Student class derived from Person
class Student : public Person {
   public:
      Student(string name, int id) : Person(name) {
        _id = id;
      }
      void display() {
         cout << "Name: " << get_name() << " ID: " << _id << endl;
        
      }

      int get_id() {
        return _id;
      }
    private:
      int _id;
};

// Graduate class derived from Student
class Graduate : public Student {
   public:
      
      Graduate(string name, int id, string major) : Student(name, id) {
        _major = major;
      } 

      void display() {
        cout << "Name: " << get_name() << " ID: " << get_id() << " Major: " << _major << endl;
      }

      string get_major() {
        return _major;
      }
    private: 
      string _major;
};

int main() {
   Person p1("Mary Smith");
   p1.display();
   Student s1("John Brown", 1223);
   s1.display();
   Graduate g1("Paul Smith", 3333, "CS");
   g1.display();


   return 0;
}