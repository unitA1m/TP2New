#define CRT_SECURE_NO_WARNINGS
#include "coord.h"
#include "queue.h"
#include <iostream>
#include <time.h>
using namespace std;



void CoordInizilization(Coord& obj)
{
	int x, y, z;
	cout << "Введите x координату: " << endl;
	cin >> x;
	cout << "Введите y координату: " << endl;
	cin >> y; 
	cout << "введите z координату: " << endl; 
	cin >> z;  
	system("cls");
	obj.Inizilization(x, y, z);

}

void ShowCoord(Coord& obj)
{
	obj.GetCoord();
}

void UnaryPostfixOperations(Coord& obj)
{
	cout << "Какой операцией вы хотите воспользоваться?" << endl; int choice;
	cout << "1 - Постфиксный инкремент (item++) (Увеличить одно из значний координаты на максимальное число)" << endl;
	cout << "2 - Постфиксный дикремент (item--) (Увеличить одно из значний координаты на минимальное число)" << endl;
	cin >> choice;
	system("cls");
	int a;
	switch (choice)
	{
	case 1:

		obj++;

		system("cls"); break;
	case 2:

		obj--;

		system("cls"); break;
	}



}


void UnaryPrefixOperator(Coord& obj)
{
	cout << "Какой операцией вы хотите воспользоваться?" << endl; int choice;
	cout << "1 - Префиксный инкремент (++item) (Увеличить одно из значний координаты на заданное число)" << endl;
	cout << "2 - Префиксный дикремент (--item) (Уменшить одно из значний координаты на заданное число)" << endl;
	cin >> choice;
	system("cls");
	int a;
	switch (choice)
	{
	case 1: 
		++obj;

		system("cls"); break;

	case 2: 

		--obj;

		system("cls"); break;
	}

}




void FirstTask(Coord* CoordList)
{
	int work = 1;
	int MenuSection;
	int CoordListSection = 0;
	while (work)
	{
		cout << "<---------- Главное Меню ---------->" << endl;
		cout << "1: Ввод значений координат" << endl;
		cout << "2: Показать координты" << endl;
		cout << "3: Унарные постфиксные  операции" << endl;
		cout << "4: Унарные префиксные операции" << endl;
		cout << "5: Перейти к выбору задания" << endl;
		cout << "6: Выход из программы" << endl;
		cin >> MenuSection;
		system("cls");
		switch (MenuSection)
		{
		case 1:CoordInizilization(CoordList[CoordListSection]); break;
		case 2:ShowCoord(CoordList[CoordListSection]); break;
		case 3:UnaryPostfixOperations(CoordList[CoordListSection]); break;
		case 4:UnaryPrefixOperator(CoordList[CoordListSection]); break;
		case 5:work = 0; break;
		case 6:exit(0); break;


		}
	}

}


