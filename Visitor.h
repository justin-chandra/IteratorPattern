#ifndef VISITOR
#define VISITOR

#include <iostream>

using namespace std;

#include "composite.h"

class Base;

class Visitor
{
	public:
		string output;

		Visitor();
		virtual void rootNode() = 0;
		virtual void sqrNode() = 0;
		virtual void multNode() = 0;
		virtual void subNode() = 0;
		virtual void addNode() = 0;
		virtual void opNode(Op * op) = 0;

		virtual void execute() = 0;
		
};

class PrintVisitor: public Visitor
{
	public:
		string output;

		PrintVisitor();
		void sqrNode();
		void rootNode();
		void multNode();
		void subNode();
		void addNode();
		void opNode(Op * op);

		void execute();
};

#endif
