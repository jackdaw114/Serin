#include <Serin.h>

class Sandbox : public Serin::Application //inheritance(c++) 
{
public:
	Sandbox()
	{

	}
	~Sandbox() 
	{

	}
};

Serin::Application* Serin::CreateApplication()
{
	return new Sandbox();
}