#pragma once
#include "stdafx.h"
#include <functional>
#include "qstring.h"
#include "qstringlist.h"
#include <string>
#include <vector>
#include <Book.h>
#include "MassoudBooksSr.pb.h"
#include<fstream>


class TheSerializationClass
{
	friend class Books;
private:
	typedef const std::string& Str;
	typedef std::vector<std::string>* StrVctr;
	 std::vector<std::unique_ptr<Book>> allBooksStd;
	 std::vector<std::string> allTagsStd;
public:
	//std::function<void(const std::string&)>  add_tag;
	//std::function<void(Str, Str, Str, StrVctr,int32_t)> add_book;
	TheSerializationClass(){}

private:
	void deserializeTheBooks(Str path);

	void serializeBooks(Str path, std::vector<std::unique_ptr<Book>> allBooks, std::vector<std::string> allTags);


};

