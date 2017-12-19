#include <demo/fileMod1.h>

#if defined(USE_MODULE2)
#include <demo/fileMod2.h>
#endif

#include <dlib/dlibFile.h>
#include <slib/slibFile.h>


int main() {
   
   funcMod1();
#if defined(USE_MODULE2)
   funcMod2();
#endif

   auto dret = dlib::funcDlib("12");
   std::cout << dret << std::endl;

   auto sret = slib::funcSlib("12");
   std::cout << sret << std::endl;

}
