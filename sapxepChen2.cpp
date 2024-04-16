#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void insertionSort(vector<int> &vec)
{
    int n = vec.size();
    vector<vector<int>> step(n); 
    for (int i = 0; i < n; i++)
    {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
        for (int k = 0; k <= i; k++)
        {
            step[i].push_back(vec[k]);
        }
    }
    for(int i = n - 1; i >= 0; i--) 
    {
        cout<<"Buoc "<<i<<": ";
        for(auto x : step[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
// main
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;  cin>>x;
            vec.push_back(x);
        }
        insertionSort(vec);
    }
    return 0;
}
