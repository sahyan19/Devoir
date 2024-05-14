#include "../header/Activation.hpp"

bool Activation::verifyActivate()
{
    std::ifstream fs("./data/userSerial.reg");
    if (fs.fail())
    {
        std::cout << "fichier d'activation introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == serialKey)
        {
            std::cout << "Activation OK" << std::endl;
            activate();
            return true;
        }
        else
        {
            std::string inFile;
            std::ifstream inRead("./data/numberOfTry.txt");
            inRead >> inFile;
            inRead.close();
            int i = stoi(inFile), value;
            std::ofstream fileCount("./data/numberOfTry.txt");
            value = (i - 1);
            fileCount << value;
            fileCount.close();
            return false;
        }
    }
}

void Activation::activate()
{
    std::ofstream fs("./data/numberOfTry.txt");
    fs << "activated";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("./data/numberOfTry.txt");
    if (fs.fail())
    {
        std::cout << "numberOfTry.txt introuvable" << std::endl,
            point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return status;
}

int Activation::getPoint()
{
    return point;
}