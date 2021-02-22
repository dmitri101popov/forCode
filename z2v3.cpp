#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;



int main() {
	string str;
	cin >> str;
	string out = "";
	int sum = 0;
	for (int i = 0; i <= str.size(); i++) {
		if (((int)str[i] >= '0') && ((int)str[i] <= '9')) {
			sum += (int)str[i] - '0';
		}
		else {
			out += tolower(str[i]);
		}
	}

	cout << "sum = " << sum << endl << out;
	
	return 0;
}