// // Two pointers approach (Using arrays)

// #include<iostream>
// using namespace std;

// void pairSum(int *arr, int n, int target) {
//     int currSum = 0;
//     int st = 0, end = n-1;

//     while (st < end)
//     {
//         currSum = arr[st] + arr[end];

//         if (currSum == target)
//         {
//             cout << "Pair Found: (" << st << "," << end << ")" << endl;
//             break;
//         }
//         else if (currSum > target)
//         {
//             end--;
//         }
//         else {
//             st++;
//         }
        
//         currSum = 0;
//     }
    
// }

// int main() {

//     int arr[4] = {2, 7, 11, 15};
//     int target = 18;

//     pairSum(arr, 4, target);

//     return 0;
// }

// Two pointers approach

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int currSum = 0;
    int st = 0, end = arr.size()-1;

    vector<int> ans;

    while (st < end)
    {
        currSum = arr[st] + arr[end];

        if (currSum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currSum > target)
        {
            end--;
        }
        else {
            st++;
        }
        
        currSum = 0;
    }
    return ans;
}

int main() {

    vector<int> vec = {2, 7, 11, 15};
    int target = 18;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}