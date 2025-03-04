#pragma once
#include "Component.h"
#include "Vector3.cpp"

class Transform : public Component
{
public:
	Vector3 position = Vector3(0, 0, 0);
};

