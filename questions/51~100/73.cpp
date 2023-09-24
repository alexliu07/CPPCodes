#include<bits/stdc++.h>
using namespace std;
int main(){
	int fpos,pos,count=0;
    string target,a;
    getline(cin,target);
    getline(cin,a);
    //大转小
    for(int i=0;i<target.length();i++){
        if(target[i] >= 'A' && target[i] <= 'Z'){
            target[i] = target[i] + 32;
        }
    }
    for(int i=0;i<a.length();i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] = a[i] + 32;
        }
    }
    //添加空格
    target = " "+target+" ";
    a = " "+a+" ";
    //查找
    fpos = a.find(target);
    if(fpos < 0 || fpos >= a.length()){
        cout << "-1";
    }else{
        count++;
        pos = fpos + target.length() - 1;
        while(true){
            pos = a.find(target,pos);
            if(pos < 0 || pos >= a.length()){
                break;
            }
            count++;
            pos += target.length() - 1;
        }
        cout << count << " " << fpos;
    }
    return 0;
}