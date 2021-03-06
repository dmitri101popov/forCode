#include <iostream>
#include <string>


using namespace std;


// Пока работает только до десятичной с/с на буковах сдыхаеть :( нииид фиксинг
// Ешё тут код с прошлого пз в основном, лень переделывать:)

int to_decimal(int base, string str) {
	int x = base;
	int out = 0;
	for (int i = 1; i <= str.size() - 2; i++) {
		base *= x;
	}
	for (int i = 0 ; i <= str.size() - 1; i++) {
		out += ((int)str[i] - '0') * base;
		base /= x;
	}
	return out;
}

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
	to_anything(x, out_number_base);



	return 0;
}