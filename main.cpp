#include <iostream>
#include <string>

using namespace std;

string init_k(string k) {

}

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

int k_plus_d(string k, string d) {

}

int d_plus_k(string d, string k) {

}

int main() {

	return 0;
}