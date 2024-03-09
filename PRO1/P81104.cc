#include <iostream>
#include <vector>
using namespace std;

struct Assignatura {
	string nom;
	double nota;
};

struct Alumne {
	string nom;
	int dni;
	vector <Assignatura>ass;
};

double nota(const vector <Alumne>& stu, int dni, string nom) {
	bool f = true;
    int i = 0;
    int stu_size = stu.size();
    
	while (i < stu_size and f) {
		Alumne st = stu[i];
		if (st.dni == dni) {
            int ass_size = st.ass.size();
            
			for (int j = 0; j < ass_size; ++j) {
				if (st.ass[j].nom == nom and st.ass[j].nota > -1)
                    return st.ass[j].nota;
			}
			f = false;
		}
		++i;
	}
	return -1;
}

double mitjana(const vector <Assignatura>& ass) {
	double m = 0;
	int c = 0;
	for (int i = 0; i < ass.size(); ++i) {
		if (ass[i].nota > -1) {
			++c;
			m += ass[i].nota;
		}
	}
	return m / c;
}

void compta(const vector <Alumne>& stu, int dni, string nom, int& counter) {
	counter = 0;
	double n = nota(stu, dni, nom);
	for (int i = 0; i < stu.size(); ++i) {
		Alumne s = stu[i];
		if (mitjana(s.ass) > n)
			++counter;
	}
}

int main() {
	int n;
	cin >> n;
	vector <Alumne>v(n);
	
	for (int j = 0; j < n; ++j) {
		cin >> v[j].nom >> v[j].dni;
		int ns;
		cin >> ns;
		vector <Assignatura>vs(ns);
        
		for (int i = 0; i < ns; ++i) {
			cin >> vs[i].nom >> vs[i].nota;
		}
		v[j].ass = vs;
	}
	int d;
	string a;
	while (cin >> d >> a) {
		int c;
		compta(v, d, a, c);
		cout << c << endl;
	}
}
