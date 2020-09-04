#include "CMakeListsWriter.hpp"

#include "CMakeMsc.hpp"

using namespace proj2cmake;

void cmake::ListsWriter::operator()(std::ostream& os)
{
   os << "target_sources(" << cmake::tokenize(mProject.first.name) << " PRIVATE" << std::endl;
   for(auto&& f : mProject.second.compileFiles)
   {
      os << "    " << f << std::endl;
   }

   for(auto&& f : mProject.second.includeFiles)
   {
      os << "    " << f << std::endl;
   }

   os << "   )" << std::endl;
   
   os << std::endl;
}
