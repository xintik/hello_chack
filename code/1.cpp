#include<bits/stdc++.h>
using namespace std;
double e = 1e-7;
void root( double x )
{
 double lo = 1;
 double hi = x;
 while ( hi - lo > e)
 {
 	double mid = ( hi + lo )/2;
 	if( mid * mid < x )
 	{
 		lo = mid;
 	}
 	else
 	{
 		hi = mid;
 	}
 }
 cout << lo << endl; 
}
int main()
{
	double x;
	cin >> x;
	root( x );
}
