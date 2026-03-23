#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_2/TP4_TU.h" 
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUtest
{
	TEST_CLASS(TP4TUtest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(estPair(6), 1);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(estPair(7), 0);
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(estPair(0), 1);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(estPair(-2), 1);
		}
	};
}
