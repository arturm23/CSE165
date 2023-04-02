#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct LinkedList {
    
	struct Link {
		void* data;
		Link* next;
		
		Link(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
    
    LinkedList(void* dat, Link* nxt){
        head = new Link(dat,nxt);
    }

    void add(Link* l, int n) {
		for(int i = n; i > 0; i--){
            l->next = new Link(new double(i - 1),l->next);
        }
        
	}
	
	void print(){
        Link* curr = head;
        while(curr != NULL){
            std::cout << *(double*)curr->data << std::endl; 
            curr = curr->next;
        }
    }
    
	
	void cleanup() {
		while(head != NULL){
            Link* next = head->next;
            delete head->data;
            delete head;
            head = next;
        }
	}
};
    
    



#endif