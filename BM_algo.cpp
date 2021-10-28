#include <bits/stdc++.h>
using namespace std;
# define NO_OF_CHARS 256

void badCharHeuristic( string str, int size,
                        int badchar[NO_OF_CHARS])
{
    int i;
 
    for (i = 0; i < NO_OF_CHARS; i++)
        badchar[i] = -1;
 
    for (i = 0; i < size; i++)
        badchar[(int) str[i]] = i;
}
 

void search( string txt, string pat)
{
    int q = pat.size();
    int p = txt.size();
 
    int badchar[NO_OF_CHARS];
 
    
    badCharHeuristic(pat, q, badchar);
 
    int t = 0; 
    while(t <= (p - q))
    {
        int j = q - 1;
 
       
        while(j >= 0 && pat[j] == txt[t + j])
            j--;
 
       
        if (j < 0)
        {
            cout << "pattern occurs at shift = " <<  t << endl;
 
            
            t += (t + q < p)? q-badchar[txt[t + q]] : 1;
 
        }
 
        else
            
            t += max(1, j - badchar[txt[t + j]]);
    }
}
 

int main()
{
    string txt= "ABCDAABB";
    string pat = "ABC";
    search(txt, pat);
    return 0;
}