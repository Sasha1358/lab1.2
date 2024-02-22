#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.2/Angle.h"
#include "../lab1.2/Angle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Angle angle{};
			angle.Init(57.296, 0.0);
			Assert::AreEqual(angle.ToRadians(), 1.0, 0.0001); 
		}
	};
}
