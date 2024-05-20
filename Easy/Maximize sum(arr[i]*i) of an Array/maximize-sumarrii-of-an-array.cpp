//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
       sort(a,a+n);
        
        // Initialize result
        long result = 0;

        // Calculate the maximum value
        for (int i = 0; i < n; i++) {
            result += (long)a[i] * i;
            result %= 1000000007; // Take modulo to prevent overflow
        }
        
        return (int)result;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends