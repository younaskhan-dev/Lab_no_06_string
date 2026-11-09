#include <iostream>
#include <string>
using namespace std;

int main() {
    // Program 1: Palindrome Checker
    string word, reversed = "";
    cout << "Enter a word: ";
    cin >> word;
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
    if (word == reversed)
        cout << "It is a Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    // Program 2: Count Vowels and Consonants
    string text;
    int vowels = 0, consonants = 0;
    cout << "Enter a word: ";
    cin >> text;
    for (int i = 0; i < text.length(); i++) {
        char ch = tolower(text[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else if (isalpha(ch))
            consonants++;
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}
