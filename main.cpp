#include <iostream>
#include "linklist.h"

int main(int argc,char* argv[])
{
	linklist::linklist<int>* list = new linklist::linklist<int>();
	for(int i = 0;i < 100000000;i++) {
		list->appendItem(i);
	}
	while(list->count()!=0) {
		// std::cout<<(list->firstItem())<<std::endl;
		list->removeFirstItem();
	}
	delete list;
	return 0;
}
