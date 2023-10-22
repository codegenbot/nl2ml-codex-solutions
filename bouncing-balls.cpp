#include <cmath>
#include <iostream>
#include <stdlib.h>

int main(int argc, char ** argv)
{
  if (argc != 4)
  {
    std::cout << "Usage: " << argv[0] << " start_height first_bounce_height num_bounces" << std::endl;
    return 1;
  }

  double start_height = strtod(argv[1], NULL);
  double first_bounce_height = strtod(argv[2], NULL);
  int num_bounces = atoi(argv[3]);

  double bounciness = first_bounce_height / start_height;

  double total_distance = start_height;

  for (int i = 0; i < num_bounces; i++)
  {
    total_distance += start_height * pow(bounciness, i + 1);
  }

  std::cout << total_distance << std::endl;

  return 0;
}
