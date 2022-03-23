#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {

    // 键值中的key用int型
    SkipList<int, std::string> skipList(6);
	skipList.insert_element(10000, "hhhhh");
    skipList.insert_element(10001, "zzzzz");
    skipList.insert_element(10004, "esdcf");
    skipList.insert_element(10044, "asdfg");

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();

    // skipList.load_file();

    skipList.search_element(10001);

    skipList.display_list();

    skipList.delete_element(10000);
    skipList.delete_element(10001);

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.search_element(10001);

    skipList.display_list();
}
