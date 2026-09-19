#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec1 = {1, 2, 3, 4};
    cout << vec1.size() << endl;

    vector<int> vec2(5, -1);
    cout << vec2.size() << endl;

    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    return 0;
}