#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double dl;

#define M_PI 3.14159265358979323846

void solve()
{
    dl x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    dl d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (d >= r1 + r2)
    {
        cout << fixed << setprecision(20) << 0.0 << endl;
        return;
    }

    if (d <= fabs(r1 - r2))
    {
        dl smallerRadius = min(r1, r2);
        cout << fixed << setprecision(20) << M_PI * smallerRadius * smallerRadius << endl;
        return;
    }

    dl alpha = acos((r1 * r1 + d * d - r2 * r2) / (2.0 * r1 * d));
    dl beta = acos((r2 * r2 + d * d - r1 * r1) / (2.0 * r2 * d));

    dl segmentArea1 = r1 * r1 * (alpha - sin(2 * alpha) / 2.0);
    dl segmentArea2 = r2 * r2 * (beta - sin(2 * beta) / 2.0);

    dl intersectionArea = segmentArea1 + segmentArea2;

    cout << fixed << setprecision(20) << intersectionArea << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
