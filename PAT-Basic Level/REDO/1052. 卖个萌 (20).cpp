#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	string s;
	vector<vector<string> > v;
	for(int i=0;i<3;i++){
		getline(cin,s);
		vector<string> row;
		int j=0,k=0;
		while(j<s.length()){
			if(s[j]=='['){
				while(k++<s.length()){
					if(s[k]==']'){
						row.push_back(s.substr(j+1,k-j-1));
						break;
					}
				}
			}
			j++;
		}
		v.push_back(row);
	}
	int p[8];
	int k;
	cin>>k;
	while(k--){
		for(int i=0;i<5;i++) cin>>p[i];
		if(p[0]>v[0].size() || p[4]>v[0].size() || p[1]>v[1].size() || p[3]>v[1].size() || p[2]>v[2].size() || p[0]<1 || p[1]<1 || p[2]<1 || p[3]<1 || p[4]<1){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		cout<<v[0][p[0]-1]<<"("<<v[1][p[1]-1]<<v[2][p[2]-1]<<v[1][p[3]-1]<<")"<<v[0][p[4]-1]<<endl;
	}
	return 0;
}
