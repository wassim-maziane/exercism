// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <string>

namespace star_map {
enum class System {
  EpsilonEridani,
  BetaHydri,
  Sol,
  AlphaCentauri,
  DeltaEridani,
  Omicron2Eridani,
};
}

namespace heaven {
class Vessel {
public:
  std::string name{};
  int generation{};
  star_map::System current_system{};
  int busters{};

  Vessel(std::string name, int generation,
         star_map::System system = star_map::System::Sol, int busters = 0);
  Vessel replicate(std::string name);
  void make_buster();
  bool shoot_buster();
};

std::string get_older_bob(const Vessel &vessel1, const Vessel &vessel2);
bool in_the_same_system(const Vessel &vessel1, const Vessel &vessel2);

} // namespace heaven
