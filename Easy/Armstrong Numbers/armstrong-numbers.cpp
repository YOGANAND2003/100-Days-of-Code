//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int temp = n;
        int sum =0;
        while(temp>0){
            int r=temp%10;
            sum +=r*r*r;
            temp=temp/10;
        }
        
        // cout<<sum;
        // cout<<temp;
        if(sum == n){
           return "true";
        }
        else{
            return "false";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends