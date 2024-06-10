//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        // int left=0; int right =0;int sum=0;
        // int maxi=-1;;
        // while(right<n){
        //     while(left<=right && sum<0){
        //         sum -=arr[right];
        //         left--;
        //     }
        //     sum += arr[right];
        //     maxi = max(maxi,sum);
        //     right++;
        // }
        // return maxi;
        long long sum=INT_MIN; long long count=0;
        for(int i=0;i<n;i++)
        {
            count+=arr[i];
            if(count>sum) sum=count;
            if(count<0) count=0;
        }
        return sum;
        
    

        // Your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends