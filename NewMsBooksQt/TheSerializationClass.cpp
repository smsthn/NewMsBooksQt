#include "TheSerializationClass.h"


void TheSerializationClass::deserializeTheBooks(Str  path)
{
	MassoudBookSerialization::ToSerialize to_serialize;
	std::fstream input(path, std::ios::in | std::ios::binary);
	to_serialize.ParseFromIstream(&input);
	for (const auto& book : to_serialize.allbooks()) {
		QString name = QString::fromStdString(book.name());
		int32_t page_number = book.pages();
		QStringList tags;
		for (const auto& tag : book.tag())tags.push_back(QString::fromStdString(tag));
		QString catagory = QString::fromStdString(book.catagory());
		QString reading_status = QString::fromStdString(book.readingstatus());


		allBooksStd.push_back(std::make_unique<Book>(name, catagory, reading_status, tags, page_number));
		//add_book(name, catagory, reading_status, &tags, page_number);

	}
	auto f = to_serialize.tags_size();
	if (to_serialize.tags_size() > 0) {
		for (const auto& tag : to_serialize.tags()) allTagsStd.push_back(tag);    //add_tag(tag);

	}
}

void TheSerializationClass::serializeBooks(Str path, std::vector<std::unique_ptr<Book>> allBooks, std::vector<std::string> allTags)
{
	MassoudBookSerialization::ToSerialize to_serialize;
	std::fstream output(path, std::ios::out | std::ios::binary | std::ios::trunc);

	for (const auto& book : allBooks) {
		auto* sr_book = to_serialize.add_allbooks();
		sr_book->set_name(book->mName.toStdString());
		sr_book->set_catagory(book->mCatagory.toStdString());
		sr_book->set_pages(book->mPageNumber);
		if (!book->mTags.empty()) {
			for (const auto& tag : book->mTags) {
				std::string tg = tag.toStdString();
				auto* sr_tag = sr_book->add_tag();
				sr_tag = &tg;
			}
		}
	}
	for (auto& tag : allTags) {
		auto* sr_tag = to_serialize.add_tags();
		sr_tag = &tag;
	}

	to_serialize.SerializeToOstream(&output);


	output.close();

//	allBooksStd.push_back(std::make_unique<Book>(name, catagory, reading_status, tags, page_number));
	//add_book(name, catagory, reading_status, &tags, page_number);

}
