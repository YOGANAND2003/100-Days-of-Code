//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // int CountPS(char s[], int n);

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
// int N;
// cin >> N;
// char S[N + 1];
// cin >> S;
// Solution ob;
//         cout << ob.CountPS(S, N) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    int expand(char s[], int i,int j, int n){
        int count=0;
        while(i>=0 && j<n && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int CountPS(char s[], int n) {
        // code here
        int totalCount = 0;
        for(int center=0; center<n; center++){
            int oddkaans = expand(s, center, center+2,n);
            int evenkaans = expand(s, center, center+1,n);
            totalCount = totalCount + oddkaans+evenkaans;
        }
        return totalCount;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        char S[N + 1];
        cin >> S;
        Solution ob;
        cout << ob.CountPS(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends