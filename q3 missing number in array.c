/* Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4
Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9 */

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:

//   int sumOfN(int n){
//       //base case
//       if(n==1){
//           return 1;
//       }
//       //recursive case
//       return n+sumOfN(n-1) ;
//   }



    int MissingNumber(vector<int>& array, int n) {
    //   int  i=0;
    //   int m = n;
    //     while(i<n){
    //         if(array[i] == m ){
    //             m = m-1 ;
    //             i = 0 ;
    //         }
    //         else{
    //           i++;
    //         }
    //     }

    //     return m ;

    //   int s = sumOfN(n) ;
       int s = n*(n+1)/2 ;
       int sum = 0;

       for(int i =0 ;i<n-1 ;i++){
           sum = sum + array[i];
       }

        return s-sum;

    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends

