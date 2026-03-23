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

		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(estPair(-3), 0);
		}
		//Question 1: Non, tous les tests ne passent pas
		//Question 2: La fonction est mal construite et inverse les bonnes et les mauvaises reponses.

		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(max2(5,3), 5);
		}

		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}

		TEST_METHOD(TestMethod8)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}

		TEST_METHOD(TestMethod9)
		{
			Assert::AreEqual(max2(4, 4),4);
		}

//Question 1: Le test 3 revele le bug le plus clairement car il est le seul test a ne pas être juste

		TEST_METHOD(TestMethod10)
		{
			Assert::AreEqual(factorielle(0), 1);
		}

		TEST_METHOD(TestMethod11)
		{
			Assert::AreEqual(factorielle(1), 1);
		}

		TEST_METHOD(TestMethod12)
		{
			Assert::AreEqual(factorielle(4), 24);
		}
	};
}
