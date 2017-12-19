#include <slib/slibFile.h>

namespace slib {

int funcSlib(const std::string& val) {
   return static_cast<int>(val.size() * 2);
}

}

