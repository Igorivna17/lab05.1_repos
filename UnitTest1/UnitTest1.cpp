#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
double h(const double x, const double y);

double s, t,x ,y;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g = h(1, s + t) + h(s, s - t) - h(t, sqrt(s * s + t * t));
			double expected = (x * x + y * y) / (1 + x * x + x * x * y * y);
		}
	};
}
