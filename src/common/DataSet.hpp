#ifndef __DATASET_H
#define __DATASET_H

#include <vector>
#include <string>
#include <stdint.h>
#include <utility>
#include <stdio.h>
#include "Sample.hpp"


class DataSet {
    public:
        std::vector<std::pair<uint32_t, float> >  features;
        std::vector<Sample>                  samples;
    public:
        DataSet() {printf("xdfds\n");}
        bool parse(std::string sampleFileName);
};

#endif // __DATASET_H
