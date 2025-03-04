#include "GameObject.h"
#include "Transform.h"
GameObject::GameObject()
{
	components.push_back(new Transform());
}