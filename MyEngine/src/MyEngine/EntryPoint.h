#pragma once
#ifdef ME_PLATFORM_WINDOWN

extern MyEngine::Application* MyEngine::CreateApplication();

int main(int argc,char** argv) {
	printf("����Engine\n");
	auto app = MyEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif