//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> map;
        for(int i=0; i<str.size(); i++){
            map[str[i]]++;
        }
        char ans = 'z';
        int ansCount = 0;
        for(auto it : map){
            if(it.second > ansCount){
                ans = it.first;
                ansCount = it.second;
            }
            else if(it.second == ansCount){
                ans = min(it.first, ans);
                ansCount = map[ans];
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
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends