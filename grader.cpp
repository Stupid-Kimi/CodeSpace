#include"YuukiAsuna.h"
#include<bits/stdc++.h>
#include"unistd.h"

static int U[5005],V[5005],n,m,Q;

static int cntQ;

int Query(std::vector<int>S){
	if(S.empty()){
		std::fprintf(stdout,"Query set is empty!\n");
		std::exit(0);
	}
	++cntQ;
	if(cntQ>Q){
		std::fprintf(stdout,"Too many queries!\n");
		std::exit(0);
	}
	static bool vis[3005];
	for(int i=0;i<(int)S.size();++i){
		if(S[i]<1||S[i]>n){
			std::fprintf(stdout,"Invalid element in the set!\n");
			std::exit(0);
		}
		if(vis[S[i]]){
			std::fprintf(stdout,"Duplicate elements in the set!\n");
			std::exit(0);
		}
		vis[S[i]]=1;
	}
	int res=0;
	for(int i=1;i<=m;++i)res+=vis[U[i]]&&vis[V[i]];
	for(int i=0;i<(int)S.size();++i)vis[S[i]]=0;
	return res;
}
int main(){
	std::fscanf(stdin,"%d%d%d",&n,&m,&Q);
	std::set<std::pair<int,int> >st;
	for(int i=1;i<=m;++i){
		std::fscanf(stdin,"%d%d",U+i,V+i);
		st.insert(std::make_pair(std::min(U[i],V[i]),std::max(U[i],V[i])));
	}
	std::vector<std::pair<int,int> >ans=Asuna(n,Q);
	if((int)ans.size()!=m){
		std::fprintf(stdout,"Wrong answer!\n");
		std::exit(0);
	}
	for(int i=0;i<(int)ans.size();++i){
		int u=ans[i].first,v=ans[i].second;
		if(u>v)std::swap(u,v);
		std::pair<int,int>p=std::make_pair(u,v);
		if(st.count(p))st.erase(p);
		else{
			std::fprintf(stdout,"Wrong answer!\n");
			std::exit(0);
		}
	}
	if(st.size()){
		std::fprintf(stdout,"Wrong answer!\n");
		std::exit(0);
	}
	std::fprintf(stdout,"%d\n",cntQ);
	return 0;
}
