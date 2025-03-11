#include <iostream>
#include "Sphere.h"

/***** Default Constructor Definiton *****/
Sphere::Sphere() {                        
    Radius = 1.0;
}

/***** Explicit-value Constructor Definiton *****/
Sphere::Sphere(double userRadius) {       
    Radius = userRadius;
}

/***** getRadius() Definition *****/
double Sphere::getRadius() const {         
    return Radius;
}

/***** getDiameter() Definition *****/
double Sphere::getDiameter() const {
    return Radius * 2.0;
}

/***** getCircumference() Definition *****/
double Sphere::getCircumference() const {
    return 2.0 * M_PI * Radius;
}

/***** getArea() Definition *****/
double Sphere::getArea() const {
    return 4.0 * M_PI * (Radius * Radius);
}

/***** getVolume() Definition *****/
double Sphere::getVolume() const {
    return (4.0/3.0) * M_PI * (Radius * Radius * Radius);
}

/***** Mutator Function Definition *****/
void Sphere::setRadius(double userRadius) {
    Radius = userRadius;
}

/***** Display Function Definition *****/
void Sphere::display(ostream & out) const
{
  out << "Radius: " << Radius << endl;
  out << "Diameter: " << getDiameter() << endl;
  out << "Volume: " << getVolume() << endl;
  out << "Area: " << getArea() << endl;
}

/***** Non-member Function Definition *****/
ostream & operator<<(ostream & j, const Sphere & t)
{
  t.display(j);
  return j;
}
