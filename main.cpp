#include <iostream>
#include <string>
#include "hryvnia.h"

using namespace hryvnia_project;

int main() {
    unsigned int totalPennys;

    system("chcp 65001");

    std::cin >> totalPennys;
    std::cout << getHryvniaPennyString(totalPennys) << std::endl;

    return 0;
}