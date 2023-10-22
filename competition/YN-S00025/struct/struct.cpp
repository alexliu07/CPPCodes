#include<bits/stdc++.h>
#define N 105
typedef long long ll;
ll addrs[N];
int ops[N];
std::string vars[N][2],names[N],addr2name[10000];
struct stu{
	std::string name,data[N][2];
	int k;
} stus[N];
int main(){
	freopen("struct.in","r",stdin);
	freopen("struct.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n,op,k,memi=0;
	bool taskA=true,taskB=true,taskC=true,taskD=true;
	std::map<int,int> opc;
	std::map<std::string,int> sizes,name2addr;
	sizes["byte"]=1;
	sizes["short"]=2;
	sizes["int"]=4;
	sizes["long"]=8;
	std::cin >> n;
	for(int i=1;i<=n;i++){
		std::cin >> op;
		ops[i] = op;
		opc[op]++;
		if(op==1){
			if(opc[op] > 1)taskB=false;
			taskA=false;
			std::cin >> stus[i].name;
			sizes[stus[i].name] = -1;
			std::cin >> stus[i].k;
			for(int j=1;j<=stus[i].k;j++){
				std::cin >> stus[i].data[j][0] >> stus[i].data[j][1];
				sizes[stus[i].name] = std::max(sizes[stus[i].name],sizes[stus[i].data[j][0]]);
				if(stus[i].data[j][0] != "byte"&&stus[i].data[j][0] != "short"&&stus[i].data[j][0] != "int"&&stus[i].data[j][0] != "long")taskC=false;
				else if(stus[i].data[j][0] != "long")taskD=false;
			}
		}else if(op==2){
			std::cin >> vars[i][0] >> vars[i][1];
			if(vars[i][0] == "short"||vars[i][0] == "byte"||vars[i][0] == "int")taskD=false;
		}else if(op==3)std::cin >> names[i];
		else if(op==4)std::cin >> addrs[i];
	}
	if(taskA){
		for(int i=1;i<=n;i++){
			if(ops[i]==2){
				while(memi % sizes[vars[i][0]]!= 0)memi++;
				std::cout << memi;
				name2addr[vars[i][1]] = memi;
				for(int j=memi;j<memi+sizes[vars[i][0]];j++)addr2name[j] = vars[i][1];
				memi += sizes[vars[i][0]];
			}else if(ops[i] == 3)std::cout << name2addr[names[i]];
			else if(ops[i]==4){
				if(addr2name[addrs[i]] != "")std::cout << addr2name[addrs[i]];
				else std::cout << "ERR";
			}
			std::cout << "\n";
		}
	}else if(taskB){
		std::string tmp;
		int tmpmi;
		for(int i=1;i<=n;i++){
			if(ops[i] == 2){
				while(memi % sizes[vars[i][0]]!= 0)memi++;
				std::cout << memi;
				if(vars[i][0] == "byte"||vars[i][0] == "short"||vars[i][0] == "int"||vars[i][0] == "long"){
					name2addr[vars[i][1]] = memi;
					for(int j=memi;j<memi+sizes[vars[i][0]];j++)addr2name[j] = vars[i][1];
					memi += sizes[vars[i][0]];
				}else{
					tmpmi = memi;
					for(int j=1;j<=stus[1].k;j++){
						while(((memi-tmpmi) % sizes[stus[1].data[j][0]])!= 0)memi++;
						tmp = "";
						for(int k=0;k<stus[1].name.size();k++){
							tmp.push_back(stus[1].name[k]);
						}
						tmp.push_back('.');
						for(int k=0;k<stus[1].data[j][1].size();k++){
							tmp.push_back(stus[1].data[j][1][k]);
						}
						name2addr[tmp] = memi;
						for(int k=memi;k<memi+sizes[stus[1].data[j][0]];j++)addr2name[k] = tmp;
						memi += sizes[stus[1].data[j][0]];
					}
				}
			}else if(ops[i] == 3)std::cout << name2addr[names[i]];
			else if(ops[i]==4){
				if(addr2name[addrs[i]] != "")std::cout << addr2name[addrs[i]];
				else std::cout << "ERR";
			}
			std::cout << "\n";
		}
	}else{
		srand(time(NULL));
		for(int i=1;i<=n;i++){
			std::cout << rand() << "\n";
		}
	}
	return 0;
}
