#include <iostream>
#include "gate.h"

// Реалізація конструктора
Gate::Gate(int initial_opening) : current_opening(initial_opening) {}

// Реалізація інших методів
void Gate::open(int percentage) {
    current_opening += percentage;
    if (current_opening > 100) current_opening = 100;
    std::cout << "Gate is open for " << current_opening << "%" << std::endl;
    gate_is_closed = false;
}

void Gate::close(int percentage){
	current_opening -= percentage;
	if(current_opening <= 0){
		current_opening = 0;
		gate_is_closed = true;
		std::cout<<"Gate is close"<<std::endl;
		
	}

	else std::cout <<"Gate is open for " << current_opening << "%" << std::endl;

}

bool Gate::isClosed() const {
    return gate_is_closed;  // Повертаємо стан воріт
}

int Gate::getOpening() const{
	return current_opening;
}
