#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,sum=0,k=0;
		cin>>n>>m;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
        }
		int ans = sum-m;
		ans=max(ans,k);
		cout<<ans<<endl;
	}
}