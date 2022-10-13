// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
	// Rok pisania (ha ha) "programu": 2022
	
	int currentYear = 2022;

	int yearOfBirth = 2001;

	std::cout << "Witaj w testerze pełnoletności!\n";
	std::cout << "Sprawdź, czy jesteś już pełnoletni!\n";
	std::cout << "Wpisz swój rok urodzenia: ";
	std::cin >> yearOfBirth;

	
	if (currentYear - yearOfBirth >= 18)
	{
		std::cout << "Nie wiem, czy Ci gratulować, czy złożyć wyrazy współczucia.\n";
		std::cout << "W każdym razie, jesteś pełnoletni, więc powodzenia.\n";
		std::cout << "Pamiętaj, jak życie rzuca Ci cytryny, rób z nich lemoniadę!" << std::endl;
	}
	else
	{
		std::cout << "Niestety, jeszcze nie jesteś pełnoletni.\n";
		std::cout << "Ciesz się dzieciństwem póki możesz!" << std::endl;
	}






}





// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
