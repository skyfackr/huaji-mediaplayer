// 滑稽.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
musicsystem music;
int getnum;
int main()
{
	sys("color 02");
	cout << "加载开始！\n";
	music.loadu(L"MEGALOVANIA.mp3");
	reset:
	cout << "你想干喵？\n1：播放\n2：暂停\n3：状态\n4：停止\n5：退出\n做出你的选择！";
	try
	{
		getnum = pressint();
		switch (getnum)
		{
		case 1:
			on();
			goto reset;
			break;
		case 2:
			musicpause();
			goto reset;
			break;
		case 3:
			status();
			goto reset;
			break;
		case 4:
			off();
			goto reset;
			break;
		case 5:
			off();
			cout << "溜了\a\n";
			exit(0);
			break;
		}
		sys("cls");
		cout << "未知输入！\n";
		goto reset;
	}
	catch (ioerr::inputerr)
	{
		sys("cls");
		cout << "未知输入！\n";
		goto reset;
	}
	return 0;
}

