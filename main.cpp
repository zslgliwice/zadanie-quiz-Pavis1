#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;


int main()
{

    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << ", witaj w tescie, za kazda poprawna odpowiedz dostajesz jeden punkt.\n";

    cout << "Kim był Jan Paweł II?"<<endl;
    cout << "a) papieżem"<<endl;
    cout << "b) pisarzem"<<endl;
    cout << "c) zołnierzem"<<endl;
    cout << "d) e-sportowcem";
    cin >> odp;
    if(odp == "d")
    {
        cout << "Poprawna odpowiedz! ... a tak naprawdę to był cesarzem";
        pkt++;
    }
    else
    {
        cout << "Zle! Jest e-sportowcem!";

    }

    cout << "Gdzie się urodził nasz papież Polak?"<<endl;
    cout << "a) w Krakowie"<<endl;
    cout << "b) w Gnieźnie"<<endl;
    cout << "c) w Wadowicach"<<endl;
    cout << "d) w Lublinie";
    cin >> odp;
    if(odp == "c")
    {
        cout << "Poprawna odpowiedz! Urodził się w Wadowicach!";
        pkt++;
    }
    else
    {
        cout << "Zle! Urodził się w Wadowicach!";

    }

    cout << "W którym to miejscu się mu zmarło, naszemu Papieżowi?"<<endl;
    cout << "a) w Warszawie"<<endl;
    cout << "b) w Watykanie"<<endl;
    cout << "c) w Wadowicach"<<endl;
    cout << "d) w Rzymie";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz! W Watykanie!";
        pkt++;
    }
    else
    {
        cout << "Zle! W Watykanie!";

    }
    
    cout << "Ile nasz Jan Paweł papież odwiedził państw podczas swojego pontyfikatu?"<<endl;
    cout << "a) Co to jest pantyfikat?"<<endl;
    cout << "b) 129"<<endl;
    cout << "c) 54"<<endl;
    cout << "d) 89";
    cin >> odp;
    if(odp == "b" || odp == "a")
    {
        cout << "Poprawna odpowiedz! 129 i... nie wiem co to jest pantyfikat.";
        pkt++;
    }
    else
    {
        cout << "Zle! 129 i... nie wiem co to jest pantyfikat.";

    }
    
    cout << "Co głównie robił Papież Polak w swoim tym no... pantyfikacie."<<endl;
    cout << "a) karmił Głodne Dzieci"<<endl;
    cout << "b) nawracał niewiernych"<<endl;
    cout << "c) sprzedawał figurki"<<endl;
    cout << "d) prowadził pielgrzymki";
    cin >> odp;
    if(odp == "a" || odp == "b" || odp == "c" || odp == "d")
    {
        cout << "Poprawna odpowiedz! O! Już wiem co to pantyfikat. Pontyfikat – okres sprawowania władzy w Kościele katolickim przez papieża. Pochodzi od łac. słowa pontifex, a oznaczającego pontyfika – kapłana należącego do kapłańskiego kolegium w starożytnym Rzymie. Termin pontificatus oznaczający początkowo władzę pontyfika przeniesiono później na władzę papieża i biskupa.";
        pkt++;
    }
    else
    {
        cout << "Jakim cudem zrobileś to żle?";

    }
    
    Sleep(4000);
    system("cls");

    cout << "Przeliczanie punktów...";
    
    Sleep(3000);
    system("cls");

    cout << "Jak ty to zrobiłeś?";

    Sleep(6000);
    system("cls");

    cout << "Zdobyles ";
    cout << pkt;
    cout << " puntow! WOW gz";

    return 0;
}



