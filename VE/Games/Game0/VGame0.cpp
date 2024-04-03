#include <Game0/VGame0.h>
using namespace VE::Window;
using namespace VE::Graphics;
using namespace VE::Resources;
class GameData0
{
public:
	VWindow* wnd = nullptr;
	VGraphics* ge = nullptr;
	VResourceChief* rc = nullptr;
}self = {};

void G0Start()
{
	////INIT WINDOW
	self.wnd = new VWindow(L"I LOVE C++", 0U, 0U, VE::VAPI::WINDOWS);
	////INIT GRAPHICS ENGINE
	self.ge = new VGraphics(self.wnd);
	////INIT RESOURCE MANAGER
	self.rc = new VResourceChief();

	self.rc->LoadResourceFromFileAuto(L"Games\\Game0\\Shaders\\VertexShader.hlsl", "vsmain");
}

void G0Update()
{
	self.wnd->Update();
	self.ge->ClearScreenColor(1, 0, 0, 1);
	self.ge->Present();
}
