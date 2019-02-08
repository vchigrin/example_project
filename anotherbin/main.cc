#include "somelib/rare.h"

#include <iostream>

int main(int argc, char* argv[]) {
  std::cerr << "Some rare function result " << some_rare_function() << std::endl;
  return 0;
}
