//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count = 0;
        for (int i = 1; i <= n; i++) {
            int temp = i; // Use a separate variable to extract digits
            while (temp > 0) {
                int r = temp % 10;
                temp = temp / 10; 
                
                if (r == 4) {
                    count++;
                    break;
                }
                
            }
        }
        return count;
    }
    
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends