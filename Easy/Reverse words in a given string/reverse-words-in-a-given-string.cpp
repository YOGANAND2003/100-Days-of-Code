//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector <string> arr;
        string str="";
        for(int i=0; i<S.size(); i++){
            if(S[i] != '.'){
                str += S[i];
            } else {
                if(!str.empty()){
                    arr.push_back(str);
                    str="";
                }
            }
        }
        if (!str.empty()) {
            arr.push_back(str);
        }
        int st=0; int e=arr.size()-1;
        while(st<e){
            swap(arr[st],arr[e]);
            st++;
            e--;
        }
        string ans = "";
        for(int i=0; i<arr.size(); i++){
            ans += arr[i];
            if(i != arr.size()-1){
                ans += ".";
            }
        }
        return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends