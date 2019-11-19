#include "QueueTest.h"
using namespace std;
void QueueTest::runTests()
{
  ofstream oFile;
  oFile.open("bughunt.txt");
  oFile << "Test 1: Newly created queue is empty: ";
  if(test1())
  {
    oFile <<"PASSED\n";
  }
  else
  {
    oFile << "FAILED\n";
  }
  oFile << "Test 2: Enqueueing to queue makes it nonempty: ";
  if(test2())
  {
    oFile << "PASSED\n";
  }
  else
  {
    oFile <<"FAILED\n";
  }
  oFile << "Test 3: Enqueueing on empty queue sets new front: ";
  if(test3())
  {
    oFile << "PASSED\n";
  }
  else
  {
    oFile << "FAILED\n";
  }
  oFile << "Test 4: Enqueueing on non-empty list adds new entry to back: ";
  if(test4())
  {
    oFile <<"PASSED\n";
  }
  else
  {
    oFile <<"FAILED\n";
  }
  oFile << "Test 5: Dequeueing on non-empty list successfully removes entry: ";
  if(test5())
  {
    oFile<<"PASSED\n";
  }
  else
  {
    oFile<<"FAILED\n";
  }
  oFile << "Test 6: Dequeueing on empty list throws exception: ";
  if(test6())
  {
    oFile<<"PASSED\n";
  }
  else
  {
    oFile<<"FAILED\n";
  }
  oFile << "Test 7: Enqueueing and dequeueing twice correctly empties the queue: ";
  if(test7())
  {
    oFile<<"PASSED\n";
  }
  else
  {
    oFile<<"FAILED\n";
  }
  oFile << "Test 8: PeekFront on empty queue throws exception: ";
  if(test8())
  {
    oFile<<"PASSED\n";
  }
  else
  {
    oFile<<"FAILED\n";
  }

}

bool QueueTest::test1()
{
  Queue q1;
  bool test = q1.isEmpty();
  return(test);
}

bool QueueTest::test2()
{
  Queue q1;
  q1.enqueue(1);
  return(!q1.isEmpty());
}

bool QueueTest::test3()
{
  Queue q1;
  q1.enqueue(1);
  return(q1.peekFront() == 1);
}


//
bool QueueTest::test4()
{
  Queue q1;
  q1.enqueue(2);
  q1.enqueue(1);
  return(q1.peekFront() == 2);
}

//Tests if dequeueing correctly removes an entry from the queue
bool QueueTest::test5()
{
  Queue q1;
  q1.enqueue(1);
  q1.dequeue();
  return(q1.isEmpty());
}

//Tests if dequeueing on an empty queue throws an exception
bool QueueTest::test6()
{
  Queue q1;
  bool test = true;

  try {
    q1.dequeue();
  }
  catch(std::runtime_error& e) {
    test = false;
  }

  return test;
}


bool QueueTest::test7()
{
  Queue q1;
  q1.enqueue(1);
  q1.dequeue();
  q1.enqueue(5);
  q1.dequeue();
  return(q1.isEmpty());
}


bool QueueTest::test8()
{
  Queue q1;
  bool test = true;
  try {
    q1.peekFront();
  }
  catch(std::runtime_error& e) {
    test = false;
  }
  return test;
}
