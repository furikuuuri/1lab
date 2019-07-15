#include "pch.h"
#include <iostream>
#define str_len 30 
#define size 30  
#define CurrentYear 2019
int choice;
using namespace std;

struct Car
{
	char Mark[str_len];             //Марка машины
	char Colors[str_len];           //Цвет машины
	int FuctoryNumber;             //Заводской номер
	int DateOfRelease;             //Год выпуска
	int DateOfTheLastCheckup;      //Последний техосмотр
	char TypeOfBody[str_len];      //Вид кузова
	char Owner[str_len];            //Фамилия владельца
};


struct Car list_of_car[size];
struct Car bad;
int current_size = 0;

void enter_new()                   //Ввод информации об машинах
{
	cout << "Ввод информации" << endl;
	if (current_size < size)
	{
		cout << "Машина номер ";
		cout << current_size + 1;                   //Какая машина по счету в списке

		cout << endl << "Введите Марка машины " << endl;         
		cin >> list_of_car[current_size].Mark;        //Ввод марки машины 

		cout << "Введите Цвет машины" << endl;
		cin >> list_of_car[current_size].Colors;         //Ввод цвета машины

		cout << "Введите Заводской номер" << endl;
		cin >> list_of_car[current_size].FuctoryNumber;       //Ввод заводского номера машины

		cout << "Введите Год выпуска " << endl;
		cin >> list_of_car[current_size].DateOfRelease;              //Ввод года,в котором была выпущена машина

		cout << "Введите Последний техосмотр" << endl;
		cin >> list_of_car[current_size].DateOfTheLastCheckup;         //Ввод года,в котором был пройден техосмотр

		cout << "Введите Вид кузова" << endl;
		cin >> list_of_car[current_size].TypeOfBody;                  //Ввод вида кузова

		cout << "Введите Владелец" << endl;
		cin >> list_of_car[current_size].Owner;                      //Ввод влдаельца
		current_size++;
		cout << "-----------------------------------------------------------------------------------------------------" << endl;
	}
	else
		cout << "Введено максимальное кол-во строк";
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;
}
//Ввод информации об машинах

void out()                             //Вывод информации об машине
{
	int sw, n;
	cout << "1-вывод Машины под каки то номером в списке" << endl;
	cout << "2-вывод списка всех машин" << endl;
	cin >> sw;
	if (sw == 1)                       //Вывод конкретной машины из списка,"n" определяет номер в списке
	{
		cout << "Номер нужной машины в списке " << endl;   
		cin >> n;  cout << endl;

		cout << "Марка автомобиля:";
		cout << list_of_car[n - 1].Mark << endl;

		cout << "Цвет Автомобиля:";
		cout << list_of_car[n - 1].Colors << endl;

		cout << "Заводской номер автомобиля:";
		cout << list_of_car[n - 1].FuctoryNumber << endl;

		cout << "Год,в котором была выпущена машина:";
		cout << list_of_car[n - 1].DateOfRelease << endl;

		cout << "Год,в котором был пройден последний техосмотр:";
		cout << list_of_car[n - 1].DateOfTheLastCheckup << endl;

		cout << "Вид кузова:";
		cout << list_of_car[n - 1].TypeOfBody << endl;

		cout << "Владелец:";
		cout << list_of_car[n - 1].Owner << endl;
		cout << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
		
	}
	if (sw == 2)                                       //Вывод всех машин в списке
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << "Марка автомобиля:";
			cout << list_of_car[i].Mark << endl;

			cout << "Цвет Автомобиля:";
			cout << list_of_car[i].Colors << endl;

			cout << "Заводской номер автомобиля:";
			cout << list_of_car[i].FuctoryNumber << endl;

			cout << "Год,в котором была выпущена машина:";
			cout << list_of_car[i].DateOfRelease << endl;

			cout << "Год,в котором был пройден последний техосмотр:";
			cout << list_of_car[i].DateOfTheLastCheckup << endl;

			cout << "Вид кузова:";
			cout << list_of_car[i].TypeOfBody << endl;

			cout << "Владелец:";
			cout << list_of_car[i].Owner << endl;
			cout << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
		}
	}
	cout << "Что дальше?Введите:" << endl;
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl;
	cout << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;

} //Вывод информации об машине
//Вывод информации об машине

void DelAll()                        //удаление информации о всех машинах
{
	for (int i = 0; i < size; i++)
		list_of_car[i] = bad;
	current_size = 0;
	cout << "Информация очищена" << endl;
	cout << "Что дальше?" << endl;
	cout << "Введите:" << endl;
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl;
	cout << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;

}
//удаление информации о всех машинах  

