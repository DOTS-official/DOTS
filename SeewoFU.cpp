#include <iostream>
#include <windows.h>
#include <conio.h> 
#include <fstream>
using namespace std;
int main()
{
	HWND cmd =FindWindow("ConsoleWindowClass",NULL);
	SetWindowPos(cmd,HWND_BOTTOM,0,0,0,0,SWP_HIDEWINDOW | SWP_NOOWNERZORDER);
	ifstream infile("EUC.bin",ios::in);//EUC��֤ 
	if(!infile) {MessageBoxA(0,"����֤�豸,����ʹ�ñ������","DOTS_CopyRight 2023",MB_TOPMOST|MB_ICONERROR);}//δ�����ļ�
	string s;//�����洢�����ñ���
	while(infile>>s)//�����ļ���
	if(s=="1"){
		while(1)
		{
			HWND sw=FindWindow(NULL,"ϣ�ֹܼ�");
			HWND swf =GetForegroundWindow(); 
				if (sw!=0||sw==swf){
				SetWindowPos(sw,HWND_BOTTOM,0,0,0,0,SWP_HIDEWINDOW | SWP_NOOWNERZORDER);
				}
			Sleep(5000);
		}
	}
	else{exit;} 
	return 0;
}
