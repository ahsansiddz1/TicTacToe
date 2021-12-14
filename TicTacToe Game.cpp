#include<iostream>
#include<conio.h>
using namespace std;
void display(char[3][3]);
int main(){
char arr[3][3]={
{' ',' ',' '},
{' ',' ',' '},
{' ',' ',' '}};
for (int i=0 ; i<3 ; i++)
 for (int j=0 ; j<3 ; j++)
 {
 display(arr);
 cout<<"Please Enter X or O";
 arr[i][j]=getche();
 system("cls");
 
 }
}
void display(char a[3][3])
{
cout<<"\n\n\n -------------\n";
for (int i=0 ; i<3 ; i++){
 for (int j=0 ; j<3 ; j++)
 cout<<" | "<<a[i][j];
cout<<" |\n -------------\n\n";
}
}
