#include <iostream>

using namespace std;

class Node {
  Node *links[26];
  bool flag = false;

public:
  bool contains(char ch) { return links[ch - 'a'] != nullptr; }

  Node *get(char ch) { return links[ch - 'a']; }

  void put(char ch, Node *node) { links[ch - 'a'] = node; }

  bool setEnd() { return flag = true; }

  bool isEnd() { return flag; }
};

class Trie {
private:
  Node *root;

public:
  Trie() { root = new Node(); }

  void insert(string word) {
    Node *node = root;
    for (int i = 0; i < word.size(); i++) {
      if (!node->contains(word[i])) {
        node->put(word[i], new Node());
      }
      node = node->get(word[i]);
    }
    node->setEnd();
  }

  bool search(string word) {
    Node *node = root;
    for (int i = 0; i < word.size(); i++) {
      if (!node->contains(word[i])) {
        return false;
      }
      node = node->get(word[i]);
    }

    return node->isEnd();
  }

  bool startWith(string word) {
    Node *node = root;
    for (int i = 0; i < word.size(); i++) {
      if (!node->contains(word[i])) {
        return false;
      }
      node = node->get(word[i]);
    }

    return true;
  }
};

int main() {

  Trie *obj = new Trie();
  obj->insert("Krishna");

  if (obj->search("Krishna")) {
    cout << "Succesfully searched in trie" << endl;
  }

  if (obj->startWith("Kri")) {
    cout << "Succesfully searched in trie" << endl;
  }
}
