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
		// ���������� ���� �Ǿ����ϴ�.
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
