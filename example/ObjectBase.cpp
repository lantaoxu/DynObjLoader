#include "ObjectBase.h"

ObjectBase::ObjectBase(std::string _data){
	data = _data;
}

void ObjectBase::set(std::string _new_data){
	(void)_new_data;
	throw std::runtime_error("No one should be calling me !");
}
std::string ObjectBase::get(){
	throw std::runtime_error("No one should be calling me !");
}