#pragma once
#include "SafeQueue.h"
#include <vector>
#include <functional>
class ThreadPool {

	ThreadPool(size_t Size);

	size_t vector_size;

	SafeQueue<std::function<void()>> m_queue;

	std::vector <std::thread> m_vector;

	std::function<void()>& work();


	~ThreadPool();

};
