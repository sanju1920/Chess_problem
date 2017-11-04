// King move in chess using FEN formate

#include<bits/stdc++.h>
using namespace std;
char chess[8][8];

void King(int i,int j)
{
    int row=i-1,col=j-1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i-1;
    col=j;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';
    row=i-1;col=j+1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i;col=j-1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i,col=j+1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i+1,col=j-1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i+1,col=j;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';

    row=i+1,col=j+1;
    if(row<8 && row>=0 && col<8 && col>=0)
        if(chess[row][col]=='-')
            chess[row][col]='M';
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
 if(chess[i][j]=='k' || chess[i][j]=='K')
                King(i,j);


for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
cout<<chess[i][j]<<"\t";
cout<<endl;

}

return 0;
}
