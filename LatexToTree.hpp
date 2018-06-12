#ifndef IOSTREAM_INCLUDE
#define IOSTREAM_INCLUDE
#include <iostream>
#endif

#ifndef VECTOR_INCLUDE
#include <vector>
#define VECTOR_INCLUDE
#endif

namespace LatexToTree
{
	struct Element
	{
		int precedence;
		double value;
		char symbol;
	};

	std::vector<Element> stringToElements(std::string&);
	Tree::Tree elementsToTree(std::vector<Element>&);
}
