#include<bits/stdc++.h>
using namespace std;
bool wood_find ( vector < long long  > vec , long long  m ,long long h)
{
	long long  wood = 0;
	for(int i = 0; i<vec.size() ; i++)
	{
           if(vec[i] >= h)
           {
           	wood+= (vec[i] - h);
           }
	}

	return wood >= m;
}
int main()
{

	long long  n , m; 
	cin >> n >> m ;
	vector < long long  > vec;
	for(long long i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		vec.push_back(x);
	}
	long long  lo = 1;
	long long  hi = 1e9;
	while( hi - lo > 1)
	{
		long long  mid = (hi + lo)/2;
		if(wood_find(vec, m , mid)) // T T T T F F F F skip left;
		{
			lo = mid;
		}
		else 
		{
			hi = mid-1;
		}
	}
	if(wood_find(vec, m ,hi)) cout << hi << endl;
	else cout << lo <<endl;
}
