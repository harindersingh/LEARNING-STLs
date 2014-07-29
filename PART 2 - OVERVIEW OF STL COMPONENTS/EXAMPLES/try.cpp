#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int temp, t, i, n;
    vector<int> v;
    cin >> t;
    while(t--)
    {
        cin >> temp;
        v.push_back(temp);
    }
    n = v.size();
    sort(v.begin(),v.end(),greater<int>());
    for(i = 0;i < n; i++)
        cout << v[i] << "\t";
    return 0;
}
