#include"queue.h"
#include<vector>
#include<iostream>

using namespace std;

Myqueue::Myqueue(){start=0;}
Myqueue::~Myqueue(){}
bool Myqueue::enqueue(int val){
  data.push_back(val);
  return true;
}
bool Myqueue::dequeue(){
  if(isempty()) return false;
  start++;
  return true;
}
bool Myqueue::isempty(){
  return start>=data.size();
}
int Myqueue::front(){
  return data[start];
}
