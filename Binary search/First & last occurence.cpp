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

	int ans=0;

	while(start <= end)
	{
		mid = start + (end-start)/2;

		if(a[mid] == x)
		{
			ans = mid;
			//end = mid - 1;    // first occurence
			start = mid + 1;  // Last occurence
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


	cout<<ans;

}
