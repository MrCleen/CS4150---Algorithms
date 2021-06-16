#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person
{
  int cash;
  int time;

  Person(int c, int t)
  {
    cash = c;
    time = t;
  }
};

bool compare(const Person &p1, const Person &p2)
{
  return p1.cash >= p2.cash;
}

void PlaceinQueue(vector<int> &v, Person p)
{
  int personTime = p.time;
  while (personTime >= 0)
  {
    if (v[personTime] == 0)
    {
      v[personTime] = p.cash;
      return;
    }
    personTime--;
  }
}


