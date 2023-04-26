#include "Client.h" 
#include <string>
void Client::m_SetName(std::string name) {
    m_name = name;
}
void Client::m_SetSurname(std::string surname) {
    m_surname = surname;
}
void Client::m_SetAge(int age)
{
    m_age = age;
}
void Client::m_SetLogin(std::string login) {
    m_login = login;
}
void Client::m_SetPassword(std::string password) {
    m_password = password;
}
void Client::m_SetService(std::string service) {
    m_service = service;
}
std::string Client::m_GetName() {
    return m_name;
}
std::string Client::m_GetSurname() {
    return m_surname;
} int Client::m_GetAge() {
    return m_age;
}
std::string Client::m_GetLogin() {
    return m_login;
}
std::string Client::m_GetPassword() {
    return m_password;
}
std::string Client::m_GetService() {
    return m_service;
} void Client::m_CheckAge(int age, int ListPos)
{
    if ((0 > age) || (age > 99))
    {
        std::cout << "Некоректный возраст! У клиента номер" << ListPos + 1 << std::endl;
    }
}
Client::Client(std::string name, std::string surname, std::string login,std::string password, int age, std::string service)
{
        m_name = name;
        m_surname = surname;
        m_login = login;
        m_password = password;
        m_age = age;
        m_service = service;

}
Client::Client()
{ }
std::ostream& operator<<(std::ostream& out, const Client& Tc)
{
    return out << Tc.m_name + " " + Tc.m_surname;
}
std::istream& operator>>(std::istream& in, Client& Tc)
{
    in >> Tc.m_name;  	in.ignore();  	in >> Tc.m_surname;  	in.ignore();  	in >> Tc.m_age;  	in >> Tc.m_service;  	in >> Tc.m_login;  	in.ignore();  	in >> Tc.m_password;
    return in;
}