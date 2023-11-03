#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
	void ActorFunction();
};