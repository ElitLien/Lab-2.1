#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line a(2, 2), b(1, 1);
			Line o = a + b;
			double s = o.GetFirst();
			Assert::AreEqual(s, 3.0);
		}
	};
}
