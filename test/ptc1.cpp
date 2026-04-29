#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main(){

int row,col,sum=0,total,avg=0;
cin>>row>>col;
vector<vector<int>>grid(row+1,vector<int>(col+1,0));
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        int tmp;
        cin>>tmp;
        grid[i][j]=tmp;
        sum+=tmp;

    }
}
total=row*col;
avg=sum/total;
int n=0;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
    if(grid[i][j]>avg)n++;
}

}
cout<<n;

    return 0;
}