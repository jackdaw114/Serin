#pragma once

#ifdef SR_PLATFORM_WINDOWS

extern Serin::Application* Serin::CreateApplication();
int main(int argc,char** argv)
{
	printf("hello world");
	auto app = Serin::CreateApplication();
	app->Run();												
	delete app;

}

#endif