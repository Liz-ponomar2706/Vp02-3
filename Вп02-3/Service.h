#pragma once
#include <string> 
#include <iostream> 
class Service 
{ private:
    std::string m_ServiceTitle;  	
    std::string m_ServiceDescription;  	
    int m_ServiceEstimation; 
public:
    std::string m_GetTitle();  	
    std::string m_GetDescription();  	
    int m_GetServiceEstimation();  	
    void m_SetServiceEstimation(int);  	
    void m_SetTitle(std::string);  	
    void m_SetDescription(std::string);
    Service(std::string, std::string);
    Service();
};