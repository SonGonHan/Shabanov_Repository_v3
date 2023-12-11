#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Shabanov_Testing_VS/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Shabanov_Tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Check_k_Empty)
		{
			// исходные данные
			// исходные данные
			string str = "";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_k(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Empty)
		{
			// исходные данные
			// исходные данные
			string str = "";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_d(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_k_letter)
		{
			// исходные данные
			// исходные данные
			string str = "a";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_k(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_letter)
		{
			// исходные данные
			// исходные данные
			string str = "a";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_d(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_k_Negative)
		{
			// исходные данные
			// исходные данные
			string str = "-1";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_k(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Negative)
		{
			// исходные данные
			// исходные данные
			string str = "-1";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_d(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Not_Digit)
		{
			// исходные данные
			// исходные данные
			string str = "10";
			bool expected = false;

			// получение значения с помощью тестируемого метода
			bool actual = init_d(str);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(d3_plus_k15_315returned)
		{
			// исходные данные
			// исходные данные
			int d = 3;
			int k = 15;
			int expected = 315;

			// получение значения с помощью тестируемого метода
			int actual = d_plus_k(d,k);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(k15_plus_d3_153returned)
		{
			// исходные данные
			// исходные данные
			int k = 15;
			int d = 3;
			int expected = 153;

			// получение значения с помощью тестируемого метода
			int actual = k_plus_d(k, d);

			// сравнение ожидаемого результата с полученным
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}
	};
}