#pragma once
#include "qstring.h"
#include "qstringlist.h"
#include "Book.h"

class IRequests
{
public:
	enum  MSFlags {
		AddRequest = 0x01,
		ModifyRequest = 0x02,
		RemoveRequest = 0x04,
		RefreshListRequest = 0x08,
		OpenAddWindowRequest = 0x10,
		OpenModifyWindowRequest = 0x20

	};
	
public:
	//IRequests();
	//~IRequests();

	virtual void refreshList(const QString& listName, QStringList list) = 0;
	virtual void sendRequestToDisturbuter(Book& book, MSFlags flags) = 0;


	
};

