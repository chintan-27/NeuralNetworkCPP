#include "data.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> readCSV(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std::vector<std::string> lines;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
    return lines;
}

Data readData(const std::string& filename){
    std::vector<std::string> lines = readCSV(filename);
    Data data;
    for (const auto& line : lines) {
        int label;
        bool labelbool = true;
        std::vector<int> sample;
        std::string value;
        std::istringstream ss(line);
        while (std::getline(ss, value, ',')) {
            if (labelbool){
                label = std::stoi(value);
                labelbool = false;
            }
            sample.push_back(std::stoi(value));
        }
        data.labels.push_back(label);
        data.samples.push_back(sample);
    }
    return data;
}