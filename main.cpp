#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string game="afgabwcmbdlgwlefecdm",no="12345678901234567890", s=no,comp="++++++++++++++++++++";
    int j=0,i=0,k=0,no1,no2,p=0;
    cout<<"welcome to the memory game"<<endl;
    while(true){
        if(j%2==0){
            cout<<"it's your turn"<<endl;
            cout<<"choose 2 numbers from (1:20)"<<endl;
            cout<<no<<endl;
            cin>>no1>>no2;
            while(no1==no2||no1<1||no2<1||no1>20||no2>20||s[no1-1]=='*'||s[no2-1]=='*'||game[no1-1]=='*'||game[no2-1]=='*'){
                cout<<"choose another 2 numbers"<<endl;
                cin>>no1>>no2;
            }
            comp[no1-1]=game[no1-1];
            comp[no2-1]=game[no2-1];
            if(game[no1-1]==game[no2-1]&&game[no1-1]!='*'&&game[no2-1]!='*'){
                i=i+1;
                s[no1-1]=game[no1-1];
                s[no2-1]=game[no2-1];
                cout<<s<<endl;
                s[no1-1]='*';
                s[no2-1]='*';
                game[no1-1]='*';
                game[no2-1]='*';
                no=s;
                cout<<s<<endl;
            }
            else{
                s[no1-1]=game[no1-1];
                s[no2-1]=game[no2-1];
                cout<<s<<endl;
                s=no;

            }
            j++;

        }
        else{
            cout<<"wait for your turn"<<endl;
            no1=rand()%20;
            comp[no1]=game[no1];
            for( p=0;p<20;p++){
                if(game[no1]==comp[p]&&no1!=p&&(game[no1]!='*'||s[no1]!='*')){
                    no2=p;
                    comp[no2]=game[no2];
                    cout<<(no1+1)<<endl;
                    cout<<(no2+1)<<endl;
                    s[no1]=game[no1];
                    s[no2]=game[no2];
                    cout<<s<<endl;
                    s[no1]='*';
                    s[no2]='*';
                    game[no1]='*';
                    game[no2]='*';
                    cout<<s<<endl;
                    no=s;
                    k=k+1;
                    break;
                }
                if(p==19&&game[no1]!=comp[19]&&(game[no1]=='*'||s[no1]=='*')){
                    no2=rand()%20;
                    while(no2==no1){
                        no=rand()%20;
                    }
                    cout<<(no1+1)<<endl;
                    cout<<(no2+1)<<endl;
                    s[no1]=game[no1];
                    s[no2]=game[no2];
                    cout<<s<<endl;
                    s=no;
                    cout<<s<<endl;
                }
            }






            j++;

        }
        if(s=="********************"||game=="********************"){
            if(k>i){

                cout<<"your score is : "<<i<<endl;
                cout<<"the computer scored : "<<k<<endl;
                cout<<"you lose"<<endl;
                cout<<"game over"<<endl;
                break;
            }
            else if(i>k){
                cout<<"your score is : "<<i<<endl;
                cout<<"the computer scored : "<<k<<endl;
                cout<<"you win"<<endl;
                break;
            }
            else{
                cout<<"your score is : "<<i<<endl;
                cout<<"the computer scored : "<<k<<endl;
                cout<<"it's a draw"<<endl;
                break;
            }
        }

    }















    return 0;
}
