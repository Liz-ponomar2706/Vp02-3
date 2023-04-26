#pragma once 
#include "User.h" 
class Employee :public User
{
protected:
    int m_service; public:
    bool operator >(const Employee& St)
    {
        return (this->m_surname[0] > St.m_surname[0]);
    }
    bool operator < (const Employee& St)
    {
        return (this->m_surname[0] < St.m_surname[0]);
    }
    void m_SetName(std::string);  	void m_SetSurname(std::string);  	void m_SetAge(int);
    void m_SetPost(std::string);  	void m_SetLogin(std::string);  	void m_SetPassword(std::string);  	void m_SetService(int);
    friend std::ostream& operator <<(std::ostream& out, const Employee& St);  	friend std::istream& operator >> (std::istream& in, Employee& St);  	std::string m_GetName();  	std::string m_GetSurname();  	std::string m_GetLogin();  	std::string m_GetPost();  	std::string m_GetPassword();  	int m_GetAge();
    virtual void m_CheckAge(int, int);
    Employee(std::string, std::string, std::string, std::string, int, std::string);
    Employee();
};