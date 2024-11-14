#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &arr, int k)
    {
        vector<int> v;
        queue<int> negativeIndx;
        int r = 0, l = 0;
        while (r < arr.size())
        {
            if (arr[r] < 0)
                negativeIndx.push(arr[r]);

            if (r - l + 1 == k)
            {
                if (!negativeIndx.empty())
                {
                    v.push_back(negativeIndx.front());
                    if (arr[l] == negativeIndx.front())
                        negativeIndx.pop();
                }
                else
                    v.push_back(0);
                r++;
                l++;
            }
            else
            {
                r++;
            }
        }
        return v;
    }
};

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}