#include <iostream>
#include <fstream>
#include <string>
/*
* ' ' delimiter, avslutar getline
*/
int main() {

  std::ifstream inFile("names.txt");

  std::string efternamn;
  std::string namn;
  std::string id;
  std::string adress;

/*getlne hämtar in en hel rad. while loop som läser in rader av information tills det inte finns mer.
If satsen kollar den åttonde siffran i personnumret, ifall det är jämt är det en kvinna. om det är ojämt så är det en man. Den skriver även ut vilket*/
    while (std::getline(inFile, namn , ' ')) {
      std::getline(inFile, efternamn);
      std::getline(inFile, id);
      std::getline(inFile, adress);

      std::cout << namn << " " << efternamn << " ";
	
        if(static_cast<int>(id[8])%2 == 0) {
          std::cout << "[F]" << std::endl;
          } else {
            std::cout << "[M]" << std::endl;
        }
      std::cout << adress << std::endl << std::endl;
  }
  inFile.close();
  return 0;
}
