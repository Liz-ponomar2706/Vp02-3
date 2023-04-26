#include "Service.h" 
Service::Service(std::string title, std::string description)
{
    m_ServiceTitle = title;  	
    m_ServiceDescription = description;
}
Service::Service()
{ }
int Service::m_GetServiceEstimation()
{
    return m_ServiceEstimation;
}
void Service::m_SetServiceEstimation(int Estimation)
{
    m_ServiceEstimation = Estimation;
}
void Service::m_SetTitle(std::string Title)
{
    m_ServiceTitle = Title;
}
void Service::m_SetDescription(std::string Description)
{
    m_ServiceDescription = Description;
}
std::string Service::m_GetDescription()
{
    return m_ServiceDescription;
}
std::string Service::m_GetTitle()
{
    return m_ServiceTitle;
}