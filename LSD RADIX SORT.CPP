#include<iostream.h>
#include<conio.h>
#include<string.h>
char arr[5][5],temp[5][5];
void lsd();
int fg;
void main()
{       clrscr();
	fg=0;
	for(int as=0;as<5;as++)
	{
	for(int vb=0;vb<5;vb++)
	temp[as][vb]=NULL;
	}
	cout<<"ENTER THE ARRAY\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	lsd();
	cout<<"THE SORTED LIST IS:\n";
	for(int j=0;j<5;j++)
	{
		for(int k=0;k<5;k++)
		cout<<arr[j][k];
		cout<<"\n";
	}
	getch();
}
void lsd()
{
	int count[26];
	char temp[5][5];
	for(int t=4;t>=0;--t)
	{
	for(int i=0;i<26;++i)
	count[i]=0;
	for(int j=0;j<5;++j)
	++count[arr[j][t]-96];
	for(int k=1;k<26;++k)
	{
	count[k]+=count[k-1];
	}
	for(int l=0;l<5;++l)
	{
	int y=count[arr[l][t]-97];
	for(int d=0;d<5;d++)
	{
	temp[y][d]=arr[l][d];
	}
	count[arr[l][t]-97]++;
	}
	for(int m=0;m<5;m++)
	{
	for(int v=0;v<5;v++)
	arr[m][v]=temp[m][v];
	}
}
}
