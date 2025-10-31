#pragma once
#include <iostream>
#include <string>

struct DataRecord {
  int id;
  std::string taskName;
  std::string taskDesc;
  

  std::string toString() const {
    return "ID: " + std::to_string(id) +
    "Task Name: " + taskName +
    "Task Description: " + taskDesc;
  };
};
