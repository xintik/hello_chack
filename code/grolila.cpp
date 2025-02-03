#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		vector < int > ar(2* (n+1));
		vector < int > br(2* (n+1));
		vector < int > prefixsum( 2 * ( n+1));
       vector < pair < int , int > > pr;
       for( int i=0; i< n; i++)
       {
       	int x , y ;
       	cin >> x >> y ;
       	if(x==y) 
       	{
       		ar[x]=1;
       		br[x]++;
       	}
       	pr.push_back({x,y});
       }
       int sum=0;
       for( int i=0; i< ar.size(); i++)
       {
       	sum=sum+ar[i];
       	prefixsum[i] = sum;
       }

       for ( auto &it : pr)
       {
       	int left= it.first;
       	int right= it.second ;
       	int size = right- left + 1;
       	if(size==1 && br[left]==1) cout<<"1";
       	else if( size == 1 && br[left]>1) cout<<"0";
       	else
       	{
       		int chack=prefixsum[right]-prefixsum[left]+ar[left];
       		if(chack==size) cout<<"0";
       		else cout<< "1";
       	}
       }
       cout<< "\n";


	}
	
	


}