
#include "direntcpp.hh"

#include <iostream>

int main(void)
{

	direntcpp::dir dir("/dev");

	while(const direntcpp::entry *entry = dir.readdir())
	{
        if(entry->type() == direntcpp::DIRENT_DIR)
            std::cout << entry->name() << std::endl;
	}




	return 0;
}

//
// Local Variables:
// mode: C++
// c-file-style: "bsd"
// c-basic-offset: 4
// indent-tabs-mode: nil
// End:
//
