#include <iostream>
#include <fstream>
#include <string>

class Activation
{
private:
    std::string serialKey = "AZERTY";
    int point;
    bool status = false;

public:
    Activation();
    ~Activation();
    bool verifyActivate();
    void activate();
    bool getStatus();
    int getPoint();
};
