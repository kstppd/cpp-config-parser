#include "ConfigParser.h"
#include <iostream>

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "\nUsage:\n\n  " << argv[0] << " <config file>\n\n";
    exit(1);
  }

  ConfigParser parser(argv[1]);
  std::cout << "simple_string: " << parser.getString("simple_string") << "\n";
  std::cout << "complex_string: " << parser.getString("complex_string") << "\n";

  std::cout << "\n";

  std::cout << "an_int: " << parser.getInt("an_int") << "\n";
  std::cout << "truncated_int: " << parser.getInt("truncated_int") << "\n";

  std::cout << "\n";

  std::cout << "a_double: " << parser.getDouble("a_double") << "\n";
  std::cout << "a_float: " << parser.getFloat("a_float") << "\n";

  std::cout << "\n";

  std::cout << "true1: " << parser.getBool("true1") << "\n";
  std::cout << "true2: " << parser.getBool("true2") << "\n";
  std::cout << "false1: " << parser.getBool("false1") << "\n";
  std::cout << "false2: " << parser.getBool("false2") << "\n";
  std::cout << "false3: " << parser.getBool("false3") << "\n";
}

