#pragma once
#include "GameObject.h"
class Component
{
public:
	GameObject* gameObject;
public :
	virtual void awake();
	virtual void update();
};

