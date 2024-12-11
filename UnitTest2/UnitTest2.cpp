#include "pch.h"
#include "CppUnitTest.h"
#include "../math_stuff/math_stuff.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		float x = 0;
		float y = 1;
		float S = tan(x / y);
		float test = 0;
		float R = (pow(x, 1 / 3) * sin(x) / exp(3 * x) + exp(3 * y));
		TEST_METHOD(isSequalto0)
		{
			Assert::AreEqual(S, test);
		}
		TEST_METHOD(isRequalto0)
		{
			Assert::AreEqual(R, test);
		}
		TEST_METHOD(isSmaxnum)
		{
			Assert::IsTrue(S>R);
		}
	};
}
