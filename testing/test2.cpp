#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("input.txt");
    string line;
    while (getline(input, line)) {  // берет по одной строчке из txt файла
        ofstream output("output.txt");
        output << line << endl;  // запись line (последнее значение) в файл output.txt
    }

    return 0;
}
