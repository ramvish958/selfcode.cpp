#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class student
{
	private : char name[20];
	public : void input();
		 void output();
};
void student :: input()
{
	cout<<"Enter your full name :";
	cin.getline(name,20);
}
void student :: output()
{
	cout<<"Entered name is :"<<name<<endl;
}
void readfile()
{
	student s;
	ofstream f;
	f.open("student.txt",ios::out|ios::binary);
	s.input();
	f.write((char *)&s,sizeof(s));
	f.close();
}
void displayfile()
{
	student t;
	ifstream f;
	f.open("student.txt :",ios::in|ios::binary);
	t.output();
	f.read((char *)&t,sizeof(t));
	f.close();
}	
int main()
{	student s;
	readfile();
	displayfile();
	return 0;
}
