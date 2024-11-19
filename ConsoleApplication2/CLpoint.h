#ifndef CLPOINT_H
#define CLPOINT_H

class CLpoint {
protected:
    double x, y;

public:
    CLpoint(double x = 0.0, double y = 0.0);
    virtual ~CLpoint() {}

    virtual void afficherCoordo() const;
    double calculDistance(const CLpoint& autre) const;
};

#endif
