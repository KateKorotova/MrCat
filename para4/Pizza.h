#pragma once
#include <string>
#include "Dish.h"

using namespace std;


class Pizza : public Dish
{
public:
	Pizza(string name);
	string getName() override;
private:


};

