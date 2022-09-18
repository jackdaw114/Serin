#pragma once

#ifdef SR_PLATFORM_WINDOWS

extern Serin::Application* Serin::CreateApplication();
int main(int argc,char** argv)
{
	Serin::Log::Init();
	SR_CORE_WARN("initialized log!");
	SR_INFO("Hello!");
	printf("hello world");
	auto app = Serin::CreateApplication();
	app->Run();												
	delete app;

}

#endif