/** BiSmIlLaHiR rAhMaNiR rAhIm **\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int num,f,abc;
char a1='1',b1='2',c1='3',d1='4',e1='5',f1='6',g1='7',h1='8',i1='9',c;
class pl2;
class pl1
{
	public:
	string pl1name;
	int pl1point=0;
	friend void show(pl1& a,pl2& b);
	void valset(pl1& x,pl2& y);
};
class pl2
{
	public:
	string pl2name;
	int pl2point=0;
	friend void show(pl1& a,pl2& b);
	void valset(pl1& x,pl2& y);
};
void valset(pl1& x,pl2& y)
{
		if(num==1){
            if(f==1){
                x.pl1point+=2;a1='X';}
            else{
                y.pl2point+=2;a1='O';}
        }
		else if(num==2){
            if(f==1){
                x.pl1point+=9;b1='X';}
            else{
                y.pl2point+=9;b1='O';}
        }
		else if(num==3){
            if(f==1){
                x.pl1point+=4;c1='X';}
            else{
                y.pl2point+=4;c1='O';}
        }
		else if(num==4){
            if(f==1){
                x.pl1point+=7;d1='X';}
            else{
                y.pl2point+=7;d1='O';}
        }
		else if(num==5){
            if(f==1){
                x.pl1point+=5;e1='X';}
            else{
                y.pl2point+=5;e1='O';}
        }
		else if(num==6){
            if(f==1){
                x.pl1point+=3;f1='X';}
            else{
                y.pl2point+=3;f1='O';}
        }
		else if(num==7){
            if(f==1){
                x.pl1point+=6;g1='X';}
            else{
                y.pl2point+=6;g1='O';}
        }
		else if(num==8){
            if(f==1){
                x.pl1point+=1;h1='X';}
            else{
                y.pl2point+=1;h1='O';}
        }
		else if(num==9){
            if(f==1){
                x.pl1point+=8;i1='X';}
            else{
                y.pl2point+=8;i1='O';}
        }
}
void show(pl1& a,pl2& b)
{
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  || %c   \n",a1,b1,c1);
	printf("     ||     ||     \n");
	printf("===================\n");
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  || %c   \n",d1,e1,f1);
	printf("     ||     ||     \n");
	printf("===================\n");
	printf("     ||     ||     \n");
	printf("  %c  ||  %c  || %c   \n",g1,h1,i1);
	printf("     ||     ||     \n");
}
main()
{
	int ans1=0,ans2=0,i=0;
	pl1 x1;pl2 y1;
	cout<<"HI!Welcome to tic tac toe game...\n\n";
	cout<<"Enter first player name:\n";
	cin>>x1.pl1name;
	cout<<"Enter second player name:\n";
	cin>>y1.pl2name;
	cout<<"Here is the format of tic tac toe board.\n";
	show(x1,y1);
	cout<<"NOTE : 1,2,3,4,5,6,7,8,9 denotes the position of blank place\n";
	cout<<"Ruels: 1) The first player is known as X and the second is O\n";
	cout<<"Ruels: 2)in your tern you may choose your convenient blank place.(all blank places are denotes as 1-9)\n\n";
	cout<<"So lets start.........\n";

	while(i<9)
	{
		if(i%2==0){
			cout<<endl<<x1.pl1name<<" your turn now\n";
			cin>>abc;
			num=abc;
			f=1;
			valset(x1,y1);
		}
		else{
			cout<<endl<<y1.pl2name<<" your turn\n";
			cin>>abc;
			num=abc;
			f=2;
			valset(x1,y1);
		}
		show(x1,y1);
		if(x1.pl1point==15||y1.pl2point==15)
		break;
		i++;
	}
	if(x1.pl1point==15)
		cout<<"\nCongratulation "<<x1.pl1name<<" you win\n";
	else if(y1.pl2point==15)
		cout<<"\nCongratulation "<<y1.pl2name<<" you win\n";
	else
		cout<<"\nUPS draw!!\n";
}
