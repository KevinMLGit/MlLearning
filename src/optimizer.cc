#include <stdio.h>
#include <string>
#include "common/DataSet.hpp"

int main(int argc, char* argv[]) {
    printf("hello world\n");
    DataSet dataSet;
    std::string fileName("abfd");
    dataSet.parse(fileName);
    return 0;
}
