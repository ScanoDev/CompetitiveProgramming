#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];

    //used for indicating ending of string
    bool isEndOfWord;

    //Initializae the wordEnd variable with false
    //initialize every index of childNode array with NULL
    TrieNode() {
        isEndOfWord = false;
        for(int i = 0; i < 26; i++){
            children[i] = nullptr; // 'children[i] no apunta a ningún objeto todavía'
        }
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }
    
    //insertar palabra
    void insert(string word) {
        TrieNode* node = root;
        for(char c : word){
            int idx = c - 'a';
            if(!node->children[idx]) //'si no existe, lo creo'
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEndOfWord = true;
    }

    //Buscar palabra completa
    bool search(string word) {
        TrieNode* node = root;
        for(char c : word) {
            int idx = c-'a';
            if(!node->children[idx])
                return false;
            node = node->children[idx];
        }
        return node->isEndOfWord;
    }

    //buscar si existe un prefijo
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char c : prefix) {
            int idx = c-'a';
            if(!node->children[idx])
                return false;
            node = node->children[idx];
        }
        return true;
    }
};



//////////////////////////////////
/*
Ejemplo paso a paso: insertando la palabra "cat" en el Trie

1. Inicialmente, el Trie tiene solo un nodo raíz.
   - root->children[0..25] == nullptr

2. Insertar 'c':
   - 'c' - 'a' = 2
   - root->children[2] es nullptr, entonces creamos un nuevo TrieNode y lo asignamos.
   - Ahora root->children[2] apunta al nodo para 'c'.

3. Insertar 'a':
   - 'a' - 'a' = 0
   - Desde el nodo 'c', children[0] es nullptr, así que creamos otro TrieNode para 'a'.
   - node->children[0] apunta al nodo para 'a'.

4. Insertar 't':
   - 't' - 'a' = 19
   - Desde el nodo 'a', children[19] es nullptr, así que creamos un TrieNode para 't'.
   - node->children[19] apunta al nodo para 't'.

5. Finalmente, marcamos el nodo 't' como fin de palabra:
   - node->isEndOfWord = true;

Resultado final:
(root)
   |
   c
   |
   a
   |
   t*   ← isEndOfWord = true

Solo se crean los nodos necesarios para cada letra de la palabra. Cada posición en el arreglo children representa una letra del alfabeto ('a' = 0, ..., 'z' = 25).
*/
//////////////////////////////