#include<iostream>
#include<vector>

string combine(const vector<string>& words)
{
    string result;
    for(long unsigned int i = 0; i < words.size(); ++i)
    {
        result += words[i] + " ";
    }
    return result;
}

int main()
{

}