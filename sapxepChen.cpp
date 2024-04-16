#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void insertionSort(vector<int> &vec)
{
    int n = vec.size();
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
        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; k++)
        {
            cout << vec[k] << " ";
        }
        cout << endl;
    }
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
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