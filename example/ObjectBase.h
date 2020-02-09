#include <iostream>
#include <string>

class ObjectBase{
protected:
	std::string data;
	
public:
	ObjectBase(std::string _data);
	virtual ~ObjectBase() = default;
	
	virtual void set(std::string _new_data);
	virtual std::string get();
	
	// for dynamic loading of the object
	typedef ObjectBase* create_t(std::string _data);
	typedef void destroy_t(ObjectBase*);
};