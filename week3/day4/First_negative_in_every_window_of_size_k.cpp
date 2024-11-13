#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &arr, int k)
    {
        vector<int> v;
        queue<int> negativeIndx;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < 0)
                negativeIndx.push(i);

            if (i >= k - 1)
            {
                if (!negativeIndx.empty() && negativeIndx.front() <= i)
                    v.push_back(arr[negativeIndx.front()]);
                else
                    v.push_back(0);

                if (!negativeIndx.empty() && negativeIndx.front() <= i - k + 1)
                    negativeIndx.pop();
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