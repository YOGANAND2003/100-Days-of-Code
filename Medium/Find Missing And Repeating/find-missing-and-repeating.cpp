//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        int i,p,num=0;
        for(i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                p=arr[i];
            }
           
        }
       int ans=1;
       for(i=0;i<arr.size();i++)
        {
            if(arr[i]==ans)
            {
                ans++;
            }
        }

   
        return {p,ans};
        
     
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends