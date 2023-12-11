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
			// �������� ������
			// �������� ������
			string str = "";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_k(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Empty)
		{
			// �������� ������
			// �������� ������
			string str = "";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_d(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_k_letter)
		{
			// �������� ������
			// �������� ������
			string str = "a";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_k(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_letter)
		{
			// �������� ������
			// �������� ������
			string str = "a";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_d(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_k_Negative)
		{
			// �������� ������
			// �������� ������
			string str = "-1";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_k(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Negative)
		{
			// �������� ������
			// �������� ������
			string str = "-1";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_d(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(Check_d_Not_Digit)
		{
			// �������� ������
			// �������� ������
			string str = "10";
			bool expected = false;

			// ��������� �������� � ������� ������������ ������
			bool actual = init_d(str);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(d3_plus_k15_315returned)
		{
			// �������� ������
			// �������� ������
			int d = 3;
			int k = 15;
			int expected = 315;

			// ��������� �������� � ������� ������������ ������
			int actual = d_plus_k(d,k);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}

		TEST_METHOD(k15_plus_d3_153returned)
		{
			// �������� ������
			// �������� ������
			int k = 15;
			int d = 3;
			int expected = 153;

			// ��������� �������� � ������� ������������ ������
			int actual = k_plus_d(k, d);

			// ��������� ���������� ���������� � ����������
			Assert::AreEqual(expected, actual, L"Enterred empty value");
		}
	};
}