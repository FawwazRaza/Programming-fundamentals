#include<iostream>
#include <string>
using namespace std;
/*
int length(string str)
{
 int i;
 for (i = 0; str[i] != '\0'; i++);
 return i;
}*/
/*int sum(string a, string b)
{
 string sum = a + b;

 return sum;
}*/
/*
* string concatinate(string a, string b)
{
 string sum = a + b;
 return sum;
}int main()
{
 string str1, str2;
 cout << "Enter string 1: ";
 getline(cin, str1);
 cout << "Enter string 2 ";
 getline(cin, str2);
 cout << "sum of Strings is : " << concatinate(str1, str2);

}
*/
/*
* string push(string str1, string str)
{
 str = str1 + str;
 return str;
}
int main()
{
 string str1 = "he is a very good man", str;
 cout << "Enter string: ";
 getline(cin, str);
 cout << "push back func of String is : " << push(str1, str);
 }
*/
//code to clear string without using clear function
/*char remove(string str)
{
 int i=0;
 while (str[i] != '\0')
 {
 ++i;
 str[0] = str[i - 1];
 }

 return str[0];
}
int main()
{
 //iterator end();
 string str = "he is a very good man";
 cout << "the last character is : " << str;
 return 0;
}
*/
/*
* string swap(string str1, string str2, string str3)
{
 str3 = str1;
 str1 = str2;
 str2 = str3;
 return str1, str2;
}
int main()
{
 //void swap(string& str1);
 string str1 = "allah is with us", str2 = "beleive in yourself", str3;

 cout << "the first string is : " << str2 << endl;
 cout << "the second string is : " << str1;
 return 0;
}
*/
/*string compare(string s1, string s2, string s3, string s4)
{
 s3 = "same";
 s4 = "not same";
 if (s1 == s2)
 {
 cout << "they are same ";
 return s3;
 }
 else
 {
 cout << "they are not same";
 return s4;
 }
}
int main()
{
 //int compare(const string& str1);
 string str1 = "allah is with us", str2 = "allah is with us",s3,s4;
 cout << compare(s3,s4);
 return 0;
}
*/
/*
* void clear(string str)
{
 char a = 0;
 cout << "Before Clear : " << str;
 str = a;
 cout << "After Clear : " << str;
}
int main()
{
 string str;
 cout << "Enter string : ";
 getline(cin, str);
 clear(str);
 }
*/
/*string aftererase(string str)
{
 int i;
 for (i = 0; str[i] != '\0'; i++);
 str[i - 1] = '\0';
 return str;
}
int main()
{
 string var;
 cout << "Enter the String : ";
 getline(cin, var);
 cout << aftererase(var);
 system("pause");
}
*/
/*string erase(string str, int k, int i )
{
 for (int e = i; e < i + 1; e++)
 {
 for (int t = 0; t < k; t++, e++)
 {
 str[e] = 0;
 }
 }
 return str;
}
int main()
{
 int a = 0, b = 0;
 string str;
 cout << "Enter String : ";
 getline(cin, str);
 cout << "Enter Start and end : ";
 cin >> b >> a;
 cout << erase(str, b, a);
}
*/
/*
void substr(string str, int i, int k)
{
 for (int j = i; j < i + 1; j++)
 {
 for (int t = 0; t < k; t++, j++)
 {
 cout << str[j];
 }
 }
}
int main()
{
 int a = 0, b = 0;
 string str;
 cout << "Enter String : ";
 getline(cin, str);
 cout << "please Enter Star and End : ";
 cin >> a >> b;
 substr(str, a, b);
}*/