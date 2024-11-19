#include "ThreadPool.h"
ThreadPool::ThreadPool(size_t Size) : vector_size(Size) {}

ThreadPool::~ThreadPool() {
  for (int i = 0; i < vector_size; i++) {
    m_vector[i].join();
  }
}
