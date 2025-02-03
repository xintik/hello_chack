#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector < int > vec1={1,3,5};
  vector < int > vec2={2,4,8};
  vector < int > vec;
  int i = 0, j = 0;
  while( i < vec1.size() && j < vec2.size())
  {
  	if(vec1[i] < vec2[j])
  	{
  		vec.push_back(vec1[i]);
  		i++;
  	}
  	else
  	{
  		vec.push_back(vec2[j]);
  		j++;
  	}
  }
  for( ; i< vec1.size() ; i++)
  {
  	vec.push_back(vec1[i]);
  }

  for( ; j< vec2.size() ; j++)
  {
  	vec.push_back(vec2[j]);
  }
  for( auto &it: vec)
  {
  	cout << it <<" ";
  }
  cout << endl;
  if(vec.size()%2==0)
  {
  	cout << (double)(vec[vec.size()/2] +vec[vec.size()/2-1])/2<< endl;
  }
  else
  {
  	cout << (double)vec[vec.size()/2 ] << endl;
  }
}