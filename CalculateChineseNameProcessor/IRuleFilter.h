#pragma once
#include <vector>
#include "NameProfile.h"

using namespace std;

class IRuleFilter
{
public:
    IRuleFilter(void);
    virtual ~IRuleFilter(void)=0;
    virtual bool Filter(vector<NameProfile>& nameprofiles);
};

class FilterAllNameNumberForFiveElements : IRuleFilter
{
    FilterAllNameNumberForFiveElements(void);
    ~FilterAllNameNumberForFiveElements(void)=0;
    bool Filter(vector<NameProfile>& nameprofiles);
};

class FilterThreeWordsPhase : IRuleFilter
{
    FilterThreeWordsPhase(void);
    ~FilterThreeWordsPhase(void)=0;
    bool Filter(vector<NameProfile>& nameprofiles);
};

class Filter81GoodNumber : IRuleFilter
{
    Filter81GoodNumber(void);
    ~Filter81GoodNumber(void)=0;
    bool Filter(vector<NameProfile>& nameprofiles);
};