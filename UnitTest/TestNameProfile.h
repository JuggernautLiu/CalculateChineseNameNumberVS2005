#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "NameProfile.h"

class TestNameProfile : public ::testing::Test
{
public:
    TestNameProfile(void);
    ~TestNameProfile(void);
    virtual void SetUp();
	virtual void TearDown();
};
