#include <iostream>
using namespace std; 

const double PI = 3.14159;
const int MINCHOICE = 1;
const int MAXCHOICE = 5; 
void printMenu();
int getChoice();
double getPositiveDouble(string);
double calculateSphereVolume();
double calculateCylinderVolume();
double calculateTriangularPrismVolume();
double calculateRectangularPrismVolume();
void printResult(double, string);

int main()
{
  int choice = 0;
  double vol; 
  string shape;
  while (choice != 1)
  {
    printMenu(); // prints out the Menu of choices	
    choice = getChoice(); // gets the user's choice 
    switch (choice)
    {
      case 1:
        cout << "Goodbye";
        break; 
      case 2: // sphere;
        vol = calculateSphereVolume();
        shape = "sphere";
        break;
      case 3: // cylinder
        vol = calculateCylinderVolume();
        shape = "cylinder";
        break;
      case 4: // triangularPrism
        vol = calculateTriangularPrismVolume();
        shape = "triangularPrism";
        break;
      case 5: //rectangular prism
        vol = calculateRectangularPrismVolume();
	shape = "rectangularPrism";
        break;
    }
    if (choice != 1)
      printResult(vol, shape);
  }
}

/* 
 * printMenu()
 *  prints the menu options for the program
 */
void printMenu()
{
  cout << "The menu " << endl; 

}

/*
 * getChoice
 *   checks to see that user input is between MINCHOICE and MAXCHOICE or asks for another input
 *   returns a number between MINCHOICE and MAXCHOICE
 */
int getChoice()
{
  return 1;
}

/*
 * getPositiveDouble
 *  Returns a double that is greater than 0, performs input validation.   
 * This function should be called by all the 'calculateXxxx' 
 * functions to handle all the input validation for the needed
 * inputs.
 * The input argument 'attribute' is a string describing the 
 * parameter needed.  For example the calculateSphereVolume needs
 * to prompt the user for a radius, so inside calculateSphereVolume
 * the call would be:
 *   double radius = getPositiveDouble("radius");  
 * The 'attribute' object can be used to create appropriate prompts
 * for the user as shown in the sample output.  
 */ 
double getPositiveDouble(string attribute)
{
}

/*
 * calculateSphereVolume
 *  Prompts the user for the dimensions of the sphere, using getPositiveDouble to do input validation.
 *  Computes and returns the sphere volume.
 */
 
double calculateSphereVolume() 
{
}

/* 
 * calculateCylinderVolume
 *  Prompts the user for the dimensions of the cylinder, using getPositiveDouble to do input validation.
 *  Computes and returns the cylinder volume.
 */

double calculateCylinderVolume()
{
}

/*
 * calculateTriangularPrismVolume
 *  Prompts the user for the dimensions of the triangular prism using getPositiveDouble to do input validation.
 *  Computes and reutnrs the triangular prism volume.
 */
double calculateTriangularPrismVolume()
{
}

/*
 * calculateRectangularPrismVolume
 *  Prompts the user for the dimensions of a rectangular prism using getPositiveDouble to do input validation.
 *  computes and returns the volume of the rectangular prism
 */
double calculateRectangularPrismVolume()
{
}

/*
 * printResult
 *  creates a print out using the input vol and the shape input which holds the string describing the shape
 */
void printResult(double vol, string shape)
{
}

