#include <iostream>
#include <map>
#include "station_info.h"
#define INF 9999999
#define STATION_NUM 47
using namespace std;
void Dijkstra(int n, int** MGraph, int* dist, int* path, int v0) {
	int i, j;
	int min = INF;
	int vn = v0;
	int* found = new int[n];
	//initialize
	for (i = 0; i < n; i++) {
		found[i] = 0;
		dist[i] = MGraph[v0][i];
		if (MGraph[v0][i] < INF) {
			path[i] = v0;
		}
		else path[i] = -1;
	}
	path[v0] = -1;
	dist[v0] = 0;
	found[v0] = 1;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n; j++) {
			if (!found[j] && dist[j] < min) {
				//find the nearest point now
				min = dist[j];
				vn = j;
			}
		}
		found[vn] = 1;
		for (j = 0; j < n; j++) {
			if (!found[j] && dist[vn] + MGraph[vn][j] < dist[j]) {
				dist[j] = dist[vn] + MGraph[vn][j];
				path[j] = vn;
			}
		}
		min = INF;
	}
}
int search_station(vector<station>& stations, string name_to_find) {
	vector<station>::iterator it;
	for (it = stations.begin(); it != stations.end(); it++) {
		if (it->name == name_to_find) return it->num;
	}
	return -1;
}
int price_calc(int distance) {
	if (distance <= 6000)return 3;
	else if (distance > 6000 && distance <= 12000)return 4;
	else if (distance > 12000 && distance <= 22000)return 5;
	else if (distance > 22000 && distance <= 32000)return 6;
	else return 7;
}
int main()
{
	int i;
	int v0;
	vector<station> stations;
	string from, to;
	int from_num, to_num;

	int** distance_data = new int* [STATION_NUM];
	int* dist = new int[STATION_NUM];
	int* path = new int[STATION_NUM];
	for (i = 0; i < STATION_NUM; i++) {
		distance_data[i] = new int[STATION_NUM];
	}

	load_station_info(stations);
	load_distance_info(distance_data, STATION_NUM);

	getline(cin, from);
	getline(cin, to);
	from_num = search_station(stations, from);
	to_num = search_station(stations, to);
	if (from_num == -1 || to_num == -1) {
		cout << "Input error." << endl;
		return 0;
	}
	Dijkstra(STATION_NUM, distance_data, dist, path, from_num);
	cout << "price: "<<price_calc(dist[to_num])<<endl;
	cout << "distance(m): " << dist[to_num] << endl;
	return 0;
}
