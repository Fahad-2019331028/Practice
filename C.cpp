#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b && b==c)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if(a==b || a==c || b==c)
    {
        cout << "Isosceles Triangle" << endl;
    }
    else cout << "Bad Triangle" << endl;
}