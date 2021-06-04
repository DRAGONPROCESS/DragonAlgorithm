#ifndef __DRAGON__ALGORITHM
#define __DRAGON__ALGORITHM



#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <tuple>
#include <algorithm>

static constexpr int INF = (0x12345678);

namespace dp {
	enum class KRUSKAL_RETURN_TYPE {
		Sum = 0x00,
		Nodes,
		All,
	};

	class Edge {
	public:
		int a, b, dst;

		Edge(int, int, int);
		bool operator<(Edge&);
	};

	class Kruskal {
	private:
		size_t N = -1;
		int Allof = 0;
		std::vector<Edge> Node, Ans;
		int* Parent = nullptr;

		int GetParent(int*, int);
		bool IsEqualParent(int*, int, int);
		void MixingParent(int*, int, int);
	public:
		~Kruskal();
		Kruskal();
		Kruskal(std::vector<Edge>& e, size_t N);
		bool Input(std::vector<Edge>& e, size_t N);
		bool Execute();
		std::tuple<std::vector<Edge>, int> Return(KRUSKAL_RETURN_TYPE);
	};

	class Dijkstra {
	private:
		std::vector<Edge> vec;
		int* Ans = nullptr;
		int edge = -1;

		int GetChildSum(std::vector<Edge>&, int);
	public:
		Dijkstra();
		Dijkstra(std::vector<Edge>&, int);
		~Dijkstra();
		bool Input(std::vector<Edge>&, int);
		bool Execute(int);
		std::vector<int> Return();
		void Print();
	};
}







#endif //__DRAGON__ALGORITHM
