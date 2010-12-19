#include "Broker.h"

Broker::Broker(std::string name){
	this->name = name;
}

std::string
Broker::get_name(){
	return name;
}
