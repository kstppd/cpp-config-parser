#include "ConfigParser.hpp"
#include <iostream>

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    std::cerr << "\nUsage:\n\n  " << argv[0] << " <config file>\n\n";
    exit(1);
  }

  ConfigParser parser(argv[1]);

  double value = parser.getDouble("INITIAL_VALUE");
  int loop_iterations = parser.getInt("LOOP_ITERATIONS");
  int added_value = parser.getInt("VALUE_TO_ADD_EACH_ITER");

  bool print = parser.getBool("PRINT_VALUE_EACH_ITER");

  for (int i = 0; i < loop_iterations; ++i)
  {
    value += added_value;
    if (print)
      std::cout << value << std::endl;
  }

  std::cout << "Final value: " << value << "\n";
  std::cout << parser.getString("STRING_TO_PRINT_AT_END") << std::endl;

  return 0;
}

