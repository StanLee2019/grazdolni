#include <iostream>
#include <string>

int main()
{
	using namespace std;

    for (auto x : {"Jacek", "Agatka", "Zosia", "Maciek"}) 
    {
        for (auto y : {"Miechowski/a", "Wiertarek", "Ząb", "Kołodziej"}) 
        {
			cout << "Imię i nazwisko: " << x << " " << y << endl;
		}
    }
    return 0;
}
