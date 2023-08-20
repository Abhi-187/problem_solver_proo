//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
public:
vector<int> leaders(int arr[], int n) {
    vector<int> ans; // Create a vector to store the leader elements
    
    // Iterate through the array to find the leaders
    for (int i = 0; i < n; i++) {
        bool leader = true; // Assume the current element is a leader

        // Compare the current element with the elements to its right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                leader = false; // If a greater element is found, the current element is not a leader
                break; // No need to continue checking the rest of the elements
            }
        }

        if (leader) {
            ans.push_back(arr[i]); // If the current element is a leader, add it to the vector
        }
    }

    return ans; // Return the vector containing leader elements
}
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends