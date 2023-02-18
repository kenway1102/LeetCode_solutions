//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        char ch = str[0];
        if(str == "Character" || str == "Integer" || str == "Float"||str == "Double" ||str == "Long")
        {
            if(ch == 'C')
                return sizeof(char);
            if(ch == 'I')
                return sizeof(int);
            if(ch == 'L')
                return sizeof(long);
            if(ch == 'F')
                return sizeof(float);
            if(ch == 'D')
                return sizeof(double);
            
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends