#ifndef QUEUETESTER_H
#define QUEUETESTER_H

#include "QueueInterface.h"
#include "Queue.h"
#include <iostream>
#include <fstream>

class QueueTest
{
public:
  void runTests();

private:
  bool test1();
  bool test2();
  bool test3();
  bool test4();
  bool test5();
  bool test6();
  bool test7();
  bool test8();
};
#endif
