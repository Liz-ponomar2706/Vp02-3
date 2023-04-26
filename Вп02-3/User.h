#pragma once
#pragma once 
#include <string> 
#include <iostream> 
 class User { 
 protected: 
    std::string m_name;  	
    std::string m_surname;  	
    std::string m_login;  
    std::string m_password;  
    std::string m_service;  	
    std::string m_post;  	
    int m_age; 
 public:
    virtual void m_CheckAge(int, int) = 0;
};