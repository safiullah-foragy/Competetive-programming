#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{

    ll n, d;
    cin >> n >> d;

    set<int> st;
    st.insert(1);
    if (d == 1)
    {
        if (n >= 3)
        {
            st.insert(3);
            st.insert(7);
        }
        if (n > 3)
        {
            st.insert(9);
        }
    }

    if (d == 2)
    {
        if (n >= 3)
        {
            st.insert(3);
            st.insert(9);
            st.insert(7);
        }
    }

    if (d == 3)
    {
        if (n >= 3)
        {
            st.insert(9);
            st.insert(7);
        }

        if (n >= 1)
        {
            st.insert(3);
        }
    }

    if (d == 4)
    {
        if (n >= 3)
        {
            st.insert(3);
            st.insert(7);
        }
        if (n > 3)
        {
            st.insert(9);
        }
    }

    if (d == 5)
    {

        st.insert(5);
        if (n >= 3)
        {
            st.insert(3);
            st.insert(9);
            st.insert(7);
        }
        if (n > 3)
        {
            st.insert(9);
        }
    }
    if (d == 6)
    {

        if (n >= 3)
        {
            st.insert(7);
            st.insert(9);
        }
        if (n >= 1)
        {
            st.insert(3);
        }
    }

    if (d == 7)
    {

        if (n >= 3)
        {
            st.insert(3);
            st.insert(9);
        }
        if (n >= 1)
        {
            st.insert(7);
        }
    }

    if (d == 8)
    {

        if (n >= 3)
        {
            st.insert(3);
            st.insert(7);
        }
        if (n > 3)
        {
            st.insert(9);
        }
    }

    if (d == 9)
    {

        if (n >= 1)
        {
            st.insert(9);
            st.insert(3);
            st.insert(7);
        }
    }

    for (auto &i : st)

    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
