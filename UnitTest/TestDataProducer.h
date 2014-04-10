#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "IDataProducer.h"

class TestDataProducer : public ::testing::Test
{
public:
    TestDataProducer(void);
    ~TestDataProducer(void);
    virtual void SetUp();
	virtual void TearDown();
};
