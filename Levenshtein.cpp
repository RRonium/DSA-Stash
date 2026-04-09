#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int min(int a, int b, int c) 
{
    return min(a, min(b, c));
}
int levenshtein(string s1, string s2) 
{
    int s1len = s1.length();
    int s2len = s2.length();    
    vector<vector<int>> matrix(s1len + 1, vector<int>(s2len + 1));

    for (int i = 0; i <= s1len; i++) matrix[i][0] = i;
    for (int j = 0; j <= s2len; j++) matrix[0][j] = j;

    for (int i = 1; i <= s1len; i++) 
    {
        for (int j = 1; j <= s2len; j++) 
        {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            matrix[i][j] = min(matrix[i - 1][j] + 1, matrix[i][j - 1] + 1, matrix[i - 1][j - 1] + cost);
        }
    }
    return matrix[s1len][s2len];
}
int main() 
{
    string s1 = "kitten";
    string s2 = "sitting";
    cout << "Levenshtein Distance: " << levenshtein(s1, s2) << endl;
    return 0;
}