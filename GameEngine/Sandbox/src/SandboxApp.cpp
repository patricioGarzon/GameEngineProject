#include <NickEngine.h>


class Sandobx : public Engine::Application {
public:
	Sandobx() {

	}
	~Sandobx() {

	}
};

Engine::Application* Engine::CreateApplication() {
	return new Sandobx();
}