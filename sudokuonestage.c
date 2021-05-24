#include<stdio.h>
void details()
{
	char name[25];
	printf("Enter your NAME:");
	gets(name);
	printf("HELLO %s ! HAPPY TO SEE YOU HERE TO FACE THE SUDOKU CHALLENGE..!\n",name);
	printf("\n");
}
void title()
{
	printf("           _______            ______     _______                    \n");
	printf("          ||        ||    || ||     ||  ||     || ||    || ||    || \n");
	printf("          ||        ||    || ||      || ||     || ||  ||   ||    || \n");
	printf("          ||______  ||    || ||      || ||     || || ||    ||    || \n");
	printf("                 || ||    || ||      || ||     || |||      ||    || \n");
	printf("                 || ||    || ||      || ||     || || ||    ||    || \n");
	printf("          _______|| ||____|| ||_____||  ||_____|| ||  ||__ ||____|| \n");
	printf("\n");
}
void main()
{
	title();
	details();
int i,j,m,n,s[10][10],x,y,z;
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
s[i][j]=0;
}
}
s[1][3]=4;
s[1][5]=8;
s[1][7]=3;
s[2][6]=3;
s[2][8]=4;
s[2][9]=2;
s[3][1]=8;
s[3][4]=4;
s[3][6]=5;
s[3][7]=9;
s[3][9]=7;
s[4][1]=3;
s[4][3]=2;
s[4][5]=7;
s[4][7]=5;
s[4][9]=8;
s[5][2]=5;
s[5][8]=7;
s[6][1]=6;
s[6][3]=8;
s[6][5]=9;
s[6][7]=2;
s[6][9]=1;
s[7][1]=4;
s[7][3]=6;
s[7][4]=2;
s[7][6]=7;
s[7][9]=9;
s[8][1]=5;
s[8][2]=2;
s[8][4]=9;
s[9][3]=7;
s[9][5]=1;
s[9][7]=4;
printf("your sudoku puzzle is:\n");
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}
int l;
for(l=47;l>0;l--)
{
printf("enter the row and column where you want to enter the number…\n");
scanf("%d%d",&m,&n);
int p,q;
if(m==1||m==4||m==7)
{
    p=m;
}
if(m==2||m==5||m==8)
{
    p=m-1;
}
if(m==3||m==6||m==9)
{
    p=m-2;
}
if(n==1||n==4||n==7)
{
    q=n;
}
if(n==2||n==5||n==8)
{
    q=n-1;
}
if(n==3||n==6||n==9)
{
    q=n-2;
}
printf("enter the number…\n");
scanf("%d",&x);
int a=0,b=0,c=0;
for(i=1;i<=9;i++)
{
if(s[m][i]!=x)
a++;
}
if(a==9)
{
for(j=1;j<=9;j++)
{
if(s[j][n]!=x)
b++;
}
}
if(b==9)
{
for(i=p,y=1;y<=3;i++,y++)
{
for(j=q,z=1;z<=3;j++,z++)
{
if(s[i][j]!=x)
c++;
}
}
}
if(c==9)
{
s[m][n]=x;
}
else
{
printf("%d cannot be placed in %dx%d position\n",x,m,n);
l++;
}
printf("the updated puzzle is…\n");
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
printf("%d\t",s[i][j]);
}
printf("\n");
}
}
printf(" you have completed the puzzle successfully \n");
}
