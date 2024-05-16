//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       char ans = '\0'; // Initialize ans with null character
    unordered_map<char, int> m;
    
    // Count occurrences of each character
    for(int i = 0; i < S.size(); i++) {
        m[S[i]]++;
    }
    
    // Find the first non-repeating character
    for(int i = 0; i < S.size(); i++) {
        char key = S[i];
        if(m[key] == 1) { // If the character occurs only once
            ans = key;
            break; // Found the first non-repeating character, exit the loop
        }
    }
    
    if (ans == '\0') {
        return '$';
    }
    return ans;
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends