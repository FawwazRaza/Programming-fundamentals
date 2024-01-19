#include <iostream>
#include<string>
using namespace std;

int main()
{

    char ch[] = "0011";   // its a character array. Also called cstring. it has few limitations. it is different from string variable

    string s = "Ameer Hamza Khan Aarayin";
    string s2 = "6789";

    s += "5";
    //s.append(s2);
    s += s2;

    s.insert(0, "00");       // first parameter is the index position. second parameter is the string to be inserted

    s.erase(1, 2);           // first parameter is the index position. second parameter is the no. of characters to be removed

    s.push_back('#');       //will insert only one character at the end of string
    s.push_back('*');
    s.pop_back();           //will remove only one character frp, the end of string


    //replace function
// first parameter is the index position, 
//second parameter is the no. of characters, 
//third parameter is the value to be replaced
    s.replace(0, 2, "012");
    s.replace(10, 5, "4#4#");


    //cout<<s.find("4#")<<endl;
    // npos == -1 means not found
    if (s.find("4$") == -1) cout << "Not found" << endl;
    else cout << "found at index: " << s.find("4$") << endl;

    cout << s.substr(10, 50) << endl;
    cout << s.compare("-1") << endl;
    // use == sign for comparison

    cout << s << endl;
    //cout<ch<<endl;

    return 0;
}