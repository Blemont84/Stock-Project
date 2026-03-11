#include "stockFunctions.h"
#include <cmath>
#include <string>
#include <vector>

double percentChange(const std::vector<double>& values, int startDay,
                     int endDay)
{
  double highest = values[startday];

  for (int i = startDay; i <= endDay; i++) {
    if (values[i] > highest) {
      
    }
  }
}

double highestValue(const std::vector<double>& values, int startDay, int endDay)
{
  return 0.0;
}

double average(const std::vector<double>& values, int startDay, int endDay)
{
  return 0.0;
}

double standardDev(const std::vector<double>& values, int startDay, int endDay)
{
  return 0.0;
}

std::vector<double> parseData(const std::string& csv)
{
  return {};
}

std::vector<double> getChangeVector(const std::vector<double>& values)
{
  return {};
}

double maxDrawdown(const std::vector<double>& values, int startDay, int endDay)
{
  return 0.0;
}
