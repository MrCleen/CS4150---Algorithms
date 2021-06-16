#include "solut.h"

int main()
{
  int totalPeople, totalTime;

  cin >> totalPeople >> totalTime;

  vector<int> timeQueue(totalTime);
  vector<Person> personVector;

  int personCash, personTime;

  for (int i = 0; i < totalPeople; i++)
  {
    cin >> personCash >> personTime;
    Person p(personCash, personTime);
    personVector.push_back(p);
  }

  sort(personVector.begin(), personVector.end(), compare);

  int maxProfit = 0;
  int q = 0;

  while (q < personVector.size())
  {
    PlaceinQueue(timeQueue, personVector[q]);

    q++;
  }

  for (int q = 0; q < timeQueue.size(); q++)
    maxProfit += timeQueue[q];

  cout << maxProfit << endl;

  return 0;
}





