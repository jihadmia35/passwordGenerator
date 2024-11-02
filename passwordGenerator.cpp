#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

void passwordGenerator(int length) {
    string password = "";
    string pass = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890@#$%^&*";

	random_device rd;
    mt19937 eng(rd());

	uniform_int_distribution<> distr(0, pass.size() - 1);

    for(int i = 0; i < length; i++) password += pass[distr(eng)];
    cout << password << endl;
}

int main() {
    int length;
    cout << "Please enter the length of the password: ";
    cin >> length;
    passwordGenerator(length);
    return 0;
}