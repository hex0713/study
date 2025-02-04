#include <iostream>

using namespace std;

void init();
void update();
void render();
int mainLoop();

int main()
{
	if (mainLoop())
	{
		// 성공적으로 종료 되었습니다.
	}

	

	return 0;
}

int mainLoop()
{
	init();

	while (true)
	{
		update();
		render();
	}

	return true;
}

void init()
{

}

void update()
{
}
void render()
{

}
