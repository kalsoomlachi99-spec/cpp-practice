#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int>& arr, int target, int st, int end){
    if(st <= end){ // base case
        int mid = st + (end - st) / 2; // to avoid overflow

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            return binarySearch(arr, target, st, mid - 1);
        }
        else{
            return binarySearch(arr, target, mid + 1, end);
        }
    }
    else{
        return -1;
    }
}

int main() {
    
    /*Recursive Binary Search*/

    vector <int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    cout << binarySearch(arr, target, 0, arr.size()-1) << endl;

    return 0;
}
