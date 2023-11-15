#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2 rec/Lab 6.2 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int a[size] = { 2, 4, 6, 8, 10 };  

			
			Change(a, size, 0, -1);

			
			Assert::AreEqual(2, a[0]);


		}
	};
}
