#include "iterator.h"

//OPERATOR ITERATOR

OperatorIterator::OperatorIterator(Base * ptr) : Iterator(ptr)
{
	this->self_ptr = ptr;
}

void OperatorIterator::first()
{
	current_ptr = self_ptr->get_left(); 		
	return;
}

void OperatorIterator::next()
{
	if (current_ptr == self_ptr->get_left())
	{
		current_ptr = self_ptr->get_right();
	}	

	else if (current_ptr == self_ptr->get_right())
	{
		current_ptr = NULL;
	}

	return;
}

bool OperatorIterator::is_done()
{
	return !current_ptr;
}

Base * OperatorIterator::current()
{
	return current_ptr;
}

//END OPERATOR ITERATOR

//UNARY ITERATOR
UnaryIterator::UnaryIterator(Base * ptr) : Iterator(ptr)
{
	this->self_ptr = ptr;
}

void UnaryIterator::first()
{
	current_ptr = self_ptr->get_left();
	return;
}

void UnaryIterator::next()
{
	if(current_ptr == self_ptr->get_left())
	{
		current_ptr = NULL;
	}

	return;
}

bool UnaryIterator::is_done()
{
	return !current_ptr;
}

Base * UnaryIterator::current()
{
	return current_ptr;
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
	Iterator * temp = iterators.top()->current()->create_iterator();
	temp->first();
	iterators.push(temp);
	while (iterators.top()->is_done())
	{
		iterators.pop();
		if (iterators.empty())
		{
			return;
		}
		iterators.top()->next();
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

//start of print visitor
