#ifndef __loss_hpp
#define __loss_hpp

#include <vector>
#include <utility>
#include "../common/Sample.hpp"

class Loss {
    public:
        virtual float getLoss(Sample &s) = NULL;
        virtual std::vector<std::pair> getGradient(Sample &s) = NULL;
};

#endif
