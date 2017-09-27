#include "Order.h"

#include <iostream>



Order::Order(int tableID)
	{
		this->tableId = tableID;
	}

void Order::print()
{
	
}


void Order::addItem(Dish* item) {
	dishes.push_back(item);
}

void Order::operator+=(Dish * item){
addItem(item);
}

ostream& operator<<(ostream & stream, Order order)

{
	stream << "Order for table #" << order.tableId << endl;
	for (auto dish : order.dishes)
		cout << dish->getName() << endl;
	stream << order.tableId;
	return stream;
}
