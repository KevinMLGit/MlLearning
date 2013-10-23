#ifndef __loss_hpp
#define __loss_hpp

#include <vector>
#include <utility>
#include "../common/Sample.hpp"
#include "../common/DataSet.hpp"

class Loss {
    public:
        virtual float predict(Sample &sample, DataSet &dataSet) = NULL;
        virtual float getLoss(Sample &sample, DataSet &dataSet) = NULL;
        virtual float getLoss(DataSet &dataSet) = NULL;
        virtual std::vector<std::pair<uint32_t, float> > getGradient(DataSet &dataSet) = NULL;
};

#endif
