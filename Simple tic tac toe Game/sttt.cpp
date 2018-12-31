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
char a1='1',b1='2',c1='3',d1='4',e1='5',f1='6',g1='7',h1='8',i1='9';
class pl2;
class pl1
{
	public:
	string pl1name;
	int pl1point=0;
	friend void show(pl1& a,pl2& b);
};
class pl2
{
	public:
	string pl2name;
	int pl2point=0;
	friend void show(pl1& a,pl2& b);
};
void valset(int abs,char x)
{
		if(abs==1) a1=x;
		else if(abs==2) b1=x;
		else if(abs==3) c1=x;
		else if(abs==4) d1=x;
		else if(abs==5) e1=x;
		else if(abs==6) f1=x;
		else if(abs==7) g1=x;
		else if(abs==8) h1=x;
		else if(abs==9) i1=x;
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
	int abc,ans1=0,ans2=0,i=0;
	pl1 x;pl2 y;
	cout<<"HI!Welcome to tic tac toe game...\n\n";
	cout<<"Enter first player name:\n";
	cin>>x.pl1name;
	cout<<"Enter second player name:\n";
	cin>>y.pl2name;
	cout<<"Here is the format of tic tac toe board.\n";
	show(x,y);
	cout<<"NOTE : 1,2,3,4,5,6,7,8,9 denotes the position of blank place\n";
	cout<<"Ruels: 1) The first player is known as X and the second is O\n";
	cout<<"Ruels: 2)in your tern you may choose your convenient blank place.(all blank places are denotes as 1-9)\n\n";
	cout<<"So lets start.........\n";

	while(i<9)
	{
		if(i%2==0){
			cout<<endl<<x.pl1name<<" your turn now\n";
			cin>>abc;
			valset(abc,'X');
			x.pl1point+=abc;
		}
		else{
			cout<<endl<<y.pl2name<<" your turn\n";
			cin>>abc;
			valset(abc,'O');
			y.pl2point+=abc;
		}
		show(x,y);
		if(x.pl1point==15||y.pl2point==15)
		break;
		i++;
	}
	if(x.pl1point==15)
		cout<<"\nCongratulation "<<x.pl1name<<" you win\n";
	else if(y.pl2point==15)
		cout<<"\nCongratulation "<<y.pl2name<<" you win\n";
	else
		cout<<"\nUPS draw!!\n";
}
