#pragma once
#include <vector>
#include "Dish.h" 

using namespace std; 

class Order
{
public:
	
	void addItem(Dish *item);
	void operator += (Dish * item);
	Order(int tableID);

	void print();

	friend ostream& operator << (ostream&, Order order);
private: 
	vector <Dish*> dishes;
	int tableId;


};

