#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_1(1)/Lab06_1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int array[] = { 2,3,4,5,6, };
			t = Number(array, 22,3,0);
			Assert::AreEqual(t, 17);

		}
	};
}
