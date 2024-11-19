#include <iostream>
#include "CLpoint.h"
#include "CLpoint3D.h"
#include "CLparcours.h"
#include "CLparcours3D.h"

using namespace std;

int main() {
    CLpoint* p1;
    CLpoint* p2;
    CLpoint* p3;
    CLparcours* parcours;

    // Parcours 2D
    p1 = new CLpoint(0.0, 0.0);
    p2 = new CLpoint(1.0, 1.0);
    p3 = new CLpoint(2.0, 2.0);
    parcours = new CLparcours();

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);

    cout << parcours->calculDistance() << endl;
    parcours->message();

    delete parcours;

    // Parcours 3D
    p1 = new CLpoint3D(0.0, 0.0, 0.0);
    p2 = new CLpoint3D(1.0, 1.0, 1.0);
    p3 = new CLpoint3D(2.0, 2.0, 2.2);
    parcours = new CLparcours3D();

    parcours->ajouterPoint(p1);
    parcours->ajouterPoint(p2);
    parcours->ajouterPoint(p3);

    cout << parcours->calculDistance() << endl;
    parcours->message();

    delete parcours;

    return 0;
}
