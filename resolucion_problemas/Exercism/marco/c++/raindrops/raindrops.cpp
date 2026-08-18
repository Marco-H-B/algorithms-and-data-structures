#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int number) {
        std::string resultado = "";

        if (number % 3 == 0) {
            resultado += "Pling";
        }
        if (number % 5 == 0) {
            resultado += "Plang";
        }
        if (number % 7 == 0) {
            resultado += "Plong";
        }
        if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0) {
            return std::to_string(number);
        }
        return resultado;  
    };
} // namespace raindrops
