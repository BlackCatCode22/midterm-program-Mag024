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

    //1212 provide addition information.......put :Animal(theName, the Species)
public:
    Hyena(int theWeight):Animal("astring01", "aString02") {
        weight = theWeight;

    }



    };

int main()
{
    cout << "Welcome to Animal Class practice 10/2/23 1115!" << endl;

    //create an animal object 1126
    Animal myAnimal = Animal("Scar", "Lion");

    //create an animal object
    Animal myAnimal02 = Animal("Zig", "Hyena");

    //create an animal object
    Animal myAnimal03 = Animal("Ed", "Hyena");

    //1214 create a hyena
    Hyena myHyena = Hyena(70);

    cout << "The Hyena's nanme is: " <<myHyena.getAnimalName();


    // output the objects name 1131
    cout << "\n\n the Animal's Name is: " << myAnimal.getAnimalName() << "\n\n";

    // num of animals not in scope 1151
    //1157 taking out (::) and replacing with dot operator
    cout << "\n\n The Number of Animals is: " << myAnimal.getNumofAnimals() << "\n\n";

    return 0;
}
