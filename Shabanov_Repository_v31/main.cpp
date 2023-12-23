#include <iostream>
#include <string>

using namespace std;

/**
	@file		main.cpp
	@brief		Присоединение цифры к числу
	@copyright	ВоГУ
	@author		Шабанов М. С.
	@date		23-12-2023
	@version	1.0.0
\par Содержит функции:
	@ref init_k
	@ref init_d
	@ref k_plus_d
	@ref d_plus_k
*/


/** \brief Метод для проверки корректности введеного числа

\param k - Число
*/
string init_k(string k) {
	bool check = false;
	cin >> k;
	string nums = "0123456789";
	for (int i = 0; i < k.length(); i++) {
		if (nums.find(k[i]) != string::npos) {
			check = false;
		}
	}
	if (check) {
		return k;
	}
	cout << "ERROR";
	return;
}


/** \brief Метод для проверки корректности введеной цифры
 
\param d - Цифра
*/
string init_d(string d) {
	bool check = false;
	cin >> d;
	string nums[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	for (string num : nums) {
		if (num == d) {
			check = true;
		}
	}
	if (check) {
		return d;
	}
	cout << "ERROR";
	return;
}

/**Метод вставки цифры в конец числа 

\param k - Число
\param d - Цифра
*/
int k_plus_d(string k, string d) {
	string nums_k = "0123456789";
	string nums_d[] = { "1", "2", "3" , "4" , "5" , "6" , "7" , "8" , "9" };
	bool check_k = true, check_d = false;
	for (int i = 0; i < k.length(); i++) {
		if (nums_k.find(k[i]) == string::npos) {
			check_k = false;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (nums_d[i] == d) {
			check_d = true;
		}
	}
	if (check_k && check_d) {
		return stoi(k + d);
	}
	cout << "ERROR";
	return;
}

/**Метод вставки цифры в начало числа

\param d - Число
\param k - Цифра
*/
int d_plus_k(string d, string k) {
	string nums_k = "0123456789";
	string nums_d[] = { "1", "2", "3" , "4" , "5" , "6" , "7" , "8" , "9" };
	bool check_k = true, check_d = false;
	for (int i = 0; i < k.length(); i++) {
		if (nums_k.find(k[i]) == string::npos) {
			check_k = false;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (nums_d[i] == d) {
			check_d = true;
		}
	}
	if (check_k && check_d) {
		return stoi(d + k);
	}
	cout << "ERROR";
	return;
}

int main() {

	return 0;
}