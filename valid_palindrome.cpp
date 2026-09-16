#include<iostream>
using namespace std;

bool isPalindrome(char word[], int n) {
    int st = 0, end = n-1;

    while (st < end)
    {
        if (word[st] != word[end]) {
            return false;
        }
        st++;
        end--;
    }

    return true;
}

int main() {

    char arr[] = "maam";

    if (isPalindrome(arr, strlen(arr))) {
        cout << arr << " is Palindrome";
    }
    else {
        cout << arr << " is not Palindrome";
    }

    return 0;
}