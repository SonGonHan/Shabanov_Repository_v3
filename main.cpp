#include <iostream>
#include <string>

using namespace std;

string init_k(string k) {
	bool check;
	string nums = "0123456789";
	cin >> k;
	check = true;
	for (int i = 0; i < k.length(); i++) {
		if (nums.find(k[i]) == string::npos) {
			check = false;
		}
	}
	if (check) {
		return k;
	}
	cout << "ERROR";
	return;
}

string init_d(string d) {

}

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