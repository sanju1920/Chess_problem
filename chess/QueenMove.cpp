// Queen move in chess in FEN formate

#include<bits/stdc++.h>
using namespace std;
char chess[8][8];


void Rook(int i,int j)
{
for(int r=j+1;r<8;r++)
{
    if(chess[i][r]=='-')
        chess[i][r]='M';//mark the place
     else  // in else block you can also mark the kill position
     break;
}
for(int l=j-1;l>=0;l--)
{
    if(chess[i][l]=='-')
        chess[i][l]='M';//mark the place
    else
    break;
}
for(int u=i-1;u>=0;u--)
{
    if(chess[u][j]=='-')
        chess[u][j]='M';//mark the place
    else
    break;
}
for(int b=i+1;b<8;b++)
{
    if(chess[b][j]=='-')
        chess[b][j]='M';//mark the place
    else
    break;
}

}




void Bishops(int i,int j)
{
    int row=i-1,col=j-1;
    while(row>=0 && col>=0)
    {
        if(chess[row][col]=='-')
            chess[row][col]='M';
        else break;
        row--;
        col--;
    }
      row=i-1;col=j+1;
    while(row>=0 && col<8)
    {
        if(chess[row][col]=='-')
            chess[row][col]='M';
        else break;
        row--;
        col++;
    }

    row=i+1;col=j-1;
    while(row<8 && col>=0)
    {
        if(chess[row][col]=='-')
            chess[row][col]='M';
        else break;
        row++;
        col--;
    }

        row=i+1;col=j+1;
        while(row<8 && col<8)
    {
        if(chess[row][col]=='-')
            chess[row][col]='M';
        else break;
        row++;
        col++;
    }
}

int main()
{


for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
    chess[i][j]='-';

string s;
cin>>s;

int row=0,col=0;
for(int i=0;i<s.length();i++)
{


 if(s[i]>='1'&& s[i]<='8'){
        col+=((int)s[i]-48);

        }
       else
       { if(s[i]=='/')
            {
            row++;
            col=0;
            }
        else
        {
        chess[row][col]=s[i];
        col++;
        }
        }
}

for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    if(chess[i][j]=='q' || chess[i][j]=='Q'){
    Bishops(i,j);
    Rook(i,j);
    }

for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
cout<<chess[i][j]<<"\t";
cout<<endl;

}
return 0;

}
