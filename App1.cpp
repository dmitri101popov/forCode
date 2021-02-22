#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (i != str.size() - 1) { //Убраю в коцне 10^0
			cout << str[i] << "* 10^" << str.size() - (i + 1); // тут понятно
			if (i < str.size() - 1) {
				cout << " + ";
			}
		}
		else
		{
			cout << str[i];
		}
	}


	return 0;
}