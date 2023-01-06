#ifndef SE7_SAFE_CPP_OBJECT
#define SE7_SAFE_CPP_OBJECT

#include <concepts>

#include "core.hpp"

class Object;
class Bool;

template<SafeCppObject O>
class Option;

class Object {
private:

public:
	Bool Equals(Option<Object> obj);
};

template<SafeCppObject O>
O New() {

}

#endif // !SE7_SAFE_CPP_OBJECT
