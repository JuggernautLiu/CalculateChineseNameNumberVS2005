#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "IRuleFilter.h"

class TestRuleFilter : public ::testing::Test
{
public:
    TestRuleFilter(void);
    ~TestRuleFilter(void);
    virtual void SetUp();
	virtual void TearDown();
};
