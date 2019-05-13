#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

struct Point
{
	int x;
	int y;

	Point(int aX, int aY)
	:x(aX), y(aY){

	}
	
};

struct CmpPoint
{
	bool operator() (const Point& a, const Point b) const{
		if(a.x < b.x){
			return true;
		}else if(a.x > b.x){
			return false;
		}else if(a.y < b.y){
			return true;
		}else if(a.y > b.y){
			return false;
		}
		return false;
	}
};

typedef std::map<Point, vector<string>, CmpPoint> CacheMap;
void addCache(CacheMap& m){

	string line;
	getline(cin, line);
	istringstream sinp(line);
	int x; sinp >> x;
	int y; sinp >> y;
	string item;
	while(sinp >> item){
		m[{x, y}].push_back(item);
	}
}

void removeCache(CacheMap& m){

	string line; getline(cin, line);

	istringstream sinp(line);
	int x; sinp >> x;
	int y; sinp >> y;

	cout << (m.erase({x, y}) ? "removed" : "doesn't exist") << endl;
}

void checkCashe(CacheMap& m){

	string line; getline(cin, line);

	istringstream sinp(line);
	int x; sinp >> x;
	int y; sinp >> y;
	auto it = m.find({x, y});
	if(it != m.end()){
		cout << "Found:";
		for(auto& i: it->second){
			cout << " " << i;
		}
		cout << endl;
	}else{
		cout << "there is no cach in here" << endl;
	}
}

void printCache(CacheMap& m){

	for(auto& p: m){
		cout << "(" << p.first.x << ", " << p.first.y << ") ";
		cout << "{";
		for(auto& item: p.second){
			cout << item << "" ;
		}
		cout << "}" << endl;
	}
	
}

int main(){

	CacheMap caches;

	string line;
	while(getline(cin, line)){
		istringstream sinp(line);
		string cmp;
		while(sinp >> cmp){
			if(cmp == "insert"){
				addCache(caches);
			}else if(cmp == "erase"){
				removeCache(caches);
			}else if(cmp == "check"){
				checkCashe(caches);
			}else if(cmp == "print"){
				printCache(caches);
			}
		}
	}


}