#include <data.h>

#include <vector>
#include <string>

int main(){
    std::vector<std::string> data = readCSV("../data/mnist_test.csv");
    return 0;
}
