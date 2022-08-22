// /*
//     Your Trie object will be instantiated and called as such:
//     Trie* obj = new Trie();
//     obj->insert(word);
//     bool check2 = obj->search(word);
//     bool check3 = obj->startsWith(prefix);
//  */
// https://www.codingninjas.com/codestudio/problems/implement-trie_631356?topList=striver-sde-sheet-problems&leftPanelTab=0
// struct Node
// {
//     Node *links[26];
//     bool end = false;
//     void put(char ch)
//     {
//         this->links[ch - 'a'] = new Node();
//     }
//     bool containsChar(char ch)
//     {
//         return this->links[ch - 'a'] != NULL;
//     }
//     Node *getLink(char ch)
//     {
//         return this->links[ch - 'a'];
//     }
//     void setEnd()
//     {
//         this->end = true;
//     }
//     bool getEnd()
//     {
//         return this->end;
//     }
// };

// class Trie
// {

// public:
//     Node *root;

//     /** Initialize your data structure here. */
//     Trie()
//     {
//         root = new Node();
//     }

//     /** Inserts a word into the trie. */
//     void insert(string word)
//     {
//         Node *temp = root;
//         for (int i = 0; i < word.length(); i++)
//         {
//             if (!temp->containsChar(word[i]))
//             {
//                 temp->put(word[i]);
//             }
//             temp = temp->getLink(word[i]);
//         }
//         temp->setEnd();
//     }

//     /** Returns if the word is in the trie. */
//     bool search(string word)
//     {
//         Node *temp = root;
//         for (int i = 0; i < word.length(); i++)
//         {
//             if (!temp->containsChar(word[i]))
//             {
//                 return false;
//             }
//             temp = temp->getLink(word[i]);
//         }
//         return temp->getEnd();
//     }

//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool startsWith(string word)
//     {
//         Node *temp = root;
//         for (int i = 0; i < word.length(); i++)
//         {
//             if (!temp->containsChar(word[i]))
//             {
//                 return false;
//             }
//             temp = temp->getLink(word[i]);
//         }
//         return true;
//     }
// };