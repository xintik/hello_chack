#include<bits/stdc++.h>
using namespace std;
int lower_bound( vector < int > &v , int element )
{
  int lo = 0;
  int hi = v.size()-1;
  int mid;
  while(hi-lo>1)
  {
  	mid = ( hi + lo )/2;
    if(v[mid] < element) // element layes on the right side;
    {
     lo= mid + 1;
    }
    else
    {
    	hi = mid;
    }
  }

  if( v[lo] >= element ) return lo;
  else if ( v[hi] >= element ) return hi;
  else return -1;
}
int main()
{
	int n;
	cin >> n;
	vector < int > vec;
	for(int i= 0; i< n ; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);

	}
	int element ;
	cin >> element;
	cout << lower_bound(vec , element ) << endl;
	return 0;
}