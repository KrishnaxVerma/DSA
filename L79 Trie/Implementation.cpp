#include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data= ch;
        for(int i=0;i<26;i++){
            children[i]= NULL;
        }
        isTerminal= false;
    }
};

class Trie{
    public:
    TrieNode* root;

    public:
    Trie(){
        root= new TrieNode('\0');
    }

    //Insertion
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        //assumption, words will be in capital letter
        int index= word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child= root->children[index];
        }
        else{
        //absent
            child= new TrieNode(word[0]);
            root->children[index]= child;
        }

        //RECURSION
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }    

    //Searching
    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index= word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child= root->children[index];
        }
        //absent
        else{
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    //isEmpty
    bool isEmpty(TrieNode* root)
    {
        for (int i=0;i<26;i++)
            if (root->children[i])
                return false;
        return true;
    }

    //Deletion
    TrieNode* removeUtil(TrieNode* root, string key, int depth = 0){
        // If tree is empty
        if (!root)
            return NULL;
    
        // If last character of key is being processed
        if (depth == key.size()) {
    
            // This node is no more end of word after
            // removal of given key
            if (root->isTerminal)
                root->isTerminal = false;
    
            // If given is not prefix of any other word
            if (isEmpty(root)) {
                delete (root);
                root = NULL;
            }
    
            return root;
        }
    
        // If not last character, recur for the child
        // obtained using ASCII value
        int index = key[depth] - 'A';
        root->children[index] = 
            removeUtil(root->children[index], key, depth + 1);
    
        // If root does not have any child (its only child got 
        // deleted), and it is not end of another word.
        if (isEmpty(root) && root->isTerminal == false) {
            delete (root);
            root = NULL;
        }
    
        return root;
    }

    TrieNode* remove(string word){
        return removeUtil(root, word);
    }
};

int main(){
    Trie* t= new Trie();
    t->insertWord("ABC");
    t->insertWord("ARM");
    t->insertWord("ARMS");
    t->insertWord("TIME");

    cout<<"Present or not: "<<t->searchWord("ARM")<<endl;;
    t->remove("ARM");
    cout<<"Present or not: "<<t->searchWord("ARM")<<endl;;
    cout<<"Present or not: "<<t->searchWord("ARMS")<<endl;;
    return 0;
}