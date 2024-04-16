#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i)
    {

        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;

        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < n; ++k)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        bubbleSort(arr);
    }
    return 0;
}
