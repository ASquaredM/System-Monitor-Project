#include "format.h"

#include <string>

using std::string;

string Format::ElapsedTime(long seconds) {
  // TODO: Try to optimize this code
  std::string hours, mins, secs, TimePretty;
  hours = std::to_string((seconds - (seconds % 3600)) / 3600);
  mins = std::to_string(
      ((seconds - (std::stoi(hours) * 3600)) - (seconds % 60)) / 60);
  secs = std::to_string(seconds - (std::stoi(hours) * 3600) -
                        (std::stoi(mins) * 60));
  TimePretty =
      (stoi(hours) > 0 ? (stoi(hours) < 10 ? ("0" + hours) : hours) : "00") +
      " : " +
      (stoi(mins) > 0 ? (stoi(mins) < 10 ? ("0" + mins) : mins) : "00") +
      " : " + (stoi(secs) > 0 ? (stoi(secs) < 10 ? ("0" + secs) : secs) : "00");
  return TimePretty;
}