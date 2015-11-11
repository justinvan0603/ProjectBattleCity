﻿#include "Game.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPTSTR lpCmdLine, int nCmdShow)
{
	///this is a comment
	Game game;
	if (!game.GameInit(hInstance))
		return false;
	MSG msg;
	ZeroMemory(&msg, sizeof(msg));
	//while (msg.message != WM_QUIT)
	//{
	//	// Kiểm tra các sự kiện được gửi tới trong hàng đợi của ứng dụng
	//	if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
	//	{
	//		TranslateMessage(&msg);
	//		DispatchMessage(&msg);
	//	}
	//	else
	//	{
	//		game.GameRun();
	//		// Game run
	//	}
	//}
	while (true)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				break;
			}
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		game.GameRun();
	}
	return 0;
}