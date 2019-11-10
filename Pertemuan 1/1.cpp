#include <iostream>
using namespace std;
char nama[15];
char usia[5];
char jenis_kelamin[15];
char hobby[20];
int main(){
cout<<"Masukan Nama :";
cin>>nama;
cout<<"Masukan Jenis Kelamin :";
cin>>jenis_kelamin;
cout<<"Masukan Usia :";
cin>>usia;
cout<<"Masukan Hobby :";
cin>>hobby;

cout<<"++++++++++++++++++BIODATA KAMU++++++++++++++++++++" <<endl;

cout<<"Nama   :"<<nama <<endl;
cout<<"Usia   :"<<usia <<endl;
cout<<"Jenis Kelamin   :" <<jenis_kelamin<<endl;
cout<<"Hobby :"<<hobby <<endl;
return 0;
}

