#pragma once
#include <iostream>
#include <queue>
#include <mutex>
#include <condition_variable>
template<typename A>
class SafeQueue
{
  std::queue<A> m_queue;

  std::condition_variable m_variable;

  std::mutex m_mutex;

  bool empty();

 public:
  void push(A fun);

  A pop();

};
