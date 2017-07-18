#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#ifndef __linux__
static_assert(false, "Only Linux is supported. ");
#endif

#include <string>

std::string message() {
  return "Hello from Linux. ";
}

#endif
