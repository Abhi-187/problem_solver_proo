//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int N) {
         for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
        
        cout<<endl;
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
   
    }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends