#include "CLparcours3D.h"
#include <iostream>
using namespace std;

double CLparcours3D::calculDistance() const {
    double distanceTotale = 0.0;
    for (size_t i = 1; i < points.size(); i++) {
        CLpoint3D* p1 = dynamic_cast<CLpoint3D*>(points[i - 1]);
        CLpoint3D* p2 = dynamic_cast<CLpoint3D*>(points[i]);
        if (p1 && p2) {
            distanceTotale += p1->calculDistance(*p2);
        }
    }
    return distanceTotale;
}

void CLparcours3D::message() const {
    cout << "Parcours 3D avec " << points.size() << " points." << endl;
}
