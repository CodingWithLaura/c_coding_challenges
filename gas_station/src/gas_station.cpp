#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <vector>

int solution(std::vector<int> gas, std::vector<int> costs)
{
  // sum liste gas < liste cost -> return -1
  unsigned int length_gas = gas.size();
  unsigned int length_costs = costs.size();

  assert(length_gas == length_costs);
  //anfangswert für Schleife
  int minimum = gas[0] - costs[0];
  int m_index = 0;
  int tank = 0;
  for(int count = 0; count < gas.size(); count++)
  {
    int diff = gas[count] - costs[count];
    tank = tank + diff;
    if(tank < minimum)
    {
      minimum = tank;
      m_index = count + 1;
    }
  }
  return m_index;
}

int main()
{
  std::vector<int> gas   = { 6, 2, 7, 4, 3 };
  std::vector<int> costs = { 7, 3, 5, 5, 2 };
      
  int result = solution(gas, costs);
  printf("result %d", result);
  return EXIT_SUCCESS;
}

