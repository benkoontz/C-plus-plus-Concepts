#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally()
{
    //ctor
}

Sally::Sally(int a)
{
    num = a;
}

Sally Sally::operator+(Sally aso) {
    Sally brandNew; // create brandNew Sally Object
    brandNew.num = num + aso.num;
    return(brandNew); // return brand new sally object
}
