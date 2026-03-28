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

		TEST_METHOD(TestMethod13)
		{
			Assert::AreEqual(factorielle(5), 120);
		}

		TEST_METHOD(TestMethod14)
		{
			Assert::AreEqual(factorielle(-3), NULL);
		}

//Question 1: Non car les nombres négatifs n'ont pas de factorielle
//Question 2: On change la fonction pour qu'elle renvoie NULL si n est negatif

		TEST_METHOD(TestMethod15)
		{
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}

		TEST_METHOD(TestMethod16)
		{
			Assert::AreEqual(contientMajuscule("BonJour"), 1);
		}

		TEST_METHOD(TestMethod17)
		{
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(TestMethod18)
		{
			Assert::AreEqual(contientMajuscule(""), 0);
		}

		TEST_METHOD(TestMethod19)
		{
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}

		TEST_METHOD(TestMethod20)
		{
			Assert::AreEqual(divisionExacte(10,2), 1);
		}

		TEST_METHOD(TestMethod21)
		{
			Assert::AreEqual(divisionExacte(10, 3), 0);
		}

		TEST_METHOD(TestMethod22)
		{
			Assert::AreEqual(divisionExacte(0, 5), 1);
		}

		TEST_METHOD(TestMethod23)
		{
			Assert::AreEqual(divisionExacte(10, 0), 0);
		}
//Question: Car on ne peut pas diviser un nombre par 0.

		TEST_METHOD(TestMethod24)
		{
			int tab1[6] = { 1,2,3 };
			Assert::AreEqual(sommeTableau(tab1, 3), 6);
		}

		TEST_METHOD(TestMethod25)
		{
			int tab2[6] = { 5 };
			Assert::AreEqual(sommeTableau(tab2, 1), 5);
		}
		
		TEST_METHOD(TestMethod26)
		{
			int tab3[6] = { -1, 4, -3 };
			Assert::AreEqual(sommeTableau(tab3, 3), 0);
		}

		TEST_METHOD(TestMethod27)
		{
			int tab4[6] = {};
			Assert::AreEqual(sommeTableau(tab4, 0), 0);
		}

		TEST_METHOD(TestMethod28)
		{
			int tab5[6];
			Assert::AreEqual(sommeTableau(tab5, 3), 0);
		}

	};
}
