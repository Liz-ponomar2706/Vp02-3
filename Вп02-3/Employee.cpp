#include "Employee.h" 
void Employee::m_SetName(std::string name) {
    m_name = name;
} void Employee::m_SetSurname(std::string surname) {
    m_surname = surname;
}
void Employee::m_SetAge(int age) {
    m_age = age;
}
void Employee::m_SetLogin(std::string login) {
    m_login = login;
}
void Employee::m_SetPost(std::string post) {
    m_post = post;
}
void Employee::m_SetPassword(std::string password) {
    m_password = password;
}
std::string Employee::m_GetName() {
    return m_name;
}
std::string Employee::m_GetSurname() {
    return m_surname;
}
std::string Employee::m_GetPost() {
    return m_post;
} int Employee::m_GetAge() {
    return m_age;
} void Employee::m_CheckAge(int age, int ListPos)
{
    if ((0 > age) || (age > 99))
    {
        std::cout << "Некоректный возраст! У сотрудника номер " << ListPos + 1 << std::endl;
    }
}
std::string Employee::m_GetLogin() {
    return m_login;
}
std::string Employee::m_GetPassword() {
    return m_password;
}
Employee::Employee(std::string name, std::string surname, std::string login, std::string password, int age, std::string post)
{

    m_name = name;
    m_surname = surname;
    m_login = login;
    m_password = password;
    m_age = age;
    m_post = post;
}
Employee::Employee()
{ } std::ostream& operator<<(std::ostream& out, const Employee& St)
{
    return out << St.m_name + " " + St.m_surname;
} std::istream& operator>>(std::istream& in, Employee& St)
{
    in >> St.m_name;  	in.ignore();  	in >> St.m_surname;  	in.ignore();  	in >> St.m_age;  	in >> St.m_post;  	in >> St.m_login;  	in.ignore();
    in >> St.m_password;  	return in;
}