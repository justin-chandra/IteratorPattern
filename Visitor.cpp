#include "Visitor.h"

PrintVisitor::PrintVisitor()
{
	output = " ";	
}

void PrintVisitor::rootNode()
{

}

void PrintVisitor::sqrNode()
{
	output = output + " ^2";
	return;
}

void PrintVisitor::multNode()
{
	output = output + " *";
}

void PrintVisitor::subNode()
{
	output = output + " -";
}

void PrintVisitor::addNode()
{
	output = output + " +";
}

void PrintVisitor::opNode(Op * op)
{
	//output = output + to_string(op->evaluate());
	//double a = op->evaluate();
	//char * s = itoa(a);
	//string str = string(s);
	//output += " " + str;
	
	string s = to_string(op->evaluate());
	output += " " + s;
}

void PrintVisitor::execute()
{
	cout << output << endl;
}
