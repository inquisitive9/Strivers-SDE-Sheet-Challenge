#include <bits/stdc++.h>

struct Node{

pair<Node*,int> links[26];

bool flag = false;

bool contains(char ch){

return links[ch - 'a'].first != NULL;

}

void setChar(char ch, Node* node){

links[ch - 'a'].first = node;

links[ch - 'a'].second=1;

}

Node* next(char ch){

return links[ch - 'a'].first;

}

void setEnd(){

links[0].second++;

flag = true;

}

int noWords(){

if(flag){

return links[0].second;

}

return 0;

}

bool isEnd(){

return flag;

}

int getCount(char ch){

return links[ch - 'a'].second;

}

void incCount(char ch){

links[ch - 'a'].second++;

}

void decCount(char ch){

links[ch - 'a'].second--;

if(links[ch - 'a'].second == 0){

links[ch - 'a'].first = NULL;

}

}

};

class Trie{

 

private:

Node* root;

 

public:

 

Trie(){

root = new Node();

}

 

void insert(string &word){

Node* temp = root;

for(int i = 0; i<word.size(); i++){

if(!temp->contains(word[i])){

temp->setChar(word[i], new Node());

}

else{

temp->incCount(word[i]);

}

temp = temp->next(word[i]);

}

temp->setEnd();

}

 

int countWordsEqualTo(string &word){

Node* temp = root;

for(int i = 0; i<word.size(); i++){

if(!temp->contains(word[i])){

return 0;

}

temp = temp->next(word[i]);

}

return temp->noWords();

}

 

int countWordsStartingWith(string &word){

Node* temp = root;

for(int i = 0; i<word.size(); i++){

if(!temp->contains(word[i])){

return 0;

}

if(i == word.size() - 1){

return temp->getCount(word[i]);

}

temp = temp->next(word[i]);

}

return 0;

}

 

void erase(string &word){

if(this->countWordsEqualTo(word) != 0){

Node* temp = root;

for(int i = 0; i<word.size(); i++){

if(temp->contains(word[i])){

temp->decCount(word[i]);

if(temp->getCount(word[i]) == 0){

return;

}

}

temp = temp->next(word[i]);

}

temp->decCount('a');

}

}

};
