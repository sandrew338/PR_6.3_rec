#include "pch.h"
#include "CppUnitTest.h"
#include"..\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{

	public:
		TEST_METHOD(TestMethod1)
		{
			int p[5] = {};
			Assert::AreEqual(FillArrayWithT<int>(p, 0, 0), int('0'));
		}
	};
}
