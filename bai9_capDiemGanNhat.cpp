#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t;
    cin >> t;
    while (t--)
    {
        int n;  cin>>n;
        vector<pair<int,int>> points;
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin>>x>>y;
            points.push_back(make_pair(x,y));
        }
        set<double>se;
        for(int i = 0; i < n; i++)
        {
            int x1 = points[i].first;
            int y1 = points[i].second;
            for(int j = i + 1; j < n; j++)
            {
                int x2 = points[j].first;
                int y2 = points[j].second;
                double ans = 1.0*sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
                se.insert(ans);
            }
        }
        for(double it : se)
        {
            cout<<fixed<<setprecision(6)<<it<<endl;
            break;
        }
    }
    return 0;
}