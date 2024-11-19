#include "CLpoint3D.h"
#include <iostream>
#include <cmath>
using namespace std;

CLpoint3D::CLpoint3D(double x, double y, double z) : CLpoint(x, y), z(z) {}

void CLpoint3D::afficherCoordo() const {
    cout << "Point (" << x << ", " << y << ", " << z << ")" << endl;
}

double CLpoint3D::calculDistance(const CLpoint3D& autre) const {
    return sqrt(pow(x - autre.x, 2) + pow(y - autre.y, 2) + pow(z - autre.z, 2));
}
