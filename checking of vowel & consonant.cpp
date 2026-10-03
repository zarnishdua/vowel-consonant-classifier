#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character :";
	cin>>ch;
	if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='O' || ch=='I' || ch=='U' )
      cout<<"The character is a vowel ";
      else if(( ch>='a'&& ch<='z' )|| (ch>='A' && ch<='Z'))
      cout<<"The character is a consonant :";
      else
      cout<<"Invalid input ";
      return 0;
}
