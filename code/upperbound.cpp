#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec;
        
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            vec.push_back(n - x);
        }
        
        sort(vec.begin(), vec.end());

        long long sum =0;
       
           int i = 0;
           while(i < vec.size() && sum + vec[i] < n)
           {
            sum += vec[i++];
           }
           cout << i << endl;
        
      

        
        
    }

    
}
