/*
Create a function that returns true if the last character
of a given string is an alphabetical character and is not
a part of a word, and false otherwise.
Note: "word" is a group of characters separated by space.

Examples:
check_if_last_char_is_a_letter("apple pie") ➞ false
check_if_last_char_is_a_letter("apple pi e") ➞ true
check_if_last_char_is_a_letter("apple pi e ") ➞ false
check_if_last_char_is_a_letter("") ➞ false 
*/
#include<stdio.h>
#include<string>
using namespace std;
bool check_if_last_char_is_a_letter(string txt){
	int i=0,j=0,k=0;
	char a[100];
	for(i=0;txt[i]!='\0';i++)
	{
		if(txt[i]==' ')
		{
			a[j]=txt[i];
			j++;
		}
	}
	if(txt[i-1]==' ')
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	string txt;
	getline(cin,txt);
	if(check_if_last_char_is_a_letter(txt))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
