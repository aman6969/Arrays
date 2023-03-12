#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


void solve()
{
	ll n;
	cin>>n;
	map<ll, ll>freq;
	for(int i = 0; i<n; i++)
	    {
	        ll input;
	        cin>>input;
	        freq[input]++;
	    }
	 for(auto i: freq)
	    {
	        if(i.second%2 == 1)
	       {
	           cout<<"NO"<<endl;
	           return;
	           
	       } 
	    }
	    cout<<"YES"<<endl;
	    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
