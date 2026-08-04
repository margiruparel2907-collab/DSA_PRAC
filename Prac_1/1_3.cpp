#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a = "my name is margi ";
    string word = "", longest = "";
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != ' ')
        {
            word = word + a[i];
        }
        else
        {
            if(word.length() > longest.length()){
                longest = word;
            }
            word = "";
        }
    }
    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length();
    return 0;
}