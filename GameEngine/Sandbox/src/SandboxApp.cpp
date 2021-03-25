#include <NickEngine.h>


class Sandobx : public Engine::Application {
public:
	Sandobx() {

	}
	~Sandobx() {

	}
};
// all code will be managed from the engine side
Engine::Application* Engine::CreateApplication() {
	return new Sandobx();
}