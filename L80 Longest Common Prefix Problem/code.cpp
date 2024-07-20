// #approach 1
// TC O(mn) SC O(1) or O(m) for storing answer
string longestCommonPrefix(vector<string> &arr, int n)
{
    // for traversing all character of first String
    string ans="";
    for(int i=0;i<arr[0].length();i++){
        char ch= arr[0][i];
        bool match= true;

        //for comparing ch with rest of the string
        for(int j=1;j<n;j++){
            //not match
            if(arr[j].size()<i || ch!=arr[j][i]){
                match= false;
                break;
            } 
        }

        if(match)
            ans+=ch;
        else 
            break;
    }

    return ans;
}


//#approach 2
// TC O(m*n) SC O(m*n)
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch){
        data= ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        childCount=0;
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode* root;
    
    Trie(char ch){
        root= new TrieNode(ch);
    }

    void insertUtil(TrieNode* root, string word){

        if(word.length()==0){
            root->isTerminal= true;
            return;
        }

        int index= word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child= root->children[index];
        }
        else{
            child= new TrieNode(word[0]);
            root->children[index]= child;

            root->childCount++;
        }

        insertUtil(child, word.substr(1));
    }

    void insert(string word){
        return insertUtil(root, word);
    }

    void lcp(string first, string& ans){

        for(int i=0;i<first.length();i++){
            char ch= first[i];

            if(root->childCount==1){
                ans+=ch;
                int index= ch-'a';
                root= root->children[index];
            }
            else{
                break;
            }

            if(root->isTerminal){
                break;
            }
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t= new Trie('\0');

    // insert all string into trie
    for(int i=0;i<n;i++){
        t->insert(arr[i]);
    }

    string first= arr[0];
    string ans="";

    t->lcp(first , ans);

    return ans;
}