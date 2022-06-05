#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> a(n);

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	int x;
	cin>>x;

	int start = 0;
	int end = n-1;
	int mid = 0;

	while(start <= end)
	{
		mid = (start+end)/2;

		if(a[mid] == x)
		{
			cout<<mid;
			break;
		}
		else if(a[mid] > x)
		{
			end = mid-1;
		}
		else
		{
			start = mid+1;
		}
	}

}
