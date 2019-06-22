/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother Alvey, CS165
* Author:
*    Stephen Lomax
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your classes here
class Car {
   
protected: 
   string name;
public: 
   Car() { this->name = "Unknown model"; }

   string getName() { return this->name; }

   void setName(string n) { this->name = n; }

   virtual string getDoorSpecs() { return "Unknown doors"; }

};

class Civic : public Car {
public:
   Civic();

   virtual string getDoorSpecs() const { return "4 doors"; };
};

class Odyssey : public Car {
public: 
   Odyssey();
   virtual string getDoorSpecs() const;

};

class Ferrari : public Car {
public: 
   Ferrari();
   virtual string getDoorSpecs() const;
};


Civic::Civic()
{
   this->name = "Civic";
}


Odyssey::Odyssey()
{
   this->name = "Odyssey";
}

string Odyssey::getDoorSpecs() const
{
   return "2 front doors, 2 sliding doors, 1 tail gate";
}

Ferrari::Ferrari() 
{
   this->name = "Ferrari";
}

string Ferrari::getDoorSpecs() const
{
   return "2 butterfly doors";
}

/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

// TODO: Include your attachDoors function here
void attachDoors(Car n) {

   cout << "Attaching doors to " << n.getName() << " - " << n.getDoorSpecs()
      << endl;

}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   system("pause");
   return 0;
}
