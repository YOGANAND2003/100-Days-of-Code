//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
      bool isPrime(long long int x){
        for(long long int i=2;i<=sqrt(x);i++){
            if(x%i==0)
                return(false);
        }
        return(true);
    }
    
    
    long long int largestPrimeFactor(int N){
        long long int ans=1;
        for(long long int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                long long int k=N/i;
                if(isPrime(i))
                    ans=max(ans,i);
                if(isPrime(k))
                    ans=max(ans,k);
            }
            
        }
        return(ans);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends