//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int temp = n;
        int ans = 0;
        while(temp > 0){
            int div = temp%10;
            if(div == 0){
                temp /= 10;
                continue;
            }
            if(n%div == 0)
            ans++;
            temp /= 10;
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends