//rook move in chess

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
{
    if(chess[i][j]=='r' || chess[i][j]=='R')
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
