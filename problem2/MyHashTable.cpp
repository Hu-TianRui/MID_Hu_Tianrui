//Tianrui Hu 8355711 CS32MID
#include <sstream>
#include "MyHashTable.h"

using namespace std;

// Default constructor. Do not modiify.
MyHashTable::MyHashTable() {
  for (size_t i = 0; i < CAPACITY; i++) {
    table[i] = new vector<pair<string, int>>;
  }
}

// Simple hash function. Do not modify.
size_t MyHashTable::hash(string name) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < name.size(); i++) {
		accumulator += name.at(i);
	}
	return accumulator % CAPACITY;
}

void MyHashTable::insertItem(string name, int perm) {
	int key = hash(name);
	table[key]->push_back(std::pair<std::string, int>(name,perm));
}

void MyHashTable::deleteItem(string name) {
	int key = hash(name);
	for(int i = 0; i < (int)table[key]->size(); i++){
		if(table[key]->at(i).first==name)
			table[key]->erase(table[key]->begin()+i);
	}
}

string MyHashTable::toString() const {
  ostringstream oss;
  for(int i = 0; i < (int)CAPACITY; i++){
  oss << i
  	  << ":[" ;
  for(int j = 0; j < (int)table[i]->size(); j++){
	  oss << "("
	  	  << table[i]->at(j).first
		  << ","
		  << table[i]->at(j).second
		  << ")";
  }
  oss << "]\n";}
  return oss.str();
}


MyHashTable::MyHashTable(const MyHashTable &orig) {
	for (size_t i = 0; i < CAPACITY; i++) {
    table[i] = new vector<pair<string, int>>(*orig.table[i]);
  }
}

MyHashTable::~MyHashTable() {
	for (size_t i = 0; i < CAPACITY; i++)
	delete table[i];
}
