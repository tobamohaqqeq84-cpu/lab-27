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
bool add_villager(villagerMap& db, const string& name, int friendship const string& species, const string& hobby catchphrase);