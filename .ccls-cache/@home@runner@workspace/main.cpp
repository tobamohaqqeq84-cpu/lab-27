//toba mohaqqeq 
//comsc-210
//lab-27

#include <iostream>
#include <string>
#include<map>
#include<limits>
#include<tuple>
using namespace std;

const int MIN_FRIEND = 0;
const int MAX_FRIEND = 10;

typedef tuple<int,string,string> villagerInfo;
typedef map<string,villagerInfo> villagerMap;

void print_all(const villagerMap& db);
villagerMap::iterator find_villager(villagerMap& db, const string& name);

int clamp_friend(int v);
bool inc_friend(villagerMap& db, const string& name);
bool dec_friend(villagerMap& db, const string& name);
bool search_villager(villagerMap& db, const string& name);
bool add_villager(villagerMap& db, const string& name, int friendship, const string& species, const string& catchphrase);
bool delete_villager(villagerMap& db, const string& name);
string read_line(const string & prompt);
int read_int(const string & prompt);
int menu_3();
int menu_4();

//----------mai fucntion----------

int main (){
    villagerMap db;
    db["Drago"] = villagerInfo(5,  "Alligator", "Snap to It!");
    db["Kyle"]  = villagerInfo(10, "wolf", "Hubba hubba!");
    db["Raymond"] = villagerInfo(1, "Cat", "Nice fit");

    cout << "Initial villlager details:\n";
    print_all(db);

    bool run_m3_menu = false;

    if (run_m3_menu){
        while(true){
            int choice = menu_3();
            if (choice == 4) break;
            if (choice == 1){
               string name = read_line("villager name: ");
               if (inc_friend)
             }
        }
    }
    
}