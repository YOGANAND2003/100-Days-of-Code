//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix(string arr[], int N) {
    string str;
        
        sort(arr,arr+N);
        
        string s=arr[0];
        string p=arr[N-1];
        
        if(s.length()<p.length()){
            
            for(int i=0; i<s.length(); i++){
            
            if(s[i]==p[i]){
                str.push_back(s[i]);
            }else{
                break;
            }
            
        }
            
        }else{
            
            for(int i=0; i<p.length(); i++){
                
            if(s[i]==p[i]){
                str.push_back(s[i]);
            }else{
                break;
            }
            
        }
        }
        
        if(str.empty()){
            return "-1";
        }else{
            return str;
        }
        
    }



};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends