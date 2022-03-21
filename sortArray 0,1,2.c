// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {

        int count0 = 0;
        int count1= 0;
        int count2 = 0;

        for (int i =0; i<n;i++){
            if(a[i] == 0){
                count0 ++;
            }
            if(a[i] == 1){
                count1 ++;
            }
            if(a[i] == 2){
                count2 ++;
            }

        }


              for(int j = 0; j<count0 ; j++){
                  a[j] = 0;
              }

               for(int j = count0; j<count1+count0 ; j++ ){
                  a[j] = 1 ;
              }

               for(int j =count1+count0; j<count2+count1+count0 ; j++){
                  a[j] = 2 ;
              }



    }

};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;


    }
    return 0;
}

  // } Driver Code Ends
