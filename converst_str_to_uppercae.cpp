// #include<iostream>
// using namespace std;

// void toUpper(char word[], int n) {
//     for (int i = 0; i < n; i++)
//     {
//         char ch = word[i];
//         if(ch >= 'A' && ch <= 'Z') {  // Already Uppercase
//             continue;
//         }
//         else {  // lowercase
//             word[i] = ch - 'a' + 'A';
//         }
//     }
    
// }

// int main() {

//     char word[] = "MaNgO";

//     toUpper(word, strlen(word));

//     cout << word << endl;

//     return 0;
// }

// To Loweercase
#include<iostream>
using namespace std;

void toUpper(char word[], int n) {
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z') {  // Already lowercase
            continue;
        }
        else {  // lowercase
            word[i] = ch - 'A' + 'a';
        }
    }
    
}

int main() {

    char word[] = "APPLE";

    toUpper(word, strlen(word));

    cout << word << endl;

    return 0;
}