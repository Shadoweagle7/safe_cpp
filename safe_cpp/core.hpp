#ifndef SE7_SAFE_CPP_CORE
#define SE7_SAFE_CPP_CORE

class Object;
class Bool;
class Char;

template<class O>
concept SafeCppObject = std::same_as<O, Object> || std::derived_from<O, Object>;

#endif // !SE7_SAFE_CPP_CORE
