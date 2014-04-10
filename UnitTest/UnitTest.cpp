// UnitTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TestLoadSettings.h"


int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
    int Ret = RUN_ALL_TESTS();
    return Ret;
}

