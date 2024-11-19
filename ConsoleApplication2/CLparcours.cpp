#include "CLparcours.h"
#include <iostream>
using namespace std;

CLparcours::~CLparcours() {
    for (CLpoint* point : points) {
        delete point;
    }
}

void CLparcours::ajouterPoint(CLpoint* point) {
    points.push_back(point);
}

double CLparcours::calculDistance() const {
    double distanceTotale = 0.0;
    for (size_t i = 1; i < points.size(); i++) {
        distanceTotale += points[i - 1]->calculDistance(*points[i]);
    }
    return distanceTotale;
}

void CLparcours::message() const {
    cout << "Nombre de points dans le parcours : " << points.size() << endl;
}
