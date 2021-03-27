#include <iostream>
#include <string>

using namespace std;

const bool nicknameValid(string& nickname) {
	if ((nickname.length() < 4) || (nickname.length() > 25)) {
		cout << "if 1" << endl; 
		return false;
	}

	if (!isalpha(nickname[0])) {
		cout << "if 2" << endl;
		return false;
	}

	if (nickname[nickname.length() - 1] == '_') {
		cout << "if 3" << endl;
		return false;
	}

	for (int i = 0; i < nickname.length(); i++) {
		if (!isalpha(nickname[i]) && !isdigit(nickname[i]) && nickname[i] != '_') {
			cout << "if 4" << nickname[i] << endl;
			return false;
		}
	}

	return true;
}

int main() {

	string InputNickname{};

	cout << "Enter nickname: ";
	getline(cin, InputNickname);

	cout << boolalpha << nicknameValid(InputNickname);

	return 0;
}

