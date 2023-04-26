#include "Func.h" 
#include "Menu.h" 
#include "Item.h" 
using namespace std; 
using namespace SAE; 
int main() 
{
    SetConsoleCP(1251);  	
    SetConsoleOutputCP(1251);  	
    int EmployeesAmount = 0;  	
    int ClientsAmount = 0;  	
    int CheckMenu = 0;  	
    const int ItemsNumber = 9;  	
    bool RunMenu = true;
    LocalInformation();
    Item Items[ItemsNumber]{ 
        Item{"Изобразить картинку псевдографикой",picture},Item{"Поздороваться с пользователем", meeting},Item{"Вычислить корень из 25",Sqrt25},Item{"Ввести информацию о книге",InputAllInfo},Item{"Вывести информацию",AllInfoTable},Item{"Проверить возраст всех пользователей",CheckAge},Item{"Добавить запись",AppendPeople},Item{"Удалить запись",RemoveStorTc},Item{"Сортировка",Sort}}; 
    Menu menu("Меню входа в систему", Items, ItemsNumber);
    while (menu.runCommand())
    {
        system("cls");
    }
    return 0;
}
