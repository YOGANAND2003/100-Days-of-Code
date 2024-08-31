//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPair(int k, vector<int> &arr) {
        // Complete the function
        int n=arr.size();
        int left = 0; 
        int right = n-1;
        int count =0;
        while(left<right){
            if(arr[left]+arr[right] == k){
                count++;
                left++;
                right--;
            }
            else if(arr[left]+arr[right] < k){
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int k;
        cin >> k;
        string input;
        getline(cin, input);
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.countPair(k, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends