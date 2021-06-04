#pragma comment(lib, "DragonAlgorithm.lib")
#include "DragonAlgorithm.h"
#include <conio.h>

std::vector<dp::Edge> Vectadd() {
	std::vector<dp::Edge> a;
	a.push_back(dp::Edge(1, 5, 3));
	a.push_back(dp::Edge(1, 6, 10));
	a.push_back(dp::Edge(1, 2, 7));

	a.push_back(dp::Edge(5, 1, 3));
	a.push_back(dp::Edge(5, 2, 2));
	a.push_back(dp::Edge(5, 7, 5));

	a.push_back(dp::Edge(6, 1, 10));
	a.push_back(dp::Edge(6, 2, 6));
	a.push_back(dp::Edge(6, 3, 9));
	
	a.push_back(dp::Edge(2, 1, 7));
	a.push_back(dp::Edge(2, 6, 6));
	a.push_back(dp::Edge(2, 5, 2));
	a.push_back(dp::Edge(2, 3, 4));
	a.push_back(dp::Edge(2, 4, 10));

	a.push_back(dp::Edge(3, 2, 4));
	a.push_back(dp::Edge(3, 4, 2));

	a.push_back(dp::Edge(4, 6, 9));
	a.push_back(dp::Edge(4, 2, 10));
	a.push_back(dp::Edge(4, 3, 2));
	a.push_back(dp::Edge(4, 7, 4));

	a.push_back(dp::Edge(7, 5, 5));
	a.push_back(dp::Edge(7, 4, 4));
	return a;
}

int main() {
	dp::Dijkstra* d = new dp::Dijkstra;
	auto a = Vectadd();
	if (d->Input(a, 7)) if (d->Execute(1)) d->Print();

	_getch();
	delete d;
}