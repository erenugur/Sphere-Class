#include <iostream>
#include <math.h>
using namespace std;

class Sphere {
    public:
        /***** Constructors *****/
        Sphere();
        Sphere(double userRadius);

        /***** Accessors *****/
        double getRadius() const;
        double getDiameter() const;
        double getCircumference() const;
        double getArea() const;
        double getVolume() const;

        /***** Mutator *****/
        void setRadius(double userRadius);  // not const

        /***** Display Function *****/
        void display(ostream & out) const;

    private:
        double Radius;
};

/***** Non-member Function *****/
ostream & operator<<(ostream & out, const Sphere & t);

