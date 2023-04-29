#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>

using namespace std;
int main()
{
    int start = 0;
    string str;
    getline(cin, str);
    vector<string> words;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == str.size() - 1)
        {
            int wordLength = (i == str.size() - 1) ? i - start + 1 : i - start;
            string word = str.substr(start, wordLength);
            words.push_back(word);
            start = i + 1; 
        }
    }
    vector<float> size_words;
    for (int i = 0; i < words.size(); i++)
    {
        size_words.push_back(floor(words[i].size() / 2));
    }
    for (int k = 0; k < words.size(); k++)
    {
        cout << "\033[1m" << words[k].substr(0, size_words[k]) << "\033[0m" << words[k].substr(size_words[k]) << " ";
    }
    return 0;
}
