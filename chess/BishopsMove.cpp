// Bishops move in chess using FEN formate
#include<bits/stdc++.h>
using namespace std;
char chess[8][8];

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
    if(chess[i][j]=='b' || chess[i][j]=='B')
    Bishops(i,j);

for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
cout<<chess[i][j]<<"\t";
cout<<endl;

}
return 0;

}
