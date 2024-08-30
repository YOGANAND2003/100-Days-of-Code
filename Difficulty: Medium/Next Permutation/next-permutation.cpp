//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        //1.find the breakpoint where at least one number greater than that at its right side 
        
        int index = -1;
        for(int i=N-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                index = i;
                break;
            }
        }
        
        //2.If we dont find that index then the arr is the reverse
        // incresing order so we just everse the array
        if(index == -1){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        
        //3.Once we found the break point we go and find the bigger number than the number at index
        // and swap both the numbers
        for(int i=N-1; i>index; i--){
            if(arr[i]>arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }
        
        //4. Then reverse the array from right after the index to end to get the required permutation
        reverse(arr.begin()+index+1,arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends