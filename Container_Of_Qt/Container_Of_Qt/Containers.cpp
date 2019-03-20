#include "Containers.h"
//part of Qlist
void QListDemo::CreatQList(QString inputstring)
{
	MyQList = new QList < QString > ;
	for (int i = 0; i < inputstring.length(); i++)
	{
		MyQList->append(QString(inputstring.at(i)));
	}	
	qDebug() << QString::fromLocal8Bit("������һ����List��ֵΪ��") << listtoString(MyQList);
}

void QListDemo::InsertQList(int Location, QString insertstr)
{
	MyQList->insert(Location,insertstr);
	qDebug() << QString::fromLocal8Bit("������һ��ֵ��List��Ϊ��") << listtoString(MyQList);
}
void QListDemo::DeleteQList(int Location)
{
	MyQList->removeAt(Location);
	qDebug() << QString::fromLocal8Bit("ɾ����һ��ֵ��List��Ϊ��") << listtoString(MyQList);
}
QString QListDemo::FindQList(int Location)
{
	return MyQList->at(Location);
}
QString QListDemo::listtoString(QList<QString> *inputlist)
{
	QString outputstr;
	for (int i = 0; i < inputlist->length(); i++)
	{
		outputstr += inputlist->at(i);
	}
	return outputstr;
}

//part of QVector
void QVectorDemo::CreatQVector(QString inputstring)
{
	MyQVector = new QVector < QString >;
	for (int i = 0; i < inputstring.length(); i++)
	{
		MyQVector->append(QString(inputstring.at(i)));
	}
	qDebug() << QString::fromLocal8Bit("������һ����Vector��ֵΪ��") << vectortoString(MyQVector);
}

void QVectorDemo::InsertQVector(int Location, QString insertstr)
{
	MyQVector->insert(Location, insertstr);
	qDebug() << QString::fromLocal8Bit("������һ��ֵ��Vector��Ϊ��") << vectortoString(MyQVector);
}

void QVectorDemo::DeleteQVector(int Location)
{
	MyQVector->removeAt(Location);
	qDebug() << QString::fromLocal8Bit("ɾ����һ��ֵ��Vector��Ϊ��") << vectortoString(MyQVector);
}

QString QVectorDemo::FindQVector(int Location)
{
	return MyQVector->at(Location);
}

QString QVectorDemo::vectortoString(QVector<QString> *inputlist)
{
	QString outputstr;
	for (int i = 0; i < inputlist->length(); i++)
	{
		outputstr += inputlist->at(i);
	}
	return outputstr;
}

//part of QLinkedList
void QLinkedListDemo::CreatQLinkedList(QString inputstring)
{
	MyQLinkedList = new QLinkedList < QString >;
	for (int i = 0; i < inputstring.length(); i++)
	{
		MyQLinkedList->push_back(QString(inputstring.at(i)));
	}
	qDebug() << QString::fromLocal8Bit("������һ����QLinkedList��ֵΪ��") << QLinkedListtoString(MyQLinkedList);
}
void QLinkedListDemo::InsertQLinkedList(int Location, QString insertstr)
{
	QLinkedList<QString>::iterator RWIter = MyQLinkedList->begin();
	for (int i = 0; i < Location && RWIter != MyQLinkedList->end(); ++i)
		++RWIter;
	MyQLinkedList->insert(RWIter, insertstr);
	qDebug() << QString::fromLocal8Bit("������һ��ֵ��QLinkedListΪ��") << QLinkedListtoString(MyQLinkedList);
}
void QLinkedListDemo::DeleteQLinkedList(int Location)
{
	QLinkedList<QString>::iterator RWIter = MyQLinkedList->begin();
	for (int i = 0; i < Location && RWIter != MyQLinkedList->end(); ++i)
		++RWIter;
	MyQLinkedList->erase(RWIter);
	qDebug() << QString::fromLocal8Bit("ɾ����һ��ֵ��QLinkedListΪ��") << QLinkedListtoString(MyQLinkedList);
}
QString QLinkedListDemo::FindQLinkedList(int Location)
{
	QLinkedList<QString>::iterator RWIter = MyQLinkedList->begin();
	for (int i = 0; i < Location && RWIter != MyQLinkedList->end(); ++i)
		++RWIter;
	return *RWIter;
}
QString QLinkedListDemo::QLinkedListtoString(QLinkedList<QString> *inputlist)
{
	QString outputstr;
	QLinkedList<QString>::iterator RWIter = MyQLinkedList->begin();
	for (RWIter; RWIter !=MyQLinkedList->end(); ++RWIter)
	{
		outputstr += *RWIter;
	}
	return outputstr;
}

