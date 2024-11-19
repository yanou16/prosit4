#ifndef CLPARCOURS_H
#define CLPARCOURS_H

#include "CLpoint.h"
#include <vector>

class CLparcours {
protected:
    std::vector<CLpoint*> points;

public:
    CLparcours() {}
    virtual ~CLparcours();

    void ajouterPoint(CLpoint* point);
    virtual double calculDistance() const;
    virtual void message() const;
};

#endif
#pragma once
