#pragma once
#pragma once
#include "User.h" 
class Client :public User
{
public:
    bool operator >(const Client& Tc)
    {
        return (this->m_surname[0] > Tc.m_surname[0]);
    }
    bool operator < (const Client& Tc)
    {
        return (this->m_surname[0] < Tc.m_surname[0]);
    }
    void m_SetName(std::string);
    void m_SetSurname(std::string);
    void m_SetAge(int);
    void m_SetService(std::string);
    void m_SetLogin(std::string);
    void m_SetPassword(std::string);
    friend std::ostream& operator<<(std::ostream& out, const Client& Tc);  	friend std::istream& operator >> (std::istream& in, Client& Tc);
    std::string m_GetName();  	std::string m_GetSurname();  	std::string m_GetLogin();  	std::string m_GetPassword();  	std::string m_GetService();  	int m_GetAge();
    virtual void m_CheckAge(int, int);
    Client(std::string, std::string, std::string, std::string, int, std::string);
    Client();
};