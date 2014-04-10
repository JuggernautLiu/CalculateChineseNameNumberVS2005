#pragma once
#include <vector>
#include "NameProfile.h"


using namespace std;
class IDataProducer
{
public:
    IDataProducer(void);
    virtual ~IDataProducer(void)=0;
    virtual bool ProduceNameProfiles(vector<NameProfile>& nameprofiles)=0;
};

class DataProducerByCount : IDataProducer
{
    DataProducerByCount(void);
    ~DataProducerByCount(void);
    bool ProduceNameProfiles(vector<NameProfile>& nameprofiles);
};
