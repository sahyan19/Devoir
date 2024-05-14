#include <iostream>
#include "../header/Activation.hpp"

int main()
{
    Activation test = Activation();
    if (test.getStatus() == false)
    {
        test.verifyActivate();
    }
    if (test.getPoint() > 0)
    {

        if (test.getStatus() == true)
        {
            std::cout << "Vous pouvez maintenant utiliser l'application" << std::endl;
        }
        else
        {
	    std::cout << "Vous pouvez maintenant utiliser l'application" << std::endl;
	    std::cout << "============================================" << std::endl;
	    std::cout << "ATTENTION !! " << std::endl;
        std::cout << "Cle d'activation incorrecte !" << std::endl;
	    std::cout << "L'utilisation de cette application est limiter sans la bonne cle d'activation" << std::endl;
	    std::cout << "============================================" << std::endl;
        }
    }
    else
    {
        std::cout << "L'utiliisation de l'application a expirer" << std::endl;
    }
    return (0);
}
