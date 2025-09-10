#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
  int noodles;
  double sauce;
};

int preparationTime(std::vector<std::string> layers, int average_time = 2);
amount quantities(std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string> &ingredients,
                         const std::vector<std::string> &secret_ingredients);
std::vector<double> scaleRecipe(const std::vector<double> &quantities,
                                int portions);
void addSecretIngredient(std::vector<std::string> &ingredients,
                         const std::string &secret_ingredient);
} // namespace lasagna_master
