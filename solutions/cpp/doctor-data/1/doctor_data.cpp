// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation,
                       star_map::System system, int busters)
    : name(name), generation(generation), current_system(system),
      busters(busters) {}

heaven::Vessel heaven::Vessel::replicate(std::string name) {
  return heaven::Vessel(name, this->generation + 1, this->current_system);
}

void heaven::Vessel::make_buster() { busters++; }

bool heaven::Vessel::shoot_buster() {
  if (busters > 0) {
    busters--;
    return true;
  }
  return false;
}

std::string heaven::get_older_bob(Vessel vessel1, Vessel vessel2) {
  return vessel1.generation < vessel2.generation ? vessel1.name : vessel2.name;
}

bool heaven::in_the_same_system(Vessel vessel1, Vessel vessel2) {
  return vessel1.current_system == vessel2.current_system;
}
