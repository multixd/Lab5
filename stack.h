#ifndef STACK_H
#define STACK_H

#include <stdexcept>

const int MAX_SIZE = 20;

template <typename T>
class stack {
	private:
	T array[MAX_SIZE];
	int size;
	
	public:
	stack();
	void push(T);
	void pop();
	T top();
	bool empty();
};

template <typename T>
stack<T>::stack():size(0){
}

template <typename T>
void stack<T>::push (T val) {
	if(size > 19) {
		throw std::overflow_error("Called push on full stack.");
	}
	
	array[size] = val;
	++size;
}

template <typename T>
void stack<T>::pop () {
	if(size < 1) {
		throw std::out_of_range("Called pop on empty stack.");
	}
	
	--size;
}

template <typename T>
T stack<T>::top() {
	if(size < 1) {
		throw std::underflow_error( "Called top on empty stack.");
	}
	
	return array[size-1];
}

template <typename T>
bool stack<T>::empty() {
	if(size <1) {
		return true;
	}
	return false;
}

#endif
