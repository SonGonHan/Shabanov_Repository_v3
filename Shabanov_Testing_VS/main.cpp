#include <iostream>
#include <string>

using namespace std;

bool init_k(string k) {
	if (k.empty())
		return false;
	try
	{
		int number = stoi(k);
		if (number <= 0) {
			return false;
		}
	}
	catch (...)
	{
		return false;
	}
	return true;
}

bool init_d(string d) {
	if (d.empty())
		return false;
	try
	{
		int number = stoi(d);
		if (number < 1 || number > 9) {
			return false;
		}
	}
	catch (...)
	{
		return false;
	}
	return true;
}

int k_plus_d(int k, int d) {
	return stoi(to_string(k) + to_string(d));
}

int d_plus_k(int d, int k) {
	return stoi(to_string(d) + to_string(k));
}

int main() {
	string s;

	do {
		cout << "Input 'k'";
		getline(cin, s);
	} while (!init_k(s));
	int k = stoi(s);

	do {
		cout << "Input 'd'";
		getline(cin, s);
	} while (!init_d(s));
	int d = stoi(s);

	cout << "k + d = " << k_plus_d(k, d) << "\nd + k = " << d_plus_k(d, k);
	return 0;
}