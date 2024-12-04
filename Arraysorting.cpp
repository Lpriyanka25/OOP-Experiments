// C++ Code to find Median of two Sorted Arrays of 
// Different Sizes using Sorting

#include <bits/stdc++.h>
using namespace std;

double medianOf2(vector<int>& arr1, vector<int>& arr2) {
  
    // Concatenate
    vector<int> arr3(arr1.begin(), arr1.end());
    arr3.insert(arr3.end(), arr2.begin(), arr2.end());

    // Sort the concatenated array
    sort(arr3.begin(), arr3.end());
    
    // Calculate and return the median
    int n = arr3.size();
      
      // If length of array is even
    if (n % 2 == 0) { 
        int mid1 = n / 2;
        int mid2 = mid1 - 1;
        return (arr3[mid1] + arr3[mid2]) / 2.0;
    } 
  
      // If length of array is odd
      else {
        return arr3[n / 2];
    }
}

int main() {
    vector<int> arr1 = { -5, 3, 6, 12, 15 };
    vector<int> arr2 = { -12, -10, -6, -3, 4, 10 };

    cout << medianOf2(arr1, arr2) << endl;
    return 0;
}
