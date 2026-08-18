#include <string>

// namespace log_line
namespace log_line {
std::string message(std::string line) {
    int pos = line.find(": ");
    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    int pos = line.find("]");
    return line.substr(1, pos - 1);
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
}
} 