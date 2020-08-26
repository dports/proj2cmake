#include "CMakeSubDirRegistering.hpp"

#include <boost/algorithm/string.hpp>

using namespace proj2cmake;

void cmake::CMakeSubDirRegistering::operator()(const boost::filesystem::path& subDir)
{
   mOs << "add_subdirectory(" << subDir;

   if (boost::contains(subDir.string(), ".."))
   {
      mOs << " " << subDir.filename();
   }

   mOs << ")" << std::endl;
}
