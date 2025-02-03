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
int upper_bound( vector < int > &v , int element )
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
	int ans = lower_bound( vec , element );
  cout<<ans << " " << ( ans != -1 ? vec[ans] : -1)<< endl;
  int up = upper_bound( vec , element );
  cout << up << " " << ( up != -1 ? vec[up]: -1) << endl;
	return 0;
}