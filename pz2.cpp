#include <iostream>
#include <string>


using namespace std;




int to_decimal(int base, string str) {
	int x = base;
	int out = 0;
	for (int i = 1; i <= str.size() - 2; i++) {
		base *= x;
	}
	for (int i = 0 ; i <= str.size() - 1; i++) {
		if ((str[i] > 'A') && (str[i] < 'M')) {
			int k = int(str[i]) - 'A' + 10;
		}
		
		out += ((int)str[i] - '0') * base;
		
		base /= x;
	}
	if (base > 10) {
		return out - 7;
	}
	else {
		return out;
	}
}

// need fix for 0

void to_anything(int number, int need_base) {
	char ch;
	int x;
	string str;

	for (int i = 0; number >= 1; i++) {
		x = number % need_base;
		if (x < 10) {
			ch = '0' + x;
			str += ch;
		}
		else{
			ch = 'A' + x - 10;
			str += ch;
		}
		number /= need_base;
	}
	for (int i = str.size()-1; i >= 0; i--) {
		cout << str[i];
	}
	
	
}




int main() {
	int f_number_base;
	string f_number;
	int out_number_base;
	int x;


	cout << "ENTER: f_number_base >> f_number >> out_number_base" << endl;
	cin >> f_number_base >> f_number >> out_number_base;
	x = to_decimal(f_number_base, f_number);
	cout << x << endl;
	//to_anything(x, out_number_base);



	return 0;
}