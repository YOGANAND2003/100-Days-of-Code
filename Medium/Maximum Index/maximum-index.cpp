//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
     vector<pair<int, int>> v;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v.empty() || v.back().first>a[i])v.push_back({a[i], i});
            else{
                int low = 0, high = v.size()-1;
                int curr_pos=-1;
                while(low<=high){
                    int mid = (low + high)/2;
                    if(v[mid].first<=a[i]){
                        curr_pos = mid;
                        high = mid-1;
                    }
                    else low = mid+1;
                }
                if(curr_pos!=-1){
                    ans =max(ans, i-v[curr_pos].second);
                }
            }
        }
        return ans;



    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends