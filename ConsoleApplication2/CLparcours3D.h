#ifndef CLPARCOURS3D_H
#define CLPARCOURS3D_H

#include "CLparcours.h"
#include "CLpoint3D.h"

class CLparcours3D : public CLparcours {
public:
    double calculDistance() const override;
    void message() const override;
};

#endif
#pragma once
