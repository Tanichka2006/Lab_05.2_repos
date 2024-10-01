#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.2/Lab_05.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			double eps = 0.0000001;
			int n = 1;
			double s = 0;
			double expS = log(x);
			S(x, eps, n, s);
			Assert::AreEqual(s,expS,0.01);
		}
	};
}
