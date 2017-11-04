#include<bits/stdc++.h>
using namespace std;

int main()
{
    char board[64];

    char s[100];

    scanf("%s",&s);

    int index=0;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='1'&& s[i]<='8'){
        index+=((int)s[i]-48);

        }
       else
       { if(s[i]=='/')
            int f=0;
        else
        {
        board[index]=s[i];
        index++;
        }
        }


    }
    for(int i=0;i<64;i++){
        cout<<board[i]<<"\t";
        if((i+1)%8==0)
            cout<<endl;


    }



return 0;
}
