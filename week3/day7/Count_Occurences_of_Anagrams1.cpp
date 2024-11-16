//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        string sortedPat = pat;
        sort(sortedPat.begin(), sortedPat.end());
        int l = 0, r = 0, cnt = 0;
        vector<string> v;
        string s = "";
        while (r < txt.size())
        {
            s += txt[r];
            if (r - l + 1 == pat.size())
            {
                v.push_back(s);
                s.erase(s.begin());
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        for (string s : v)
        {
            sort(s.begin(), s.end());
            if (sortedPat == s)
                cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends