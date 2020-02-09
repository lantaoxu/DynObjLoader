#include "MyObject.h"

MyObject::MyObject(std::string _data):ObjectBase(_data){}

void MyObject::set(std::string _new_data){
	data = _new_data;
}

std::string MyObject::get(){
	return data;
}


// these special functions are used as interfae create/destroy the object
#if defined(_MSC_VER)
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif
extern "C" EXPORT ObjectBase* create(std::string _data) {
	return new MyObject(_data);
} 
extern "C" EXPORT void destroy(ObjectBase* pObj) {
	delete pObj;
}