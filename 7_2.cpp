#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool physic;
	bool english; 
};

int main()
{
	const int n = 25;
    int i;
	student a[n] = { 
	{ 1, "Максимов Павел Иванович "      , true, true, true},
	{ 2, "Капустин Эрик Владимирович    "        , true, true, true},
	{ 3, "Архипов Денис Григорьевич"      , true, true, true},
	{ 4, "Пархоменко Альбина Станиславовна", false, true, false},
	{ 5, "Морозов Фёдор Максимович   "    , false, true, true},
	{ 6, "Гайчук Игорь Сергеевич    "        , true, false, true},
	{ 7, "Иваненко Тимофей Александрович"    , true, true, true},
	{ 8, "Виноградов Назар Игоревич"   , true, true, true},
	{ 9, "Ершов Вадим Дмитриевич"  , true, true, true},
	{10, "Гайчук Жанна Романовна"      , true, true, true},
	{11, "Кириленко Елена Евгеньевна   "         , true, true, false},
	{12, "Желиба Дарья Романовна"   , true, false, false},
	{13, "Гришин Максим Валентинович" , true, true, true},
	{14, "Кононов Василий Максимович" , true, true, true},
	{15, "Кобилецький Владислав Юрiйович", false, true, true},
	{16, "Дмитриев Богдан Игоревич", false, true, false},
	{17, "Мельников Олег Никитич"   , true, true, true},
	{18, "Евсеев Игорь Борисович"      , true, true, true},
	{19, "Захарова Лариса Фёдоровна"      , true, true, true},
	{20, "Журавлёв Анастасия Вадимовна"     , false, true, true},
	{21, "Троцкий Леонид Григорьевич"  , false, false, true},
	{22, "Сретенский Илья Романович", true, false, false},
	{23, "Герасименко Олег Ильич" , true, true, true},
	{24, "Мацко Любовь Александровна" , false, true, true},
	{25, "Кравченко Алёна Егоровна    "        , true, true, true}
	};
	setlocale(LC_ALL, "Rus");
    cout << "№" << "\tName                        \tMath\tPhysics\tChemistry\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Pupils who were unable to complete more than one subject:\n";
	cout << "№" << "\tName\tMath\tPhysics\tChemistry\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].physic + (int)a[i].english > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
    cout << "-------------------------------------" << endl;
    return 0;
}



