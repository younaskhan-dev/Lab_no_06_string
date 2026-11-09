#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (str.empty()) {
        cout << "String is empty" << endl;
        return 0;
    }
    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1] << endl;
    if (str[0] == str[str.length() - 1])
        cout << "First and last characters are the same" << endl;
    else
        cout << "First and last characters are different" << endl;
    return 0;
}
