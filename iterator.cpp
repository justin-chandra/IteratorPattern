#include "iterator.h"

//OPERATOR ITERATOR

OperatorIterator::OperatorIterator(Base * ptr) : Iterator(ptr)
{

}

void OperatorIterator::first()
{

}

void OperatorIterator::next()
{

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

}

void UnaryIterator::next()
{

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

}

void NullIterator::first()
{

}

void NullIterator::next()
{

}

bool NullIterator::is_done()
{
	return false;
}

Base * NullIterator::current()
{
	return NULL;
}

//END NULL ITERATOR

//PREORDER ITERATOR

PreOrderIterator::PreOrderIterator(Base * ptr) : Iterator(ptr)
{

}

void PreOrderIterator::first()
{

}

void PreOrderIterator::next()
{

}

bool PreOrderIterator::is_done()
{
	return false;
}

Base * PreOrderIterator::current()
{
	return NULL;
}