void SecondTask(Queue* QueList)
{
	srand(time(NULL));
	
	int work=999, MenuSection,value=0;
	int queue_size;
	Queue st(value);
	Queue qw(value);
	
	
    while (work)
    {
		system("cls");
        cout << "<---------- Главное Меню ---------->" << endl;
        cout << "1 - Добавить новый элемент" << endl;
        cout << "2 - Бросить элемент в начало" << endl;
        cout << "3 - Вывести все элементы" << endl;
        cout << "4 - Арифметические действия с очередями" << endl;
        cout << "5 - Арифметические действия внутри очереди" << endl;
        cout << "6 - Удаление элемента из очереди" << endl;
		cout << "7 - Создание очередей" << endl;
		cout << "8 - Удаление очередей" << endl;
        cout << "0 - Выход в выбор задания" << endl;
        cout << "--> ";
        cin >> MenuSection;

        switch (MenuSection)
        {
        case 1:{
			cout << "Выберете очередь:st(1) или qw(2) " << endl;
			int ss; cin >> ss;
			if (ss == 1) {
				cout << "Enter value: " << endl;
				value=5+rand()%25;
				st.push(value);
				queue_size++;
				cout << "Value added\n " << endl;
			}
			else {
				cout << "Enter value: " << endl;
				value = 5 + rand() % 25;
				qw.push(value);
				queue_size++;
				cout << "Value added\n " << endl;
			}
			system("pause");
        } break;
        case 2:{
			cout << "Выберете очередь:st(1) или qw(2)" << endl;
			int ss; cin >> ss;
			if (ss == 1) {
				if (!st)
				{
					cout << "Queue is Empty\n ";
					system("pause");
					break;
				}
				else
				{

					value = st.pop();
					cout << "Extracted element: " << value << endl;
					system("pause");
				}
			}
			else {
				if (!qw)
				{
					cout << "Queue is Empty\n ";
					system("pause");
					break;
				}
				else
				{

					value = qw.pop();
					cout << "Extracted element: " << value << endl;
					system("pause");
				}
			}
           
        }break;
        case 3: {
            if (!st | !qw)
            {
                cout << "Queue is Empty\n" << endl;
				system("pause");
                break;
            }
            else
            {

                st.print();
                cout << "\n";
				cout << "Очередь st" << endl;
				cout << "\n";
				qw.print();
				cout << "Очередь qw" << endl;
				cout << "\n";
				system("pause");
            }
        }break;
		case 4: {
			system("cls");
			int asd = 0;
			cout << "Что будем делать с очередями?" << endl;
			cout << "1-Сложить очереди" << endl;
			cout << "2-Вычесть очереди" << endl;
			cout << "3-Умножить очереди" << endl;
			cout << "4-Поделить очереди" << endl;
			cin >> asd;
			switch (asd)
			{
			case 1: {
				st.print();
				cout << "\n" << endl;
				qw.print();
				st + qw;
				cout << "\n" << endl;
				st.print();
				system("pause");
			}break;
			case 2: {
				st.print();
				cout << "\n" << endl;
				qw.print();
				st - qw;
				cout << "\n" << endl;
				st.print();
				system("pause");
			}break;
			case 3: {
				st.print();
				cout << "\n" << endl;
				qw.print();
				st * qw;
				cout << "\n" << endl;
				st.print();
				system("pause");
			}break;
			case 4: {
				st.print();
				cout << "\n" << endl;
				qw.print();
				st / qw;
				cout << "\n" << endl;
				st.print();
				system("pause");
			
			}break;
			}

		}break;
		case 5: {system("cls");
			int asd = 0;
			cout << "Что будем делать с очередью?" << endl;
			cout << "1-Добавить опеределенное число к элементам" << endl;
			cout << "2-Вычесть опеределенное число из элементов" << endl;
			cout << "3-Умножить на опеределенное число элементы" << endl;
			cout << "4-Поделить на опеределенное число элементы" << endl;
			cin >> asd;
			switch (asd)
			{
			case 1: {
				system("cls");
				cout << "Введите число: " << endl;
				int t ;
				cin >> t;
				st.print();
				cout << "\n" << endl;
				st += t;
				st.print();
				system("pause");
			}break;
			case 2: {
				system("cls");
				cout << "Введите число: " << endl;
				int t;
				cin >> t;
				st.print();
				cout << "\n" << endl;
				st -= t;
				st.print();
				system("pause");
			}break;
			case 3: {
				system("cls");
				cout << "Введите число: " << endl;
				int t;
				cin >> t;
				st.print();
				cout << "\n" << endl;
				st *= t;
				st.print();
				system("pause");
			}break;
			case 4: {
				system("cls");
				cout << "Введите число: " << endl;
				int t;
				cin >> t;
				st.print();
				cout << "\n" << endl;
				st /= t;
				st.print();
				system("pause");

			}break;
			}

		}break;
		case 6: { 
			cout << "Выберете очередь:st(1) или qw(2)" << endl;
			int ss; cin >> ss;
			if (ss == 1) {
				if (!st)
				{
					cout << "Queue is Empty\n" << endl;
					break;
				}
				else
				{

					st.del();
					queue_size--;
					cout << "Success! The resulting queue: " << endl;
					if (!st)
					{
						cout << "Queue is Empty\n" << endl;
						break;
					}
					st.print();
					cout << "\n";
				}
			}
			else {
				if (!qw)
				{
					cout << "Queue is Empty\n" << endl;
					break;
				}
				else
				{

					qw.del();
					queue_size--;
					cout << "Success! The resulting queue: " << endl;
					if (!qw)
					{
						cout << "Queue is Empty\n" << endl;
						break;
					}
					qw.print();
					cout << "\n";
				}
			}
			}break;
		case 7: {
			queue_size = 0;
			queue_size = 5 + rand() % 25;
			for (int i = 0; i < queue_size - 1; i++)
			{
				value = 5 + rand() % 25;
				st.push(value);
				
				
			}
			cout << "Создана очередь st" << endl;
			queue_size = 5 + rand() % 25;
			for (int i = 0; i < queue_size - 1; i++)
			{
				value = 5 + rand() % 25;
				qw.push(value);
				
			}
			cout << "Создана очередь qw" << endl;
			system("pause");
		}break;
		case 8: {
			st.~Queue();
			qw.~Queue();
		}break;
        case 0:
            cout << "\n";
            work = 0;
            break;
        default:
            cout << "\n";
            work = 0;
            break;
        }
    }
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int work = 1; 
	Coord* CoordList = new Coord[5];
	Queue* QueList = NULL;
	while (work) {
		cout << "Выберите с каким заданием вы будете работать?" << endl << "1 - Унарные операции" << endl << "2 - Бинарные операции" << endl;
		cout << "3 - Выход из программы" << endl;
		int choice; cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
			FirstTask(CoordList);
			break;
		case 2: 
			SecondTask(QueList);
			break;

		case 3: exit(0);


		default:cout << "error";
			break;
		}

	}



}