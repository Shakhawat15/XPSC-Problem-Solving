//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    bool fun(map<char, int> p, map<char, int> t)
    {
        for (auto i = p.begin(); i != p.end(); i++)
        {
            char ch = i->first;
            if (p[ch] != t[ch])
            {
                return false;
            }
        }
        return true;
    }

    int search(string pat, string txt)
    {
        int n = txt.size();
        int m = pat.size();
        map<char, int> pm, tm;
        for (char val : pat)
        {
            pm[val]++;
        }

        int l = 0, r = 0, cnt = 0;

        while (r < n)
        {
            tm[txt[r]]++;
            if (r - l + 1 == pat.size())
            {
                if (fun(pm, tm))
                    cnt++;
                tm[txt[l]]--;
                l++;
            }
            r++;
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