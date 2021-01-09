#include <string>
#include <vector>
#define INF 9999999
using namespace std;
struct station {
	int num;
	string name;
	station(int i_Num, string str_Name) {
		num = i_Num;
		name = str_Name;
	};
};
void load_station_info(vector<station>& stations) {
	//Line 1
	stations.push_back(station(0, "pingguo yuan"));
	stations.push_back(station(1, "gucheng"));
	stations.push_back(station(2, "bajiao amusement park"));
	stations.push_back(station(3, "babaoshan"));
	stations.push_back(station(4, "yuquan lu"));
	stations.push_back(station(5, "wukesong"));
	stations.push_back(station(6, "wanshou lu"));
	stations.push_back(station(7, "gongzhufen"));
	stations.push_back(station(8, "military museum"));
	stations.push_back(station(9, "muxidi"));
	stations.push_back(station(10, "nanlishi lu"));
	stations.push_back(station(11, "fuxing men"));
	stations.push_back(station(12, "xidan"));
	stations.push_back(station(13, "tian'anmen xi"));
	stations.push_back(station(14, "tian'anmen dong"));
	stations.push_back(station(15, "wangfujing"));
	stations.push_back(station(16, "dongdan"));
	stations.push_back(station(17, "jianguo men"));
	stations.push_back(station(18, "yong'an li"));
	stations.push_back(station(19, "guomao"));
	stations.push_back(station(20, "dawang lu"));
	stations.push_back(station(21, "sihui"));
	stations.push_back(station(22, "sihui dong"));
	//Line 2
	stations.push_back(station(23, "changchun jie"));
	stations.push_back(station(24, "xuanwu men"));
	stations.push_back(station(25, "heping men"));
	stations.push_back(station(26, "qian men"));
	stations.push_back(station(27, "chongwen men"));
	stations.push_back(station(28, "beijing railway station"));
	stations.push_back(station(29, "chaoyang men"));
	stations.push_back(station(30, "dongsi shitiao"));
	stations.push_back(station(31, "dongzhi men"));
	stations.push_back(station(32, "yonghegong lama temple"));
	stations.push_back(station(33, "anding men"));
	stations.push_back(station(34, "gulou dajie"));
	stations.push_back(station(35, "jishuitan"));
	stations.push_back(station(36, "xizhi men"));
	stations.push_back(station(37, "chegongzhuang"));
	stations.push_back(station(38, "fucheng men"));
	//Line 4
	stations.push_back(station(39, "xinjie kou"));
	stations.push_back(station(40, "ping'an li"));
	stations.push_back(station(41, "xisi"));
	stations.push_back(station(42, "lingjing hutong"));
	//Line 5
	stations.push_back(station(43, "beixinqiao"));
	stations.push_back(station(44, "zhangzizhong lu"));
	stations.push_back(station(45, "dongsi"));
	stations.push_back(station(46, "dengshi kou"));
}
void load_distance_info(int** dist, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			dist[i][j] = INF;
		}
	}
	dist[0][1] = 2606;
	dist[1][2] = 1921;
	dist[2][3] = 1953;
	dist[3][4] = 1479;
	dist[4][5] = 1810;
	dist[5][6] = 1778;
	dist[6][7] = 1313;
	dist[7][8] = 1172;
	dist[8][9] = 1166;
	dist[9][10] = 1291;
	dist[10][11] = 424;
	dist[11][12] = 1590;
	dist[12][13] = 1217;
	dist[13][14] = 925;
	dist[14][15] = 852;
	dist[15][16] = 774;
	dist[16][17] = 1230;
	dist[17][18] = 1377;
	dist[18][19] = 790;
	dist[19][20] = 1385;
	dist[20][21] = 1673;
	dist[21][22] = 1714;

	dist[23][24] = 929;
	dist[24][25] = 851;
	dist[25][26] = 1171;
	dist[26][27] = 1634;
	dist[27][28] = 1023;
	dist[28][17] = 945;
	dist[17][29] = 1763;
	dist[29][30] = 1027;
	dist[30][31] = 824;
	dist[31][32] = 2228;
	dist[32][33] = 794;
	dist[33][34] = 1237;
	dist[34][35] = 1766;
	dist[35][36] = 1899;
	dist[36][37] = 909;
	dist[37][38] = 960;
	dist[38][11] = 1832;
	dist[11][23] = 1234;

	dist[36][39] = 1025;
	dist[39][40] = 1100;
	dist[40][41] = 1100;
	dist[41][42] = 869;
	dist[42][12] = 1011;
	dist[12][24] = 815;

	dist[32][43] = 866;
	dist[43][44] = 791;
	dist[44][45] = 1016;
	dist[45][46] = 848;
	dist[46][16] = 945;
	dist[16][27] = 821;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			dist[j][i] = dist[i][j];
		}
	}
}