
#include <iostream>
#include "SafeQueue.h"
#include <functional>
int main()
{ 
	std::function<void()> j = []() { std::cout << "ABC\n"; };

	SafeQueue<std::function<void()>> obj;

}

