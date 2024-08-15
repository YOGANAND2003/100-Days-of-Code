//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int MaximumSum(int a[], int n) {
        // Sort the array
        sort(a, a + n);
        
        // Find the maximum element and its count
        int max_sum = a[n-1] + a[n-2];
        int count_max1 = 0, count_max2 = 0;

        // Count the occurrences of the two largest elements
        for (int i = 0; i < n; i++) {
            if (a[i] == a[n-1]) count_max1++;
            if (a[i] == a[n-2]) count_max2++;
        }
        
        // If the two largest elements are the same
        if (a[n-1] == a[n-2]) {
            return (count_max1 * (count_max1 - 1)) / 2;
        }
        
        // Otherwise, return the product of their counts
        return count_max1 * count_max2;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.MaximumSum(a, n)<<endl;
    }

    return 0;
}



// } Driver Code Ends