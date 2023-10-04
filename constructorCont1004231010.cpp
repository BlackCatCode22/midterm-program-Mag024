#include <iostream>

using namespace std;

class Animal{
   // 1146 only want this int to increase when an animal is created, dont want to be changed in the program
   //1152 moved inline static to public



private:
    string name, habitat, furColor, newLocationCity, newLocationState, previousLocationCity, previousLocationState, species;
    int birthDay, birthMonth, birthYear;
    inline static int numOfAnimals = 0;

public:

    Animal(string theName, string theSpecies) {
        //this is what happens when the constructor is call

        //name is passed to constructor and then assigned to private field, name

        name = theName;

        //theSpecies is padded and assigned to the private field 1125
        species = theSpecies;

        numOfAnimals++;

        }
        // create a getter for name 1138
       string getAnimalName(){
            return name;
            }

            int getNumofAnimals(){
            return numOfAnimals;
                }

    };

    //1207 subclass of hyena is made with public of animal
class Hyena: public Animal{
private:
    int weight;

    // 1047 100423 int numOfHYenas
    inline static int numOfHyenas = 0;

    //1212 provide addition information.......put :Animal(theName, the Species)
public:
    //changed items in Animal() 1027 100423
    //changed formatting in the parenthesis 1038 100423
    Hyena(string aName, string aSpecies):Animal(aName, aSpecies) {
       // taken out for the moment 1041 100423 - weight = theWeight;

       numOfHyenas++;

    }

    // getter for numOfHyenas
            int getNumOfHyenas(){
            return numOfHyenas;



                                }
};

class Lion: public Animal{
private:
    int weight;

    inline static int numOfLions = 0;

public:

    Lion(string aName, string aSpecies):Animal(aName, aSpecies) {

       numOfLions++;

    }

            int getNumOfLions(){
            return numOfLions;
                                }
};

class Tiger: public Animal{
private:
    int weight;

    inline static int numOfTigers = 0;

public:

    Tiger(string aName, string aSpecies):Animal(aName, aSpecies) {

       numOfTigers++;

    }

            int getNumOfTigers(){
            return numOfTigers;
                                }
};

class Bear: public Animal{
private:
    int weight;

    inline static int numOfBears = 0;

public:

    Bear(string aName, string aSpecies):Animal(aName, aSpecies) {

       numOfBears++;

    }

            int getNumOfBears(){
            return numOfBears;
                                }
};


int main()
{
    cout << "Welcome to Animal Class practice 10/2/23 1115! - CONTINUED 10/04023 1103" << endl;

    //create an animal object 1126
    Animal myAnimal = Animal("Scar", "Lion");

    //create an animal object
    Animal myAnimal02 = Animal("Zig", "Hyena");

    //create an animal object
    Animal myAnimal03 = Animal("Ed", "Hyena");

    Hyena myHyena = Hyena ("Kamari", "hyena");

    Hyena myHyena02 = Hyena ("Madoa", "hyena");

    Lion myLion01 = Lion ("Mufasa", "lion");

    Lion myLion02 = Lion ("Simba", "lion");

    Tiger myTiger01 = Tiger ("Sharkan", "tiger");

    Tiger myTiger02 = Tiger ("Stripes", "tiger");

    Tiger myTiger03 = Tiger ("Tony", "tiger");

    Bear myBear01 = Bear ("Baloo", "bear");

    Bear myBear02 = Bear ("Winnie", "bear");

    Bear myBear03 = Bear ("Yogi", "bear");


    //1214 create a hyena
    // made into comment 1027 100423 Hyena myHyena = Hyena(70);

    // made comment statement 1028 100423 cout << "\n\n The Hyena's nanme is: " <<myHyena.getAnimalName() << "\n\n";

    // Create a vector to store Animal Objects
    vector<Animal>animalList;

    string line;
    while (getline(inputFile, Line)){

        // Split the line into the name and species (assuminh they are separated by a space)
        int spacePos = line.find(' ');
        spacePos = line.find(' ');
        spacePos = line.find(' ');
        spacePos = line.find(' ');

        if (spacePOS!= string::npos) {
            string name = line.substr(0,15);
            string species = line.substr (16, 7)
        }
    }

    ifstream inputFile(filePath);

    if (!inputFile.is_open()){
        std::cerr << "Error: unable toopen file"  << filePath << endl;
    }


    //Close the file
    inputFile.close();

    //Print List of animals 1156 100423
    for (const Animal someAnimal: animalList){
        cout << "\n\n Nama:" << animal.getAnimalName() << "\n\n";
        cout << "\n\n Species: " << animal.getNumOfAnimals() << endl;
    }


    // output the objects name 1131
    cout << "\n\n the Animal's Name is: " << myAnimal.getAnimalName() << "\n\n";

    // num of animals not in scope 1151
    cout << "\n\n The Number of Animals is: " << myAnimal.getNumofAnimals() << "\n\n";

    cout << "\n\n the Hyena's Name is: " << myHyena.getAnimalName() << "\n\n";

     cout << "\n\n The Number of Hyena is: " << myHyena.getNumOfHyenas() << "\n\n";

     //new cout statements of animals (lions, tigers and bears) 1121 100423

     cout << "\n\n the Lion's Name is: " << myLion01.getAnimalName() << "\n\n";

     cout << "\n\n The Number of Lions is: " << myLion01.getNumOfLions() << "\n\n";

    cout << "\n\n the Tiger's Name is: " << myTiger01.getAnimalName() << "\n\n";

     cout << "\n\n The Number of Tigers is: " << myTiger01.getNumOfTigers() << "\n\n";

    cout << "\n\n the Bear's Name is: " << myBear01.getAnimalName() << "\n\n";

     cout << "\n\n The Number of Bears is: " << myBear01.getNumOfBears() << "\n\n";

    return 0;
}
