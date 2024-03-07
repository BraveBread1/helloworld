#include<iostream>

using namespace std;

string pigLatin(string word)
{
    char c = word[0];
    if(c == 'u' || c == 'e' || c == 'o'|| c == 'a' || c == 'i')
    {
        word += "way";
    }
    else 
    {
        word.erase(word.begin());
        word = word + c + "ay";
    }
    return word;
}

int main()
{

}