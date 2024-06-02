//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(a[i]<0){
                neg.push_back(a[i]);
            }
            else if(a[i]>=0){
                pos.push_back(a[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(i<pos.size()){
                int poselement = pos[i];
                ans.push_back(poselement);
            }
            if(i<neg.size()){
                int negelement = neg[i];
                ans.push_back(negelement);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends