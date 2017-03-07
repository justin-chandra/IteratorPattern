#include "iterator.h"

//OPERATOR ITERATOR

OperatorIterator::OperatorIterator(Base * ptr) : Iterator(ptr)
{

}

void OperatorIterator::first()
{
	left->current() = ptr; 	
}

void OperatorIterator::next()
{
	right->current() = ptr;	
}

bool OperatorIterator::is_done()
{
	return false;
}

Base * OperatorIterator::current()
{
	return NULL;
}

//END OPERATOR ITERATOR

//UNARY ITERATOR
UnaryIterator::UnaryIterator(Base * ptr) : Iterator(ptr)
{

}

void UnaryIterator::first()
{
	left->current() = ptr;
}

void UnaryIterator::next()
{
	return;
}

bool UnaryIterator::is_done()
{
	return false;
}

Base * UnaryIterator::current()
{
	return NULL;
}


//END UNARY ITERATOR

//NULL ITERATOR

NullIterator::NullIterator(Base * ptr) : Iterator(ptr)
{
	this->self_ptr = ptr;
}

void NullIterator::first()
{

}

void NullIterator::next()
{

}

bool NullIterator::is_done()
{
	return true;
}

Base * NullIterator::current()
{
	return NULL;
}

//END NULL ITERATOR

//PREORDER ITERATOR

PreOrderIterator::PreOrderIterator(Base * ptr) : Iterator(ptr)
{
	this->self_ptr = ptr;
}

void PreOrderIterator::first()
{
	while (!iterators.empty())
	{
		iterators.pop();
	}
	Iterator * it = self_ptr->create_iterator();
	it->first();
	iterators.push(it);
}

void PreOrderIterator::next()
{
	Iterator * temp = iterators.top();
	iterators.push(temp);
	if (temp->is_done())
	{
		iterators.pop();
		current_ptr = iterators.top()->current();
	}
}

bool PreOrderIterator::is_done()
{
	return iterators.empty();
}

Base * PreOrderIterator::current()
{
	return iterators.top()->current();
}
