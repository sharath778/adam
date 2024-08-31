#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    string word1 = "tokniyexicuhj";
    string word2 = "tution";
    unordered_map<char, int> mp;
    for(int i=0;i<word1.size(); i++){
        mp[word1[i]]++;
    }
    int exist = 0;
    int n = word1.length(), m = word2.length();
    for(int j=0;j<m;j++){
        if(mp.find(word2[j])!=mp.end()){
            mp[word2[j]]--;
            if(mp[word2[j]]==0)mp.erase(word2[j]);
            exist++;
        }
    }
    cout<<n-exist;
    return 0;
}//comment line
