#include<iostream>
using namespace std;

void reverse(char word[], int n) {
    int st = 0, end = n-1;

    while (st < end)
    {
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

int main() {

    char arr[] = "code";

    reverse(arr, strlen(arr));

    cout << "Reverse : " << arr << endl;

    return 0;
}

// Time Complexity = O(n/2)