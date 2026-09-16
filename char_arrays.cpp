#include<iostream>
#include<string>
using namespace std;

int main() {

    // char word[30];

    // cin >> word;

    // cout << "Your word was: " << word << endl;
    // cout << "Length: " << strlen(word) << endl;

    char sentence[50];

    cin.getline(sentence, 50, '*');

    cout << "Your word was: " << sentence << endl;
    cout << "Length: " << strlen(sentence) << endl;

    return 0;
}