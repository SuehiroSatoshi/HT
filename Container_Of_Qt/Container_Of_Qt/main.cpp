#include <QtCore/QCoreApplication>
#include <QList>
#include <QString>
#include <QMap>
#include <QVector>
#include <QLinkedList>
#include <QStack>
#include <QQueue>
#include <QHash>
#include <QSet>
#include <QMultiMap>
#include <QMultiHash>
#include <QDebug>
#include "Containers.h"

//It's a Demo show how to use QT's Container
void UseList();
void UseVector();
void UseLinkedList();
void UseHash();
void UseMap();
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	UseList();
	UseVector();
	UseLinkedList();
	UseHash();
	UseMap();
	return a.exec();
}
void UseList()
{
	QListDemo *Listdemo = new QListDemo;
	Listdemo->CreatQList(QString::fromLocal8Bit("List"));
	Listdemo->InsertQList(2,QString::fromLocal8Bit(" x "));
	Listdemo->DeleteQList(2);
	qDebug() << QString::fromLocal8Bit("查询位置的字符为")+Listdemo->FindQList(3);
}
void UseVector()
{
	QVectorDemo *Vectordemo = new QVectorDemo;
	Vectordemo->CreatQVector(QString::fromLocal8Bit("Vector"));
	Vectordemo->InsertQVector(3, QString::fromLocal8Bit(" x "));
	Vectordemo->DeleteQVector(3);
	qDebug() << QString::fromLocal8Bit("查询位置的字符为") + Vectordemo->FindQVector(5);
}
void UseLinkedList()
{
	QLinkedListDemo *LinkedListDemo = new QLinkedListDemo;
	LinkedListDemo->CreatQLinkedList(QString::fromLocal8Bit("LinkedList"));
	LinkedListDemo->InsertQLinkedList(5, QString::fromLocal8Bit(" x "));
	LinkedListDemo->DeleteQLinkedList(5);
	qDebug() << QString::fromLocal8Bit("查询位置的字符为") + LinkedListDemo->FindQLinkedList(9);
}
void UseHash()
{
	QHashDemo *HashDemo = new QHashDemo;
	//使用Qstring和int
	QVector<QString> *inputstring = new QVector < QString >;
	QVector<int> *inputint = new QVector < int >;
	for (int i = 0; i < QString("Hash").length(); i++)
	{
		inputstring->append(QString(QString("Hash").at(i)));
		inputint->append(i+1);
	}
	HashDemo->CreatQHash(inputstring, inputint);
	HashDemo->InsertQHash(&QVector<QString>(1, QString("X")), &QVector<int>(1, 8));

	//使用pair
	QVector<QPair<QString, int>> *inputpair = new QVector<QPair<QString, int>>;
	for (int i = 0; i < QString("Hash").length(); i++)
	{
		QPair<QString, int> temppair(QString(QString("Hash").at(i)), i + 1);
		inputpair->append(temppair);
	}
	HashDemo->CreatQHash(inputpair);
	HashDemo->InsertQHash(&QVector<QPair<QString, int>>(1, qMakePair(QString("X"), 8)));
	
	HashDemo->DeleteQHash(QString("X"));
	qDebug() << QString::fromLocal8Bit("所查询键h的值为") + QString::number(HashDemo->FindQHash(QString("h")));

}

void UseMap()
{
	QMapDemo *MapDemo = new QMapDemo;
	//使用Qstring和int
	QVector<QString> *inputstring = new QVector < QString >;
	QVector<int> *inputint = new QVector < int >;
	for (int i = 0; i < QString("Map").length(); i++)
	{
		inputstring->append(QString(QString("Map").at(i)));
		inputint->append(i + 1);
	}
	MapDemo->CreatQMap(inputstring, inputint);
	MapDemo->InsertQMap(&QVector<QString>(1, QString("X")), &QVector<int>(1, 8));

	//使用pair
	QVector<QPair<QString, int>> *inputpair = new QVector<QPair<QString, int>>;
	for (int i = 0; i < QString("Map").length(); i++)
	{
		QPair<QString, int> temppair(QString(QString("Map").at(i)), i + 1);
		inputpair->append(temppair);
	}
	MapDemo->CreatQMap(inputpair);
	MapDemo->InsertQMap(&QVector<QPair<QString, int>>(1, qMakePair(QString("X"), 8)));

	MapDemo->DeleteQMap(QString("X"));
	qDebug() << QString::fromLocal8Bit("所查询键p的值为") + QString::number(MapDemo->FindQMap(QString("p")));

}