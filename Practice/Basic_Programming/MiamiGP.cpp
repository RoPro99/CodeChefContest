#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	int t;
	cin>>t;
	while(t--){
	cin>>x>>y;
	if(1.07*x>=y){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}
return 0;
}