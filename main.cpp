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

}

int d_plus_k(string d, string k) {

}

int main() {

	return 0;
}