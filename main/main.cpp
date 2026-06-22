#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<vector<int>> grafo;
vector<bool> visitado;
vector<bool> antesvisitado;
stack<int> orden;

void dfs(int nodo) {
    visitado[nodo] = true;

    for (int vecino : grafo[nodo]) {
        if (!visitado[vecino]) {
            dfs(vecino);
        }
    }

    orden.push(nodo);
}

int main() {

    int n = 6;
    grafo.resize(n);
    visitado.resize(n, false);

    grafo[5].push_back(2);
    grafo[5].push_back(0);
    grafo[4].push_back(0);
    grafo[4].push_back(1);
    grafo[2].push_back(3);
    grafo[3].push_back(1);
    grafo[3].push_back(5);

    for (int i = 0; i < n; i++) {
        if (!visitado[i]) {
            dfs(i);
        }
    }

    cout << "Orden topologico: ";

    while (!orden.empty()) {
        cout << orden.top() << " ";
        orden.pop();
    }

    return 0;
}