#include <map>
#include <string>
#include <iostream>

int main(){

    std::map<std::string,std::string> numberMap;

    numberMap.insert(std::make_pair("Bets","090-1111-1111"));
    numberMap.insert(std::make_pair("Ohtani","090-1111-2222"));
    numberMap.insert(std::make_pair("Freeman","090-1111-3333"));
    numberMap.insert(std::make_pair("Smith","090-1111-4444"));

    std::cout << "Size of numberMap: " <<numberMap.size() << std::endl;
     for( auto i = numberMap.begin(); i != numberMap.end() ; ++i ) {
      std::cout << i->first << " " << i->second << "\n";
    };

    numberMap.erase("Bets");

    std::cout << "Size of numberMap: " <<numberMap.size() << std::endl;
     for( auto i = numberMap.begin(); i != numberMap.end() ; ++i ) {
      std::cout << i->first << " " << i->second << "\n";
    };

    std::string search_result  = numberMap.at("Ohtani");
    std::cout << "search_result ( Ohtani ): " << search_result << std::endl;


    for( const auto& pair : numberMap ){
        std::cout << pair.first << ':' << pair.second << search_result << std::endl;
    }

return 0;
};



