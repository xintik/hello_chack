#include <bits/stdc++.h>
#include <cmath> // Include cmath explicitly
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
       int mx= max(n,k);
       int mn= min(n,k);
       if(k==1)
       {
       	cout << "1\n";
       }
       else
       {
       	if(mx%mn) cout << (mx/mn)+1<< endl;
       	else cout << mx/mn << endl;
       }
    }
}
