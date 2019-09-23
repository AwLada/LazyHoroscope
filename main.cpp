//Authors: Adrian Lada
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int lucky;
  //get user input
cout<<"What is your first name?"<<endl;
cin>>first;
cout<<"What is your last name?"<<endl;
cin>>last;

lucky = first.length();
  //tell fortune
cout<<"Welcome, "<<first.at(0)<<"."<<last.at(0)<<"., here is your fortune..."<<endl;
cout<<"your lucky number is "<<lucky<<endl;
  return 0;
}