void Delete1() {
	int d, del;
	cout << "номер машины в списке,о которой необходимо удалить информацию:" << endl;
	cin >> d;
		for (del = (d - 1); del < current_size; del++)//удаление заданной записи
			list_of_car[del] = list_of_car[del + 1];//замещаем структуры на следующую за ней
	current_size = current_size - 1;//раз мы удалили запись то и их кол -во уменьшится
	cout << "Информация очищена" << endl;
	cout << "Что дальше?" << endl;
	cout << "Введите:" << endl;
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl;
	cout << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;
}
  //Удаление информации об 1 конкретной машине по номеру списка

void SearchOwner()
{ 
	int i;
	char Owner1[str_len];
	int stroka = 1;
	cout << "введите имя владельца" << endl;
	cin >> Owner1;
	for (i = 0; i < size; i++)
	{
		if (strcmp(Owner1, list_of_car[i].Owner) == 0)
		{
			cout << "Владелец найден:" << endl;
			cout << "Машина по этому владельцу находиться под " << stroka << "№ в списке" << endl;

			cout << "Марка автомобиля:";
			cout << list_of_car[i].Mark << endl;

			cout << "Цвет Автомобиля:";
			cout << list_of_car[i].Colors << endl;

			cout << "Заводской номер автомобиля:";
			cout << list_of_car[i].FuctoryNumber << endl;

			cout << "Год,в котором была выпущена машина:";
			cout << list_of_car[i].DateOfRelease << endl;

			cout << "Год,в котором был пройден последний техосмотр:";
			cout << list_of_car[i].DateOfTheLastCheckup << endl;

			cout << "Вид кузова:";
			cout << list_of_car[i].TypeOfBody << endl;

			cout << "Владелец:";
			cout << list_of_car[i].Owner << endl;
			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------" << endl;
		}
		stroka++;

	}
	cout << "Информация очищена" << endl;
	cout << "Что дальше?" << endl;
	cout << "Введите:" << endl;
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl;
	cout << endl;
	cin >> choice;
}
//Поиск машины по владельцу

void SearchFuctoryNumber() {
	int i, stroka1 = 1;
	int FuctoryNumber1;
	cout << "Введите номер машины" << endl;
	cin >> FuctoryNumber1;
	for (i = 0; i < size; i++){
		if (FuctoryNumber1 == list_of_car[i].FuctoryNumber)
		{
			cout << "Номер машины найден:" << endl;
			cout << "Машина по этому номеру находиться под " << stroka1 << "№ в списке" << endl;

			cout << "Марка автомобиля:";
			cout << list_of_car[i].Mark << endl;

			cout << "Цвет Автомобиля:";
			cout << list_of_car[i].Colors << endl;

			cout << "Заводской номер автомобиля:";
			cout << list_of_car[i].FuctoryNumber << endl;

			cout << "Год,в котором была выпущена машина:";
			cout << list_of_car[i].DateOfRelease << endl;

			cout << "Год,в котором был пройден последний техосмотр:";
			cout << list_of_car[i].DateOfTheLastCheckup << endl;

			cout << "Вид кузова:";
			cout << list_of_car[i].TypeOfBody << endl;

			cout << "Владелец:";
			cout << list_of_car[i].Owner << endl;
			cout << endl;
			cout << "-----------------------------------------------------------------------------------------------------" << endl;
		}
		stroka1++;
    }
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;
}

//Поиск машины по заводскому номеру
void CheckupInvite()
{
	int i;
	int count = 1;
	for (i = 0; i < size; i++) {
		cout << "Машина под номером  " << count <<"в списке"<< endl;
		if (list_of_car[i].DateOfTheLastCheckup >= (CurrentYear - 1))
		{
			cout << "Вам не нужен техосмотр" << endl;
		}
		else
		{
			cout << "Мы приглашаем вас на техосмотр"<<endl ;
		}
		count++;

	}
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl; cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cin >> choice;
}
//Приглашение на техосмотр

int main()
{
	setlocale(LC_CTYPE, "Russian");

	cout << "Введите:" << endl; 
	cout << "1-для ввода информации о машине(ах)" << endl;
	cout << "2-для вывода информации о машине(ах)" << endl;
	cout << "3-для удаления информации о машине" << endl;
	cout << "4-для удаления информации о всех машинах" << endl;
	cout << "5-поиск машины по владельцу" << endl;
	cout << "6-поиск машины по номеру" << endl;
	cout << "7-для вывода машин у которых просрочен техосмотр" << endl;
	cout << "8-для выхода" << endl;
	cin >> choice;
	cout << "-----------------------------------------------------------------------------------------------------"<<endl;
	do
	{
		switch (choice)
		{
		
		case 1:  enter_new();  break;          //функция ввода
		
		case 2:  out();	break;                      //функция вывода 

		case 3: Delete1(); break;                       //функция удаления об одной машине из списка

		case 4:DelAll(); break;                      //функция удаления всей информации о машинах

		case 5: SearchOwner(); break;                 //функция поиска по владельцу

		case 6:SearchFuctoryNumber(); break;              //функция поиска по заводскому номеру

		case 7:CheckupInvite(); break;                     //функция для приглашения на техосмотр
		}
	} while (choice != 8);              
}


