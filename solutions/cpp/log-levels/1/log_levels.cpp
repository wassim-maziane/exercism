#include <string>

namespace log_line {
std::string message(std::string line) {
  size_t index{line.find(':')};
  return line.substr(index + 2);
  // return the message
}

std::string log_level(std::string line) {
  size_t open_index{line.find('[')};
  size_t close_index{line.find(']')};
  return line.substr(open_index + 1, close_index - open_index - 1);
  // return the log level
}

std::string reformat(std::string line) {
  return message(line) + " (" + log_level(line) + ')';
  // return the reformatted message
}
} // namespace log_line
