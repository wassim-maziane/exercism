#include "power_of_troy.h"

namespace troy {
void give_new_artifact(human &human, const std::string &artifact_name) {
  human.possession = std::make_unique<artifact>(artifact_name);
}

void exchange_artifacts(std::unique_ptr<artifact> &artifact1,
                        std::unique_ptr<artifact> &artifact2) {
  std::swap(artifact1, artifact2);
}

void manifest_power(human &human, const std::string &power_name) {
  human.own_power = std::make_shared<power>(power_name);
}

void use_power(human &caster, human &target) {
  target.influenced_by = caster.own_power;
}

int power_intensity(human &human) { return human.own_power.use_count(); }
} // namespace troy
// namespace troy
