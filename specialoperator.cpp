#include<iostream>
using namespace std;
int main(){
int a;//integer tai 4 byte
float f;//float 8 byte
double d;//double 8 byte
char ch;//character 1 byte
char name[20];//20 size declare tai 20 byte
int c=sizeof(name);//size operator byte a hiseb kore dey
cout<<c;
int x,y,sum;
sum =(x=20,y=30,sum=x+y);//letf side sub expression right sight full expression ,comma operator eita
cout<<sum;

}
