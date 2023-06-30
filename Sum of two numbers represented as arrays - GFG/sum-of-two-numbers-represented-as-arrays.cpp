//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	   int n=a.size();
	   int m=b.size();
	   if(n<m)
	   {
	       reverse(a.begin(),a.end());
	       for(int i=0;i<(m-n);i++)
	       {
	           a.push_back(0);
	       }
	       reverse(a.begin(),a.end());
	   }
	   else
	   {
	       reverse(b.begin(),b.end());
	       for(int i=0;i<(n-m);i++)
	       {
	           b.push_back(0);
	       }
	       reverse(b.begin(),b.end());
	   }
	   int c=0;
	   int sum=0;
	   n=a.size();
	   vector<int> ans;
	   for(int i=n-1;i>=0;i--)
	   {
	       sum=a[i]+b[i]+c;
	       if(sum>=10)
	       {
	           c=1;
	           sum-=10;
	       }
	       else
	        c=0;
	       ans.push_back(sum);
	   }
	   if(c==1) ans.push_back(c);
	   reverse(ans.begin(),ans.end());
	   return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends