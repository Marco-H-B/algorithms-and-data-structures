#include <string>

// namespace log_line
namespace log_line {
    // Recibe la línea de log y extrae solo el mensaje.
    std::string message(std::string line) {
        int pos = line.find(": ");
        return line.substr(pos + 2);
    }

    // Recibe la línea de log y extrae el nivel de log.
    std::string log_level(std::string line) {
        int pos = line.find("]");
        return line.substr(1, pos - 1);
    }

    // Recibe la línea de log y la reformatea.
    std::string reformat(std::string line) {
        return message(line) + " (" + log_level(line) + ")";
    }
} // namespace log_line