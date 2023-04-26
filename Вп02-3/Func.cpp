#pragma warning(disable: 4018) 
#include "Func.h" 
using namespace std; 
bool RunMenu = true; 
int const ListsAmount = 500;
int Counter = 0; int Counter_2 = 0; 
Employee EmployeeList[ListsAmount];
Client ClientList[ListsAmount]; Service BasicService; void LocalInformation() {
	Counter = 3;
	Counter_2 = 3;
	EmployeeList[0].m_SetName("Александра");
	EmployeeList[0].m_SetSurname("Демидова");
	EmployeeList[0].m_SetAge(49);
	EmployeeList[0].m_SetPost("Архивариус");
	EmployeeList[0].m_SetLogin("aedemidova");
	EmployeeList[0].m_SetPassword("12344321");
	EmployeeList[1].m_SetName("Иван");
	EmployeeList[1].m_SetSurname("Иванов");
	EmployeeList[1].m_SetAge(24);
	EmployeeList[1].m_SetPost("Лаборант-исследователь");
	EmployeeList[1].m_SetLogin("IvanIvanov");
	EmployeeList[1].m_SetPassword("87655678");
	EmployeeList[2].m_SetName("Екатерина");
	EmployeeList[2].m_SetSurname("Кузнецова");
	EmployeeList[2].m_SetAge(50);
	EmployeeList[2].m_SetPost("Библеотекарь");
	EmployeeList[2].m_SetLogin("Kuznecova");
	EmployeeList[2].m_SetPassword("08426803");
	ClientList[0].m_SetName("Алина");
	ClientList[0].m_SetSurname("Шестова"); 
	ClientList[0].m_SetAge(35);
	ClientList[0].m_SetService("Отцы и дети И.С.Тургенев");
	ClientList[0].m_SetLogin("Shestova");
	ClientList[0].m_SetPassword("87520384");  	
	ClientList[1].m_SetName("Марина");
	ClientList[1].m_SetSurname("Федорина");
	ClientList[1].m_SetAge(48);
	ClientList[1].m_SetService("Война и мир Л.Н.Толстой");
	ClientList[1].m_SetLogin("Fedorina");
	ClientList[1].m_SetPassword("09877777");
	ClientList[2].m_SetName("Анатолий");
	ClientList[2].m_SetSurname("Рыбаков");
	ClientList[2].m_SetAge(46);
	ClientList[2].m_SetService("Вишнёвый сад А.П.Чехов");
	ClientList[2].m_SetLogin("АnFish");
	ClientList[2].m_SetPassword("64932683");
}
bool InputEmployeeInfo()
{
	system("cls");  	
	string EmployeeName = "";  	
	string EmployeeSurname = "";  	
	string EmployeeLogin = "";  	
	string EmployeePassword = "";  	
	string EmployeePost = "";  	
	int EmployeeAge = 0;  	
	int EmployeeService = 0;  	
	cout << "Введите имя сотрудника\n";  	
	cin >> EmployeeName;
	cout << "Введите фамилию сотрудника\n";  	
	cin >> EmployeeSurname;
	cout << "Введите должность сотрудника\n";  	
	cin >> EmployeePost;  	
	cout << "Введите логин сотрудника\n";  	
	cin >> EmployeeLogin;  	
	cout << "Введите пароль сотрудника\n";  	
	cin >> EmployeePassword;
	Employee BufferEmployee = Employee(EmployeeName, EmployeeSurname, EmployeeLogin, EmployeePassword, EmployeeAge, EmployeePost);
	EmployeeList[Counter++] = BufferEmployee;
	return true;
}
bool InputClientInfo()
{
	system("cls");  	
	string ClientName = "";  	
	string ClientSurname = "";  	
	string ClientLogin = "";  	
	string ClientPassword = "";  	
	string ClientService = "";  	
	int ClientAge = 0;  	
	cin.ignore();  	
	cout << "Введите имя клиента\n";  	
	cin >> ClientName; 
	cout << "Введите фамилию клиента\n"; 
	cin >> ClientSurname; 
	cout << "Введите возраст клиента\n"; 
	cin >> ClientAge; 
	cout << "Введите услугу\n"; 
	cin >> ClientService; 
	cout << "Введите логин клиента\n"; 
	cin >> ClientLogin;
	cout << "Введите пароль клиента\n";
	cin >> ClientPassword;
	Client BufferClient =
		Client(ClientName, ClientSurname, ClientLogin, ClientPassword,
			ClientAge, ClientService);
	ClientList[Counter_2++] = BufferClient;
	return true;
}
void ServiceAboutTable()
{
	int TitleLength = BasicService.m_GetTitle().length();
	int DescriptionLength = BasicService.m_GetDescription().length();
}
void InputServiceInfo()
{
	string ServiceTitle = "";  	
	string ServiceDescription = "";  	
	cin.ignore();
	cout << "Укажите название и автора книги: \n";  	
	getline(cin, ServiceTitle);  	
	cout << "Укажите описание книги: \n";  	
	getline(cin, ServiceDescription);  	
	BasicService.m_SetTitle(ServiceTitle);
	BasicService.m_SetDescription(ServiceDescription);
}
bool EmployeesTable()
{
	int MaxNameSurnameCol = 0;  	
	int MaxNameLength = 0;  	
	int MaxSurnameLength = 0;  	
	int MaxLoginLength = 0;  	
	int MaxPasswordLength = 0;  	
	int MaxAgeLength = 0;  	
	for (int i = 0; i < Counter; i++)
	{
		if (EmployeeList[i].m_GetName().length() > MaxNameLength)
		{
			MaxNameLength = EmployeeList[i].m_GetName().length();
		}
		if (EmployeeList[i].m_GetSurname().length() > MaxSurnameLength)
		{
			MaxSurnameLength = EmployeeList[i].m_GetSurname().length();
		}
		if (EmployeeList[i].m_GetLogin().length() > MaxLoginLength)
		{
			MaxLoginLength = EmployeeList[i].m_GetLogin().length();
		}
		if (EmployeeList[i].m_GetPassword().length() > MaxPasswordLength)
		{
			MaxPasswordLength = EmployeeList[i].m_GetPassword().length();
		}
	}
	for (int i = 0; i < Counter; i++)
	{
		int BufferAge = EmployeeList[i].m_GetAge();
		for (int k = 0; BufferAge > 0; k++)
		{
			BufferAge /= 10;
			if (k > MaxAgeLength)
			{
				MaxAgeLength = k;
			}
		}
	}
	MaxNameSurnameCol = MaxNameLength + MaxSurnameLength + 3; for (int j = 0; j < Counter; j++)
	{
		cout << " | " << setw(19) << left << EmployeeList[j] << " | " <<
			setw(3) << left << EmployeeList[j].m_GetAge() << " | " << setw(13) << left <<
			EmployeeList[j].m_GetPost() << " | " << setw(13) << left <<
			EmployeeList[j].m_GetLogin() << " | " << setw(5) << left <<
			EmployeeList[j].m_GetPassword() << " | " << endl;
	}
	return true;
}
bool CheckAge()
{
	bool flag = true;  	int iflag = 0;
	while (flag == true)
	{
		system("cls");
		for (int i = 0; i < Counter; i++)
		{
			EmployeeList[i].m_CheckAge(EmployeeList[i].m_GetAge(), i);
		}
		for (int i = 0; i < Counter; i++)
		{
			ClientList[i].m_CheckAge(ClientList[i].m_GetAge(), i);
		}

		system("pause");
		flag = false;
	}
	return true;
}
void ClientsTable()
{
	int MaxNameLength = 0;  	int MaxSurnameLength = 0;  	int MaxLoginLength = 0;  	int MaxPasswordLength = 0;  	int MaxAgeLength = 0;  	int MaxNameSurnameCol = 0;
	for (int i = 0; i < Counter_2; i++)
	{
		if (ClientList[i].m_GetName().length() > MaxNameLength)
		{
			MaxNameLength = ClientList[i].m_GetName().length();
		}
		if (ClientList[i].m_GetSurname().length() > MaxSurnameLength)
		{
			MaxSurnameLength = ClientList[i].m_GetSurname().length();
		}
		if (ClientList[i].m_GetLogin().length() > MaxLoginLength)
		{
			MaxLoginLength = ClientList[i].m_GetLogin().length();
		}
		if (ClientList[i].m_GetPassword().length() > MaxPasswordLength)
		{
			MaxPasswordLength = ClientList[i].m_GetPassword().length();
		}
	}
	for (int i = 0; i < Counter_2; i++)
	{
		int BufferAge = ClientList[i].m_GetAge();
		for (int k = 0; BufferAge > 0; k++)
		{
			BufferAge /= 10;  	 	if (k > MaxAgeLength)
			{
				MaxAgeLength = k;
			}
		}
	}
	MaxNameSurnameCol = MaxNameLength + MaxSurnameLength + 1;  	for (int j = 0; j < Counter_2; j++)
	{
		cout << " | " << setw(19) << left << ClientList[j] << " | " << setw(3)
			<< left << ClientList[j].m_GetAge() << " | " << setw(13) << left <<
			ClientList[j].m_GetService() << " | " << setw(13) << left <<
			ClientList[j].m_GetLogin() << " | " << setw(MaxPasswordLength) << left <<
			ClientList[j].m_GetPassword() << " | " << endl;
	}
	cout << endl;
}
void CalcService()
{
	int sum = 0;
	int k = 0;
	for (int i = 0; i < Counter; i++)
	{
		k++;

		BasicService.m_SetServiceEstimation(sum / k);
	}
}
bool InputAllInfo()
{
	int EmployeeAmount = 0;  	int ClientAmount = 0;  	InputServiceInfo();
	cout << "Сколько сотрудников добавим?" << endl;
	cin >> EmployeeAmount;
	for (int i = 0; i < EmployeeAmount; i++)
	{
		InputEmployeeInfo();
	}
	cout << "Сколько клиентов добавим?" << endl;  	cin >> ClientAmount;  	for (int i = 0; i < ClientAmount; i++)
	{
		InputClientInfo();
	}
	return true;
} bool AllInfoTable()
{
	bool flag = true;  	int iflag = 0;  	CalcService();  	while (flag == true)
	{
		system("cls");
		ServiceAboutTable();  	cout << "\nСотрудники" << endl;  	EmployeesTable();  	cout << "\nКлиенты" << endl;  	ClientsTable();  	system("pause");
		flag = false;
	}
	return true;
}
bool AppendPeople()
{
	int Checker = 0;  	Employee BufferEmployee;  	Client BufferClient;  	cout << "1. Сотрудника" << endl;  	cout << "2. Клиента\n";  	cin >> Checker;
	switch (Checker)
	{
	case 1:
		cout << "Введите информацию(Имя, фамилия, должность, логин, пароль)" << endl;
		cin >> BufferEmployee;
		EmployeeList[Counter++] = BufferEmployee;
	break;  	case 2:
		cout << "Введите информацию(Имя, фамилия, услуга, логин, пароль)" << endl;
		cin >> BufferClient;
		ClientList[Counter_2++] = BufferClient;  	 	break;
	}
	return true;
}
bool RemoveStorTc()
{
	int Checker = 0;  	int StIn = 0;  	int TcIn = 0;
	cout << "1. Сотрудника" << endl;  	cout << "2. Клиента\n";  	cin >> Checker;
	switch (Checker)
	{
	case 1:
		cout << "Какого сотрудника удалить?" << endl;
		cin >> StIn;
		for (int i = StIn; i < Counter - 1; i++)
		{
			EmployeeList[i] = EmployeeList[i + 1];
		}
	Counter--;  	 	break;  	case 2:
		cout << "Какого клиента удалить?" << endl;
		cin >> TcIn;
		for (int i = TcIn; i < Counter_2 - 1; i++)
		{
			ClientList[i] = ClientList[i + 1];
		}
		Counter_2--;  	 	break;
	}
	return true;
} bool Sort()
{
	for (int i = 0; i < Counter_2; i++)
	{
		for (int j = i + 1; j < Counter_2; j++)
		{
			if (ClientList[i] > ClientList[j])
			{
				Client temp = ClientList[i];
				ClientList[i] = ClientList[j];
				ClientList[j] = temp;
			}
		}
	}
	for (int i = 0; i < Counter; i++)
	{
		for (int j = i + 1; j < Counter; j++)
		{
			if (EmployeeList[i] > EmployeeList[j])
			{
				Employee temp = EmployeeList[i];
				EmployeeList[i] = EmployeeList[j];
				EmployeeList[j] = temp;
			}
		}
	}
	return true;
}
bool Sqrt25()
{
	system("cls");
	std::cout << "Запуск пункта номер 3:";
	std::cout << "\nКорень из 25 - " << sqrt(25) << "\n\n";
	system("pause");
	return true;
}
bool meeting()
{
	string name = {};  	
	system("cls");
	std::cout << "Запуск пункта номер 2:";  	
	cout << "\nВведите своё имя: ";
	cin >> name;
	cout << "Привет, " << name << "!" << endl;  	
	cout << "Хорошего дня!!!" << endl;
	//system("pause");
	return true;
}
bool picture()
{
	//system("cls");
	std::cout << "Запуск пункта номер 1:";
	cout << "_____________$$___________________$$______________\n"
		"______________$$$____________________$$___________\n"
		"__$______$$$$$$$$$$___________________ $$__________\n"
		"__$$__$$$$$$$$$$$$$$___________________$$_________\n"
		"__$$$$$$$$$$$$$$$$$$____________________$$________\n"
		"___$$$$$$$$$$$$$$$$___ _$$$$$$$$$$$$______$$_______\n"
		"___$$$$$$$$$$$$$$$___$$$$$$$$$$$$$$$$____$$_______\n"
		"____$$$$$$$$$$$$$__$$$$$$$$$$$$$$$$$$$__$$$_______\n"
		"______ _$$$$$$$$$$_$$$$$$$$$$$$$$$$$$$$$_$$$_______\n"
		"__________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$________\n"
		"____________$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ _________\n"
		"_____________$$$$$$$$$$_________$$$$$$$$__________\n"
		"______________$$$$$$$_____________$$$$$$$_________\n"
		"_______________$$$$$_____ __________$$$$$$_________\n"
		"________________$$$$________________$$$$$_________\n"
		"________________$$$$_________________$$$$_________\n"
		"_________ ________$$$__________________$$$________\n"
		"_______________$$$$$________________$$$$$_________\n";

	return true;
}