#ifndef VISITOR
#define VISITOR

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

#include "composite.h"

class Base;
class Op;

class Visitor
{
	public:
		//string output;

		//Visitor();
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
		void rootNode();
		void sqrNode();
		void multNode();
		void subNode();
		void addNode();
		void opNode(Op * op);

		void execute();
};

#endif
