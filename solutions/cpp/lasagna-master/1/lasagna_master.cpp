#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int average_time) {
  return layers.size() * average_time;
}
amount quantities(std::vector<std::string> layers) {
  amount quants{0, 0};
  for (const std::string &layer : layers) {
    if (layer == "noodles")
      quants.noodles += 50;
    else if (layer == "sauce")
      quants.sauce += 0.2;
  }
  return quants;
}
void addSecretIngredient(std::vector<std::string> &ingredients,
                         const std::vector<std::string> &secret_ingredients) {
  ingredients.back() = secret_ingredients.back();
}
std::vector<double> scaleRecipe(const std::vector<double> &quantities,
                                int portions) {
  std::vector<double> scaled_quantities = quantities;
  for (double &quantity : scaled_quantities)
    quantity = quantity * portions / 2;
  return scaled_quantities;
}
void addSecretIngredient(std::vector<std::string> &ingredients,
                         const std::string &secret_ingredient) {
  ingredients.back() = secret_ingredient;
}
} // namespace lasagna_master
