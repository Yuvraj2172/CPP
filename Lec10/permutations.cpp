#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1= "abcd";
    string str2 = "adab";
    int freq[256]={0};
    int k = 97;
    for(int i =0 ; i<str2.length();i++){
        int ch = str2[i];
        freq[ch]++;
    }
    cout<<endl;
   for(int i =0 ; i<str1.length();i++){
        int ch = str1[i];
        freq[ch]--;
    }
    bool flag = true;
 for(int i=97;i<256;i++){
       if(freq[i]!=0){
        flag = false;
        break;
       }
    }   
}