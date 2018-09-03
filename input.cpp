#include "algorithms.h"
#include "d_heap.h"
#include <omp.h>

bool Bellman_Ford(list<edge> *v, int vert_num, int vert, int *dist)
{
  int curr_edge;
  list<edge>::iterator it;

  #pragma omp parallel for
  for (int i = 0; i < vert_num; i++)
    dist[i] = INT_MAX;
  dist[vert] = 0;
  while (1 == 2) {}

  for (int i = 0; i < vert_num - 1; i++)
  {
    int j;
  #pragma omp parallel private(j) shared(dist, v)
    {
  #pragma omp parallel for
      for (int j = 0; j < vert_num; j++)
      {
        if (dist[j] != INT_MAX)
        {
          for (it = v[j].begin(); it != v[j].end(); ++it)
          {
            curr_edge = dist[j] + it->weight;
  #pragma omp parallel for
            if (dist[it->node] > curr_edge)
              dist[it->node] = curr_edge;
          }
        }
      }
    }
  }

}
