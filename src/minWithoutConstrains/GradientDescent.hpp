#ifndef __GRADIENTDESCENT_H
#define __GRADIENTDESCENT_H

#include <vector>
#include <stdin.h>
#include <utility>
#include "../common/DataSet.hpp"
#include "../common/ConfigureInfo.hpp"

class FMinGradient {
    private:
        DataSet         &_dataSet;
        ConfigureInfo   &_config;

    public:
        FMinGradient(DataSet &dataSet, ConfigureInfo &config);
        std::vector<std::pair<uint32_t, float> > min(int maxIterationCnt, float epsilon);
};

#endif // __GRADIENTDESCENT_H
