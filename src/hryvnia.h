/**
 * @file hryvnia.h
 * @brief Function prototypes for the Hryvnia library
 *
 * Function prototypes for creating a string of hryvnias and pennys
 * from a given total number of pennys
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include <string>

#ifndef HRYVNIAPROJECT_HRYVNIA_H
#define HRYVNIAPROJECT_HRYVNIA_H

namespace hryvnia_project {

    /**
     * @brief A function that transfers penny amount to string
     * @param pennys A given number of pennys
     * @return A string containing pennys number, a space and an appropriate word
     */
    std::string getPennyString(unsigned int pennys);

    /**
     * @brief A function that transfers hryvnia amount to string
     * @param hryvnias A given number of hryvnias
     * @return A string containing hryvnia number, a space and an appropriate word
     */
    std::string getHryvniaString(unsigned int hryvnias);

    /**
     * @brief A function that transfers the total amount of pennys to string
     * @param totalPennys the given total amount of pennys
     * @return A string that contains that amount in whole hryvnias and pennys
     */
    std::string getHryvniaPennyString(unsigned int totalPennys);

}

#endif //HRYVNIAPROJECT_HRYVNIA_H