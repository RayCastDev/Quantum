#pragma once

#ifdef QT_PLATFORM_WINDOWS

extern  Quantum::Application* Quantum::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Quantum::CreateApplication();
	app->Run();
	delete app;
}

#endif
