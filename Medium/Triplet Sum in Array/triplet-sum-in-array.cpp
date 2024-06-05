//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        // set<vector<int>>st;
        // for(int i=0; i<n; i++){
        //     set<int>hashset;
        //     for(int j=i+1; j<n; j++){
        //         int thrid = X-(A[i]+A[j]);
        //         if(hashset.find(thrid) != hashset.end()){ 
        //             // if(A[i]+A[j]+thrid==X){
                        
        //             vector<int>temp = {A[i],A[j],thrid};
                    
        //             sort(temp.begin(), temp.end());
        //             st.insert(temp);
                    
        //         }
        //         hashset.insert(A[j]);
        //     }
        // }
        // vector<vector<int>>ans(st.begin(), st.end());
        
        vector<vector<int>> ans;
        sort(A,A+n);
        for (int i = 0; i < n; i++) {
            //remove duplicates:
            if (i != 0 && A[i] == A[i - 1]) continue;
    
            //moving 2 pointers:
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = A[i] + A[j] + A[k];
                if (sum < X) {
                    j++;
                }
                else if (sum > X) {
                    k--;
                }
                else {
                    vector<int> temp = {A[i], A[j], A[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    //skip the duplicates:
                    while (j < k && A[j] == A[j - 1]) j++;
                    while (j < k && A[k] == A[k + 1]) k--;
                }
            }
        }
        // return ans;
        if(ans.size()>0){
            return true;
        }
        else{
            return false;
        }
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends