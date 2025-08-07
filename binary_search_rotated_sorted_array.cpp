#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,6,7,8,9,10,1,2,3,4};
    int target = 11;
    int start = 0, end = arr.size() - 1;
    int flag = 1;
    while(start < end){
        int m = (start + end) / 2;
        if(arr[m] == target){
            flag = 0;
            cout << "YES";
            break;
        }
        else if(arr[m] >= arr[0]){
            // I am in region 1
            if(target  < arr[0]){
                start = m + 1; //If target is in region 2
            }
            else if(target < arr[m]){
                end = m - 1;
            }
            else{
                start = m + 1;
            }
        }
        else{
            // I am in region 2
            if(target >= arr[0]){
                end = m - 1;
            }
            else if(target < arr[m]){
                end = m - 1;
            }
            else{
                start = m + 1;
            }
        }
    }
    if(flag) cout << "NO";
    return 0;
}
