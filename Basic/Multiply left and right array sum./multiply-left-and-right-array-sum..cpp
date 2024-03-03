//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int a=n/2;
    int ans1=0;
    int ans2=0;
    for(int i=0; i<a; i++){
        ans1+=arr[i];
    }
    for(int i=a; i<n; i++){
        ans2+=arr[i];
    }
    int ans3=ans1*ans2;
    return ans3;
}