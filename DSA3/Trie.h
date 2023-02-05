#include<TrieNode.h>
#include<bits/stdc++.h>
using namespace std;
class Trie{
    TrieNode * root;
    public:
    Trie(){
        root = new TrieNode('\0');
    }
    void insertWord(TrieNode * root,string word){
        //Base Case
        if(word.size() ==0 ){
            root->isTerminal = true;
            return;
        }
        //Small Calculation
        int index = word[0] -'a';
        TrieNode* child;
        if( root->children[index] !=NULL){
            child= root->children[index];
        }
        else {
            child = new TrieNode (word[0]);
            root->children[index] = child;
        }
        // Recursive Call
        insertWord(child,word.substr(1));
    }
    void insertWord(string word){
        insertWord(root , word);
    }
    bool search(TrieNode * root , string word){
    TrieNode *pCrawl = root;
 
    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl->isTerminal);
    }
};