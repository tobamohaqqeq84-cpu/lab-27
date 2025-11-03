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
            if (inc_friend(db,name))
                cout << name << "friendship increased. \n";
            else
                 cout << "villager not found.\n";
                 cout << "villager details:\n";
                    print_all(db);
            }else if (choice == 2){
        string name = read_line("villager name: ");
            if (dec_friend(db,name))
                    cout << name << "friendship decreased. \n";
            else
                    cout << "villager not found.\n";
                    cout << "villager details:\n";
                        print_all(db);}
            else if (choice == 3) {
                string name = read_line("villager name: ");
                if (!search_villager(db,name))
                    cout << "villager not found. \n";
                    cout << "villager details.\n";
                    print_all(db);}
            else{
                cout << "Please enter 1-4. \n";}
            
             }
        
        }else {
        while (true){
            int choice = menu_4();
            if (choice == 6) break;

            if (choice == 1){
                string name = read_line("villager name: ");
                int frienship = read_int("friendship level (0-10): ");
                string species = read_line("species: ");
                string catchphrase = read_line("catchphrase: ");
            if (add_villager(db,name,frienship,species,catchphrase))
                cout << name << "added. \n";
            else
                cout << "Could not add. \n";
                cout << "villager details:\n";
                print_all(db);}
        
            else if (choice == 2){
                string name = read_line("villager name: ");
                if (delete_villager(db,name))
                    cout << name << "deleted. \n";
                else
                    cout << "villager not found. \n";
                    cout << "villager details:\n";
                    print_all(db);}
                
            else if (choice == 3){
                string name = read_line("villager name: ");
                if (inc_friend(db,name))
                    cout << name << "friendship increased. \n";
                else
                    cout << "villager not found. \n";
                    cout << "villager details:\n";
                    print_all(db);}
                
            else if (choice == 4){
                string name = read_line("villager name: ");
                if (dec_friend(db,name))
                    cout << name << "friendship decreased. \n";
                else
                    cout << "villager not found. \n";
                    cout << "villager details:\n";
                    print_all(db);}
                
            else if (choice == 5){
                string name = read_line("villager name: ");
                if (!search_villager(db,name))
                    cout << "villager not found. \n";
                    cout << "villager details:\n";
                    print_all(db);}
                else{
                    cout << "Please enter 1-6. \n";
            }
        
            
        }
        
    
    }
    return 0;
}

void print_all(const villagerMap& db){
    for (auto it = db.begin(); it != db.end(); ++it){
        const string& name = it -> first;
        const villagerInfo& info = it -> second;
        int f = get<0>(info);
        const string sp = get<1>(info);
        const string cp = get<2>(info);
        cout << name << " [" << f << ", " << sp << ", " << cp << "]\n";
    }
}
villagerMap::iterator find_villager(villagerMap& db, const string& name);

int clamp_friend(int v){
    if (v < MIN_FRIEND) return MIN_FRIEND;
    if (v > MAX_FRIEND) return MAX_FRIEND;
    return v;
}
bool inc_friend(villagerMap& db, const string& name){
    auto it = find_villager(db,name);
    if (it == db.end()) return false;
    villagerInfo& info = it -> second;
    int f = get<0>(info);
    f = clamp_friend(f + 1);
    info = villagerInfo(f,get<1>(info),get<2>(info));
    return true;
}
bool dec_friend(villagerMap& db, const string& name){
    auto it = find_villager(db,name);
    if (it == db.end()) return false;
    villagerInfo& info = it -> second;
    int f = get<0>(info);
    f = clamp_friend(f - 1);
    info = villagerInfo(f,get<1>(info),get<2>(info));
    return true;
}
bool search_villager(villagerMap& db, const string& name){
    auto it = find_villager(db,name);
    if (it == db.end()) return false;
    const villagerInfo& info = it -> second;
    cout <<"Found: " << name << " [" << get<0>(info) << ", " << get<1>(info) << ", " << get<2>(info) << "]\n"; 
    return true;
}
bool add_villager(villagerMap& db, const string& name, int friendship, const string& species, const string& catchphrase){
    if(friendship <)
}
