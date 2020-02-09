#include <iostream>
#include <string>
#include "ObjectBase.h"

class MyObject : public ObjectBase {
public:
	MyObject(std::string _data);
	void set(std::string _new_data);
	std::string get();
};