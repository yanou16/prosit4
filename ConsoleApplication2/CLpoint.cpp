#include "CLpoint.h"
#include <iostream>
#include <cmath>
using namespace std;

CLpoint::CLpoint(double x, double y) : x(x), y(y) {}

void CLpoint::afficherCoordo() const {
    cout << "Point (" << x << ", " << y << ")" << endl;
}

double CLpoint::calculDistance(const CLpoint& autre) const {
    return sqrt(pow(x - autre.x, 2) + pow(y - autre.y, 2));
}
