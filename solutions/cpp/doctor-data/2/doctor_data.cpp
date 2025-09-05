// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

namespace heaven {
Vessel::Vessel(std::string name, int generation, star_map::System system,
               int busters)
    : name(name), generation(generation), current_system(system),
      busters(busters) {}

Vessel heaven::Vessel::replicate(std::string name) {
  return Vessel(name, this->generation + 1, this->current_system);
}

void Vessel::make_buster() { busters++; }

bool Vessel::shoot_buster() { return busters > 0 ? --busters, true : false; }

std::string get_older_bob(const Vessel &vessel1, const Vessel &vessel2) {
  return vessel1.generation < vessel2.generation ? vessel1.name : vessel2.name;
}

bool in_the_same_system(const Vessel &vessel1, const Vessel &vessel2) {
  return vessel1.current_system == vessel2.current_system;
}
} // namespace heaven
