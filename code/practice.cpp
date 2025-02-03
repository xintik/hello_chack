#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &ar,int target)
{
	int left=0;
	int right=ar.size()-1;
	while(right-left>1)
	{
		int mid=(left+right)/2;
		if(ar[left]<ar[mid])// coto thaka boro hoccah
		{
            if(target>= ar[left] && target<=ar[mid])
            {
            	right=mid;
            }
            else 
            left=mid;
		}
		else// cota thaka boro hocca nah chack right part
		{
           if(target>=ar[mid] && target<=ar[right])
           {
           	left=mid;//skip left part;
           }
           else
           {
           	right=mid;
           }
		}
	}
	if(ar[left]==target) return left;
	else if(ar[right]==target) return right;
	else return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int> ar;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		ar.push_back(x);
	}
	int target;
	cin>>target;
	cout<<solve(ar,target)<<endl;
}
