//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        
        int n1 = str1.size();
        int n2 = str2.size();
        int dp[n1+1][n2+1];
        memset(dp, 0, sizeof(dp));
        int maxi = 0;
        
        for(int i=1; i<=n1; i++){
            for(int j=1; j<=n2; j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    maxi = max(maxi, dp[i][j]);
                }else{
                    dp[i][j] = 0;
                }
                 
            }
        }
        
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends