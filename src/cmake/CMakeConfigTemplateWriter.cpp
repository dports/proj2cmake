#include "CMakeConfigTemplateWriter.hpp"

using namespace proj2cmake;

void cmake::ConfigTemplateWriter::operator()(std::ostream& os)
{
   os << R"|(
set(SOLUTION_GENERAL_DEPS
    # Add libraries here, that will be linked to every target
   )

set(SOLUTION_APP_DEPS
    # Add libraries here, that will be linked to every application target
   )

set(SOLUTION_STATIC_LIB_DEPS
    # Add libraries here, that will be linked to every static lib target
   )

set(SOLUTION_SHARED_LIB_DEPS
    # Add libraries here, that will be linked to every shared lib target
   )
   
      )|";
}
