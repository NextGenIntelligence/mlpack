/**
 * @file version.cpp
 * @author Ryan Curtin
 *
 * The implementation of GetVersion().
 *
 * This file is part of mlpack 2.0.1.
 *
 * mlpack is free software; you may redstribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#include "version.hpp"

#include <sstream>

// If we are not a git revision, just use the macros to assemble the version
// name.
std::string mlpack::util::GetVersion()
{
#ifndef MLPACK_GIT_VERSION
  std::stringstream o;
  o << "mlpack " << MLPACK_VERSION_MAJOR << "." << MLPACK_VERSION_MINOR
      << "." << MLPACK_VERSION_PATCH;
  return o.str();
#else
  // This file is generated by CMake as necessary and contains just a return
  // statement with the git revision in it.
  #include "gitversion.hpp"
#endif
}
