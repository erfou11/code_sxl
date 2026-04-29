#include<vector>
#include<iostream>
using namespace std;
int main(){
int row=0,col=0;
cin>>row>>col;
vector<vector<int>>map(row,vector<int>(col,0));
//vector<int>arr(row,0)
for(int i=0;i<row;i++){
    for(int j= 0;j<col;j++){
        cin>>map[i][j];
    }
}
for(int i=0;i<row;i++){
    int maxx=map[i][0];
    for(int j= 1;j<col;j++){
       if(map[i][j]>maxx)maxx=map[i][j];
    }
    cout<<maxx<<endl;
}




    return 0;
}