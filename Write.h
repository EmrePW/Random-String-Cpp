#ifndef PLEASE2_WRITE_H
#define PLEASE2_WRITE_H

#include <string>
using std::string;

class Write {
public:
    Write();
    string GenerateString();
    void setLength(int);
    ~Write();

private:
    int length;
};


#endif //PLEASE2_WRITE_H
