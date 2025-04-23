#include<string>
#include<iostream>
#include<vector>
using namespace std;

/**
 * @brief Basic animal class, super class for Cats and Dogs
 * 
 */
class Animal {
    //private: // makes it so that only the Animal class has access to name
    protected: // allows subclasses to access name
        string _name;

    public: 
        /**
         * @brief Construct a new Animal object
         * 
         * @param name - name of the animal
         */
        Animal(string name) {
            _name = name;
        }

        /**
         * @brief Get the name attribute of the animal
         * Note: This is a read only method because get_name() doesn't change anything
         * @return string - name
         */
        string get_name() const {
            return _name;
        }

        /**
         * @brief The animal makes a sound
         * 
         * This is also a read only method because we are not changing anything, we are simply printing
         */
        virtual void make_sound() const {
            cout << "Animal peep!" << " my name is " << _name << endl;
        }
};

/**
 * @brief Dog class. Subclass of Animal class
 * Note: ": public Animal" makes it so that Dog inherits all the public methods from the Animal class
 */
class Dog : public Animal {
    public:
        /**
         * @brief Construct a new Dog object, inherits the constructor from Animal
         * How does this work without a private attribute? I thought you said that we were
         * inheriting the public methods?
         * 
         * Answer: Although _name is a private member in Animal, Dog can still use methods 
         * provided by Animal (like get_name()), which can access _name internally.
         * @param name - the name of the animal
         */
        Dog(string name) : Animal(name) {}

        /**
         * @brief Overrides the make_sound method from the Animal class
         * Dogs woof!
         */
        void make_sound() const {
            cout << "Bark!" << " my name is " << _name << " and I don't have a collar color!" << endl;
        }

};

/**
 * @brief Cat class, inherits from Animal superclass
 */
class Cat : public Animal {
private:
    string _collar_color;

public: 
    /**
     * @brief Construct a new Cat object, inherits the name part from the animal class
     * adds the collar_color part
     * @param name - name of the cat
     * @param collar_color - color of the cat's collar
     */
    Cat(string name, string collar_color) : Animal(name) {
        _collar_color = collar_color;
    }

    /**
     * @brief Overrides the make sound
     * 
     */
    void make_sound() const {
        cout << "Meow!" << " my name is " << _name <<  " and my collar color is " << _collar_color << endl;
    }
};


int main() {
    
    // create a dog and cat object
    Dog kimbo("Kimbo");
    Cat hugo("Hugo", "blue");
    Cat norman("Norman", "red");
    
    // call make_sound()
   // kimbo.make_sound();
   // hugo.make_sound();
   // norman.make_sound();
   // cout << "-------------" << endl;
    
    // we would like to treat animal generally
    // what if we copy a cat but store it as an animal
    //Animal hug = hugo;
    //hug.make_sound();
    // which make_sound() method will be called? Why????
    //cout << "-------------" << endl;
    
    // can make an animal pointer to kimbo, even though it's a cat
    // and then this will call Cat's make_sound()
    Animal *hugo_ptr = &hugo;
    hugo_ptr->make_sound();
    cout << "-------------" << endl;
    
    // we can make an array/vector of animals
    //vector<Animal> pets;
    //pets.push_back(hugo);
    //pets.push_back(kimbo);
    //pets.push_back(norman);

    //for (int i = 0; i < 3; i++) {
       // Animal pet = pets[i];
        // Note: since these are copies of Animal objects, we can only call
        // superclass method for make_sound, not the subclasses.
       // pet.make_sound();
   // }
    //cout << "-------------" << endl;

    // if we make a vector of pointers to these objects, we can call
    // the subclass methods
   //vector<Animal*> pets_ptrs;
   //pets_ptrs.push_back(&kimbo);
   //pets_ptrs.push_back(&hugo);
   //pets_ptrs.push_back(&norman);

   //for (int i = 0; i < 3; i++) {
    //    Animal* pet = pets_ptrs[i];
        //cout << pet.get_name() << endl;
     //   pet->make_sound();
    //}
   // cout << "-------------" << endl;
    
}