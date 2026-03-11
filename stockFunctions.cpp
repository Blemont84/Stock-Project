#include "stockFunctions.h"
#include <cmath>
#include <string>
#include <vector>

double percentChange(const std::vector<double>& values, int startDay,
                     int endDay)
{
  double start = values[startDay];
  double end = values[endDay];

  return ((end - start) / start) * 100;
}

double highestValue(const std::vector<double>& values, int startDay, int endDay)
{
  double highest = values[startDay];

  for (int i = startDay; i <= endDay; i++) {
    if (values[i] > highest) {
      highest = values[i];
    }
  }
  return highest;
}

double average(const std::vector<double>& values, int startDay, int endDay)
{
  double sum = 0.0;

  for (int i = startDay; i <= endDay; i++) {
    sum += values[i];
  }
  int count = endDay - startDay + 1;

  return sum / count;
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
  std::vector<double> changes;

  changes.push_back(0);

  for (int i = 1; i < values.size(); i++) {
    changes.push_back(values)
  }
}

double maxDrawdown(const std::vector<double>& values, int startDay, int endDay)
{
  return 0.0;
}
