#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k,l,d,badStuA[2000][2]={0},badStuB[2000][2]={0},lineBad[1000]={0},columnBad[1000]={0},badCountLine[1000][2]={0},badCountColumn[1000][2]={0},linePos[1000]={0},columnPos[1000]={0};
    cin >> m >> n >> k >> l >> d;
    for(int i=0;i<d;i++){
        cin >> badStuA[i][0] >> badStuA[i][1] >> badStuB[i][0] >> badStuB[i][1];
    }
    //寻找讲话数
    for(int i=0;i<d;i++){
        //行
        if(badStuA[i][1] == badStuB[i][1]){
            lineBad[(badStuA[i][0]+badStuB[i][0])/2-1]++;
        }
        //列
        if(badStuA[i][0] == badStuB[i][0]){
            columnBad[(badStuA[i][1]+badStuB[i][1])/2-1]++;
        }
    }
    //整理讲话数
    //行
    for(int i=0;i<m;i++){
        badCountLine[i][0] = lineBad[i];
        badCountLine[i][1] = i;
    }
    //列
    for(int i=0;i<n;i++){
        badCountColumn[i][0] = columnBad[i];
        badCountColumn[i][1] = i;
    }
    //排序
    //行
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(badCountLine[i][0] > badCountLine[j][0]){
                swap(badCountLine[i],badCountLine[j]);
            }
        }
    }
    //列
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(badCountColumn[i][0] > badCountColumn[j][0]){
                swap(badCountColumn[i],badCountColumn[j]);
            }
        }
    }
    //取出
    //行
    for(int i=0;i<k;i++){
        linePos[i] = badCountLine[i][1]+1;
    }
    //列
    for(int i=0;i<l;i++){
        columnPos[i] = badCountColumn[i][1]+1;
    }
    //排序
    sort(linePos,linePos+k);
    sort(columnPos,columnPos+l);
    //输出
    for(int i=0;i<k;i++){
        cout << linePos[i] << " ";
    }
    cout << endl;
    for(int i=0;i<l;i++){
        cout << columnPos[i] << " ";
    }
    return 0;
}