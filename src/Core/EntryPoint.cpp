#include "Application.h"
#include <cstdlib>

int main ()
{
	Application* app = new Application();
	app->Run();
	delete app;

	return EXIT_SUCCESS;
}