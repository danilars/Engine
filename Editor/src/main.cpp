#include<iostream>
#include<memory>
#include<EngineCore/application.hpp>
class MyApp :public Engine::Application
{
	virtual void on_update() override
	{
		std::cout << "update frame: " << frame++ << std::endl;
	}
	int frame = 0;
};
int main()
{
	auto myApp = std::make_unique<MyApp>();
	int returnCode = myApp->start(1024,768, "my first App");
	std::cin.get();
	return returnCode;
}