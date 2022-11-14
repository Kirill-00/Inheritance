#include<iostream>
#include<fstream>
using namespace std;

//#define WRITE_TO_FILE
#define READ_FROM_FILE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	std::ofstream fout;  //1) Создаем поток
	fout.open("File.txt", std::ios::app); //2) Открываем в поток
	//std::ios::app - не переписывать файл, а дописывать в конце файла
	fout << "Hello Files!" << endl;//3) Пишем в поток
	fout.close();        //4) Закрываем поток

	system("notepad File.txt"); //Функция System() запускае любую программу к которой есть путь в виндовс  
#endif // WRITE_TO_FILE

	ifstream fin("File.txt");
	if (fin.is_open())
	{
		//Будм читать файл
		const int SIZE = 256;
		char buffer[SIZE] = {};
		while (!fin.eof())
		{
			fin >> buffer;
			cout << buffer << endl;
		}
		fin.close();
	}
	else
	{
		std::cerr << "Error: file not found" << endl;
	}
}