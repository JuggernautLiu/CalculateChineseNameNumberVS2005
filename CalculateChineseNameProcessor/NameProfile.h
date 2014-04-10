#pragma once

class NameProfile
{
public:
    static int limit_maxNumber;
    static int limit_minNumber;
    
    NameProfile(void);
    NameProfile(int lastnamenum);
    ~NameProfile(void);    
    
    bool FinishSetting();
    void Set_lastname_num(int num);
    void Set_name1_num(int num);
    void Set_name2_num(int num);
    int Get_lastname_num();
    int Get_name1_num();
    int Get_name2_num();
    int Get_sum_num();

protected:
    virtual void checkLimit(int& num);

private:    
    int lastname_num;
    int name1_num;
    int name2_num;
    int sum_num;
    bool isSet;

    void Cal_allSumNum();
};
