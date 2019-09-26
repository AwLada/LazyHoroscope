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
//--------------------------------------------------------------------------------------
if (toupper (first.at(0)) == 'A' || toupper (first.at(0)) == 'E' || toupper (first.at(0)) == 'I' || toupper (first.at(0)) == 'O' || (first.at(0)) == 'U' )

// (first.at(0) == 'A' || first.at(0) == 'E' || first.at(0) == 'I' || first.at(0) == 'O' || first.at(0) == 'U' )
 {         
         
        cout<<"you are destined to be famous!"<<endl;

}
else
{
        cout<<"you should keep a low profile."<<endl;
}

if (toupper (last.at(last.length()-1)) == 'E' || toupper (last.at(last.length()-1)) == 'A' || toupper (last.at(last.length()-1)) == 'U' || toupper (last.at(last.length()-1)) == 'I' || toupper (last.at(last.length()-1)) == 'O')

/* (toupper (last.at(last.length())) == 'A' || toupper (last.at(strlen(last)) == 'E' || toupper (last.at(strlen(last)) == 'U' || toupper (last.at(strlen(last)) == 'O' || toupper (last.at(strlen(last)) == 'I')
*/
{
        cout<<"you have already met your true love."<<endl;
}

cout<<"have a good day!"<<endl;
return 0;
}
