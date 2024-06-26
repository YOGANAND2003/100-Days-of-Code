//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto pair:mpp){
            if(pair.second>n/3){
                ans.push_back(pair.first);
            }
        }
        if(ans.size()==2){
            if(ans[0]>ans[1]){
                swap(ans[0],ans[1]);
            }
        }
        if(ans.size()==0) return {-1};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends