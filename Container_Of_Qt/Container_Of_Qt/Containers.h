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
#include <QPair>
//创建，插入，删除，查询功能
class QListDemo
{
public:
	void CreatQList(QString inputstring);
	void InsertQList(int Location,QString insertstr);
	void DeleteQList(int Location);
	QString FindQList(int Location);
	QString listtoString(QList<QString> *inputlist);
private:
	QList<QString> *MyQList =NULL;
};

class QVectorDemo
{
public:
	void CreatQVector(QString inputstring);
	void InsertQVector(int Location, QString insertstr);
	void DeleteQVector(int Location);
	QString FindQVector(int Location);
	QString vectortoString(QVector<QString> *inputlist);

private:
	QVector<QString> *MyQVector = NULL;
};

class QLinkedListDemo
{
public:
	void CreatQLinkedList(QString inputstring);
	void InsertQLinkedList(int Location, QString insertstr);
	void DeleteQLinkedList(int Location);
	QString FindQLinkedList(int Location);
	QString QLinkedListtoString(QLinkedList<QString> *inputlist);

private:
	QLinkedList<QString> *MyQLinkedList = NULL;
};

class QHashDemo
{
public:
	void CreatQHash(QVector<QString> *inputkey,QVector<int> *inputvalue);//使用两个vector初始化
	void CreatQHash(QVector<QPair<QString, int>> *inputkey_value);//使用pair初始化
	void InsertQHash(QVector<QPair<QString, int>> *inputkey_value);
	void InsertQHash(QVector<QString> *inputkey, QVector<int> *inputvalue);
	void DeleteQHash(QString inputkey);
	int FindQHash(QString inputkey);
	QString QHashtoString(QHash<QString, int> *inputhash);
private:
	QHash<QString, int> *MyQHash = NULL;
};

class QMapDemo
{
public:
	void CreatQMap(QVector<QString> *inputkey, QVector<int> *inputvalue);//使用两个vector初始化
	void CreatQMap(QVector<QPair<QString, int>> *inputkey_value);//使用pair初始化
	void InsertQMap(QVector<QPair<QString, int>> *inputkey_value);
	void InsertQMap(QVector<QString> *inputkey, QVector<int> *inputvalue);
	void DeleteQMap(QString inputkey);
	int FindQMap(QString inputkey);
	QString QMaptoString(QMap<QString, int> *inputhash);
private:
	QMap<QString, int> *MyQMap = NULL;
};