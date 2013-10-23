#ifndef __DATASET_H
#define __DATASET_H

#include <vector>
#include <string>
#include <utility>

using namespace std;

class DataSet {
    public:
        vector<pair<uint32_t, float> >  features;
        vector<Sample>                  samples;
    public:
        bool parse(string sampleFileName);
};

#endif // __DATASET_H