//part of QHash
void QHashDemo::CreatQHash(QVector<QString> *inputkey, QVector<int> *inputvalue)
{
	if (inputkey->length() != inputvalue->length()) return;
	MyQHash = new QHash < QString, int > ;
	for (int i = 0; i != inputkey->length(); i++)
	{
		MyQHash->insert(inputkey->at(i), inputvalue->at(i));
	}
	qDebug() << QString::fromLocal8Bit("ʹ�õ�ֵ��������һ����QHash��ֵ���Ϊ��") << QHashtoString(MyQHash);
}
void QHashDemo::CreatQHash(QVector<QPair<QString, int>> *inputkey_value)
{
	if (inputkey_value == NULL) return;
	MyQHash = new QHash<QString, int>;

	QVector<QPair<QString, int>>::iterator iter=inputkey_value->begin();
	for (iter; iter != inputkey_value->end(); iter++)
	{
		MyQHash->insert(iter->first,iter->second);
	}
	qDebug() << QString::fromLocal8Bit("ʹ��ֵ���Դ�����һ����QHash��ֵ���Ϊ��") << QHashtoString(MyQHash);
}
void QHashDemo::InsertQHash(QVector<QString> *inputkey, QVector<int> *inputvalue)
{
	for (int i = 0; i != inputkey->length(); i++)
	{
		MyQHash->insert(inputkey->at(i), inputvalue->at(i));
	}
	qDebug() << QString::fromLocal8Bit("ʹ�õ�ֵ����������ֵ�������Ϊ��") << QHashtoString(MyQHash);
}
void QHashDemo::InsertQHash(QVector<QPair<QString, int>> *inputkey_value)
{
	QVector<QPair<QString, int>>::iterator iter = inputkey_value->begin();
	for (iter; iter != inputkey_value->end(); iter++)
	{
		MyQHash->insert(iter->first, iter->second);
	}
	qDebug() << QString::fromLocal8Bit("ʹ��ֵ������������ֵ�������Ϊ��") << QHashtoString(MyQHash);
}
void QHashDemo::DeleteQHash(QString inputkey)
{
	QHash<QString, int>::iterator RWIter = MyQHash->begin();
	for (RWIter; RWIter != MyQHash->end(); ++RWIter)
	{
		if (RWIter.key() == inputkey)
		{
			MyQHash->erase(RWIter);
			break;
		}
	}
	qDebug() << QString::fromLocal8Bit("ɾ����һ��ֵ�������Ϊ��") << QHashtoString(MyQHash);
}
int QHashDemo::FindQHash(QString inputkey)
{
	return MyQHash->value(inputkey);
}
QString QHashDemo::QHashtoString(QHash<QString, int> *inputhash)
{
	QString outputstr;
	QHash<QString,int>::const_iterator RWIter = MyQHash->constBegin();//ֻ������������ֻ��ȥ��const
	for (RWIter; RWIter != MyQHash->constEnd(); ++RWIter)
	{
		outputstr += RWIter.key();
		outputstr += QString::number( RWIter.value());
	}
	return outputstr;
}

//part of QMap
void QMapDemo::CreatQMap(QVector<QString> *inputkey, QVector<int> *inputvalue)
{
	if (inputkey->length() != inputvalue->length()) return;
	MyQMap = new QMap < QString, int >;
	for (int i = 0; i != inputkey->length(); i++)
	{
		MyQMap->insert(inputkey->at(i), inputvalue->at(i));
	}
	qDebug() << QString::fromLocal8Bit("ʹ�õ�ֵ��������һ����QMap��ֵ���Ϊ��") << QMaptoString(MyQMap);
}
void QMapDemo::CreatQMap(QVector<QPair<QString, int>> *inputkey_value)
{
	if (inputkey_value == NULL) return;
	MyQMap = new QMap<QString, int>;

	QVector<QPair<QString, int>>::iterator iter = inputkey_value->begin();
	for (iter; iter != inputkey_value->end(); iter++)
	{
		MyQMap->insert(iter->first, iter->second);
	}
	qDebug() << QString::fromLocal8Bit("ʹ��ֵ���Դ�����һ����QMap��ֵ���Ϊ��") << QMaptoString(MyQMap);
}

void QMapDemo::InsertQMap(QVector<QString> *inputkey, QVector<int> *inputvalue)
{
	for (int i = 0; i != inputkey->length(); i++)
	{
		MyQMap->insert(inputkey->at(i), inputvalue->at(i));
	}
	qDebug() << QString::fromLocal8Bit("ʹ�õ�ֵ����������ֵ�������Ϊ��") << QMaptoString(MyQMap);
}
void QMapDemo::InsertQMap(QVector<QPair<QString, int>> *inputkey_value)
{
	QVector<QPair<QString, int>>::iterator iter = inputkey_value->begin();
	for (iter; iter != inputkey_value->end(); iter++)
	{
		MyQMap->insert(iter->first, iter->second);
	}
	qDebug() << QString::fromLocal8Bit("ʹ��ֵ������������ֵ�������Ϊ��") << QMaptoString(MyQMap);
}

void QMapDemo::DeleteQMap(QString inputkey)
{
	QMap<QString, int>::iterator RWIter = MyQMap->begin();
	for (RWIter; RWIter != MyQMap->end(); ++RWIter)
	{
		if (RWIter.key() == inputkey)
		{
			MyQMap->erase(RWIter);
			break;
		}
	}
	qDebug() << QString::fromLocal8Bit("ɾ����һ��ֵ�������Ϊ��") << QMaptoString(MyQMap);
}
int QMapDemo::FindQMap(QString inputkey)
{
	return MyQMap->value(inputkey);
}
QString QMapDemo::QMaptoString(QMap<QString, int> *inputhash)
{
	QString outputstr;
	QMap<QString, int>::const_iterator RWIter = MyQMap->constBegin();//ֻ������������ֻ��ȥ��const
	for (RWIter; RWIter != MyQMap->constEnd(); ++RWIter)
	{
		outputstr += RWIter.key();
		outputstr += QString::number(RWIter.value());
	}
	return outputstr;
}