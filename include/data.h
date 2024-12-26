#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

struct Data{
    std::vector<std::vector<int>> samples;
    std::vector<int> labels;
};

std::vector<std::string> readCSV(const std::string& filename);

Data readData(const std::string& filename);

#endif