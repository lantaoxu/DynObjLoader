#include <iostream>
#include <string>
#include "ObjectBase.h"
#include "../include/DynObjectLoader.h"


int main(){
	
	std::shared_ptr<int> pIntPtr(new int(10), 
    [](int *pi) { delete pi; }); // deleter 
	
	std::cout << "Loading MyObject.bin as ObjectBase ... ";
	auto dlobject = new DLClass<ObjectBase>("MyObject.bin");
	auto myObj = dlobject->make_obj(std::string("Initial data"));
	std::cout << "done!" << std::endl;
	
	std::cout << "Data in object: " << myObj->get() << std::endl;
	
	std::cout << "Setting new data ... ";
	myObj->set(std::string("New data."));
	std::cout << "done!" << std::endl;
	
	std::cout << "Data in object: " << myObj->get() << std::endl;
 	return 0;
}