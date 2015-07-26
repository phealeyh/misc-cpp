#include <iostream>
#include <string>

using namespace std;

/* function prototypes */
struct Entry;
void printEntry(Entry *e);
Entry *getNewEntry();
void prepend(Entry *ent, Entry *&first);
Entry *buildList();
void printList(Entry *list);
void recPrintList(Entry *list);
int countList(Entry *list);
void deallocate(Entry *list);
void insertSorted(Entry *& list, Entry * newOne);

struct Entry{ //node
	string name;
	string address, phone;
	Entry *next;
};

void printEntry(Entry *e){
	cout << e->name << " " << e->phone << endl;
}

Entry *getNewEntry(){
	string name;
	cout << "Enter name (Type quit to quit): ";
	cin >> name;
	if(name == "quit") return NULL;
	
	Entry *newOne = new Entry;
	newOne->name = name;
	cout << "Enter Phone: ";
	cin >> newOne->phone;
	newOne->next = NULL;
	return newOne;
}

void prepend(Entry *ent, Entry * &first){
	ent->next = first;
	first = ent;
}

Entry *buildList(){
	Entry *list = NULL;
	while(true){
		Entry *newOne = getNewEntry();
		if (newOne == NULL) break;
		prepend(newOne, list);
	}
	return list;
}

void printList(Entry *list){
	for(Entry *cur = list; cur != NULL; cur = cur->next)
		printEntry(cur);
}

void recPrintList(Entry *list){ //print list from back to front
	if(list != NULL){
		recPrintList(list->next); //recursively print the list
		printEntry(list);
	}
}
int countList(Entry *list){
	if(list == NULL) return 0;
	return 1 + countList(list->next);
}

void deallocate(Entry *list){
	if(list != NULL){
		Entry *next = list->next;
		delete list;
		deallocate(next);
	}
}


void insertSorted(Entry *& list, Entry * newOne){
	if(list == NULL || newOne->name < list->name){
		newOne-> next = list;
		list = newOne;
	} else{
		insertSorted(list->next, newOne);
	}
}


int main(){
	Entry *e = buildList();
	recPrintList(e);
	return 0;
}
