#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   string word;
   cin >> word;
   int k = word.size();
   int i = 0;
 
   set<char> vowels;
   vowels.insert('a');
   vowels.insert('e');
   vowels.insert('i');
   vowels.insert('o');
   vowels.insert('u');
   vowels.insert('y');
   vowels.insert('A');
   vowels.insert('E');
   vowels.insert('I');
   vowels.insert('O');
   vowels.insert('U');
   vowels.insert('Y');
 
   while (i
       <k){
      if(vowels.count(word[i])==0){
      word[i]=tolower(word[i]);
      word = word.substr(0,i) + '.' + word.substr(i,k-i+1);
      i=i+2;
      } else{
      word = word.substr(0,i) + word.substr(i+1,k-i+1);
      };
   k = word.size();
};
 
 
         cout << word;
    return 0;
}