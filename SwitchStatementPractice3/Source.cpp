#include <iostream>
#include <string>	

using namespace std;


bool is_paren(char t) {

	switch (t) {
	case '(': return true;
	case '[':return true;
	case '{': return true;
	default: return false;
	}

}

int main() {

	/*char myChar;
	cin >> myChar;

	
	if (is_paren(myChar)) { cout << "true"; }
	else { cout << "false"; }
*/

	if (1 == true) {
		cout << "True!";
	}
	else {
		cout << "False!";
	}
	//some changes
	return 0;
}