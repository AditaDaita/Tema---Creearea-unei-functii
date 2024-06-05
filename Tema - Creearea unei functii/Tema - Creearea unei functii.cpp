// Tema - Creearea unei functii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



bool VerificareUtilizator(std::string user_name_introdus)
{

    const std::string user_name_corect = "Adrian21";
    //in cadrul unei firme primestiu un utilizator in functie de numele tau
    if (user_name_introdus == user_name_corect)
    {
        std::cout << "Utilizator verificat si confirmat " << std::endl;
        return true;
    }
    else
    {
        std::cout << "Utilizator incorect. sistemul va fii blocat!! " << std::endl;
        return false;
    }

}

bool VerificareaParola(std::string parola_introdusa)
{
    //avem nevoie de un talon pentru parola corecta
    const std::string parola_corecta = "Parola123";
    //comparam parola_introdusa cu parola corecta
    //daca parola_introdusa este la fel cu parola corecta returnam true
    if (parola_introdusa == parola_corecta)
    {
        std::cout << "parola comfirmata " << std::endl;
        return true;
    }
    // in caz contrar returnam false
    else
    {
        std::cout << "parola eronata! " << std::endl;
        return false;
    }
}


int main()
{
    std::cout << "Introdu Utilizator: " << std::endl;
    std::string user_name_introdus;
    std::cin >> user_name_introdus;
    bool chkuser_name_introdus = VerificareUtilizator(user_name_introdus);

    if (chkuser_name_introdus)
    {
        std::cout << "Utilizator inregistrat in sistem " << std::endl;
    }
    else
    {
        std::cout << "Utilizatorul nu este inregistrat in sistem " << std::endl;
    }

    std::cout << "Introdu parola : " << std::endl;
    std::string user_password;
    std::cin >> user_password;
    bool chkPswd = VerificareaParola(user_password);
    if (chkPswd)
    {
        std::cout << "Bine ai venit si spor la munca!" << std::endl;
    }
    else
    {
        std::cout << "Parola incorecta, system blocked!!" << std::endl;

    }


}


