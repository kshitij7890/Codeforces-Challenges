#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int res=1e9;
		for(int i=0;i<=30;i++){
			if(b+i==1)continue;
			int t=i;
			int tmp=a;
			while(tmp){
				tmp/=b+i;
				t++;
			}
			res=min(res,t);
		}
		cout<<res<<'\n';
	}
}