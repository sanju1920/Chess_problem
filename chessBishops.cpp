// Bishops move in chess using FEN formate
#include<bits/stdc++.h>
using namespace std;
char chess[8][8];
int f=0;
char edge(int p){
switch(p)
{
case  0:return 'a';break;
case 1:return 'b';break;
case 2:return 'c';break;
case 3:return 'd';break;
case 4:return 'e';break;
case 5:return 'f';break;
case 6:return 'g';break;
case 7:return 'h';break;

}
}


void Display(int i,int j,char M)
{
    for(int k=0;k<8;k++)
        for(int l=0;l<8;l++)
    {
        if(chess[k][l]==M)
        {
            if(f==0){
            printf("%c%d%c%d",edge(j),8-i,edge(l),8-k);
            f=1;
            }
            else
            printf(", %c%d%c%d",edge(j),8-i,edge(l),8-k);
        }
    }

}


void Bishops(int i,int j,char M,char turn)
{
    int row=i-1,col=j-1;
    while(row>=0 && col>=0)
    {
        if(chess[row][col]=='-')
            chess[row][col]=M;
        else {
                if(turn=='w'){
                if(islower(chess[row][col]))
                    chess[row][col]=M;
                }
                else
                {
                    if(turn=='b')
                        if(isupper(chess[row][col]))
                            chess[row][col]=M;
                }

            break;
        }
        row--;
        col--;
    }
      row=i-1;col=j+1;
    while(row>=0 && col<8)
    {
        if(chess[row][col]=='-')
            chess[row][col]=M;
        else {
                if(turn=='w'){
                if(islower(chess[row][col]))
                    chess[row][col]=M;
                }
                else
                {
                    if(turn=='b')
                        if(isupper(chess[row][col]))
                            chess[row][col]=M;
                }

            break;
        }
        row--;
        col++;
    }

    row=i+1;col=j-1;
    while(row<8 && col>=0)
    {
        if(chess[row][col]=='-')
            chess[row][col]=M;
        else {
                if(turn=='w'){
                if(islower(chess[row][col]))
                    chess[row][col]=M;
                }
                else
                {
                    if(turn=='b')
                        if(isupper(chess[row][col]))
                            chess[row][col]=M;
                }

            break;
        }
        row++;
        col--;
    }

        row=i+1;col=j+1;
        while(row<8 && col<8)
    {
        if(chess[row][col]=='-')
            chess[row][col]=M;
        else {
                if(turn=='w'){
                if(islower(chess[row][col]))
                    chess[row][col]=M;
                }
                else
                {
                    if(turn=='b')
                        if(isupper(chess[row][col]))
                            chess[row][col]=M;
                }

            break;
        }
        row++;
        col++;
    }
    Display(i,j,M);
}

int main()
{


for(int i=0;i<8;i++)
for(int j=0;j<8;j++)
    chess[i][j]='-';

char s[30];
scanf("%[^\n]s",s);

int row=0,col=0;
for(int i=0;i<strlen(s)-2;i++)
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
{
    for(int j=0;j<8;j++)
        cout<<chess[i][j];
    cout<<endl;
}

cout<<"turn -> "<<s[strlen(s)-1]<<endl;

cout<<"[";
int c=0;
for(int i=0;i<8;i++)
    for(int j=0;j<8;j++){
            if(s[strlen(s)-1]=='w'){
    if(chess[i][j]=='B'){
    c++;
    char M=(char)c;
        Bishops(i,j,M,'w');
        }
    }
    else
    {
      if(chess[i][j]=='b'){
    c++;
    char M=(char)c;
        Bishops(i,j,M,'b');
        }
    }
    }

cout<<"]"<<endl<<endl;

for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
        cout<<chess[i][j];
    cout<<endl;
}

return 0;

}
