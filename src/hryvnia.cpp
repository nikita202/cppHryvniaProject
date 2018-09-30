/**
 * @file hryvnia.cpp
 * @brief Hryvnia library
 *
 * Functions for creating a string of hryvnias and pennys
 * from a given total number of pennys
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include "hryvnia.h"

namespace hryvnia_project {

    std::string getPennyString(unsigned int pennys) {
        div_t pennysDiv;
        std::string result;
        result = std::to_string(pennys) + " ";
        pennysDiv = div(pennys, 10);

        if ((div(pennysDiv.quot, 10).rem == 1) or (pennysDiv.rem >= 5) or (pennysDiv.rem == 0)) {
            result += "копеек";
        } else if (pennysDiv.rem >= 2) {
            result += "копейки";
        } else {
            result += "копейка";
        }

        return result;
    }

    std::string getHryvniaString(unsigned int hryvnias) {
        div_t hryvniasDiv;
        std::string result;

        result = std::to_string(hryvnias) + " ";
        hryvniasDiv = div(hryvnias, 10);

        if ((div(hryvniasDiv.quot, 10).rem == 1) or (hryvniasDiv.rem >= 5) or (hryvniasDiv.rem == 0)) {
            result += "гривен";
        } else if (hryvniasDiv.rem >= 2) {
            result += "гривны";
        } else {
            result += "гривна";
        }

        return result;
    }

    std::string getHryvniaPennyString(unsigned int totalPennys) {
        div_t totalDiv;

        totalDiv = div(totalPennys, 100);

        return getHryvniaString(totalDiv.quot) + " " + getPennyString(totalDiv.rem);
    }

}