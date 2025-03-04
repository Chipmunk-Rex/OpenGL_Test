#pragma once
#include "Component.h"
#include<list>

using namespace std;
class GameObject
{
public:
	list<Component*> components;
public:
	GameObject();
	~GameObject();
	void awake();
	void update();
};

