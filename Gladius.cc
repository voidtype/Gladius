#include "Gladius.h"

Gladius::Gladius(){
	vers = "0.0 Super duper pre alpha";
}

Gladius*
Gladius::instance(){
	if(!g_instance){
		g_instance = new Gladius();
	}
		//g_instance = const_cast<Gladius*>(new Gladius());
	return g_instance;
}

void
Gladius::set_test(){
	test = true;
}

std::string
Gladius::get_version(){
	return vers;
}

Gladius *Gladius::g_instance = 0;
bool Gladius::test = false;

