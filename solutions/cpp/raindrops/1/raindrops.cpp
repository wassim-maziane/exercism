#include "raindrops.h"
#include <string>

namespace raindrops {
std::string convert(int number) {
  std::string output;
  if (number % 3 == 0)
    output += "Pling";
  if (number % 5 == 0)
    output += "Plang";
  if (number % 7 == 0)
    output += "Plong";
  if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0)
    return std::to_string(number);
  return output;
}
} // namespace raindrops
