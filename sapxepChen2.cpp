#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void insertionSort(vector<int> &vec)
{
    int n = vec.size();
    vector<vector<int>> steps; // Mảng lưu trữ các bước sắp xếp

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

        // Lưu bước sắp xếp vào mảng
        steps.push_back(vec);
    }

    // In ngược lại các bước
    for (int i = steps.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << n - i - 1 << ": ";
        for (int k = 0; k < steps[i].size(); k++)
        {
            cout << steps[i][k] << " ";
        }
        cout << endl;
    }
}

// Hàm main
int main()
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
            int x;
            cin >> x;
            vec.push_back(x);
        }
        insertionSort(vec);
    }
    return 0;
}
