#include <iostream>
#include "Sphere.h"
using namespace std;

int main() {
    /***** unitSphere Object (created using Default Constructor) *****/
    Sphere unitSphere;
    cout << "--- unitSphere's Data ---" << endl;             
    cout << unitSphere;
    cout << "Circumference: " << unitSphere.getCircumference() << endl << endl;

    /***** mySphere Object (created using Explicit-value Constructor) *****/
    Sphere mySphere(5.1);             
    mySphere.setRadius(4.5);
    cout << "--- mySphere's Data ---" << endl;
    cout << mySphere;
    cout << "Circumference: " << mySphere.getCircumference() << endl;
    return 0;
}   
