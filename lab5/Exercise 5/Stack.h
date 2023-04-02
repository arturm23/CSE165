#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

class Stack {
    struct Link {
	    double data;
		Link* next;
		
		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}* head;
    public:
	
    Stack(){
        head = 0;
    }
    Stack(int n){
        head = 0;
        float curr = 0;
        for(int i = 0; i < n; i++){
            push(1 + curr);
            curr += 0.1;
        }
    }
	
	void push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop() {
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup() {
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}

    ~Stack(){
        while(head!=0){
            double num = pop();
            cout << num << " ";
        }
    }
};




#endif