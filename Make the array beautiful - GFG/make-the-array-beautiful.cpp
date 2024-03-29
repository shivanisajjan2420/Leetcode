//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

     class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) 
    {
        stack<int> st;
        vector<int> res;
        
        for(int i=0;i<arr.size();++i)
        {
            if(st.empty() || (st.top()>=0 && arr[i]>=0) || (st.top()<0 && arr[i]<0))
            st.push(arr[i]);
            else
            st.pop();
        }
        
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(begin(res),end(res));
        return res;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends