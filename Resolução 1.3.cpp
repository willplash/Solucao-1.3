#include <iostream>
#include <string>
using namespace std;

class ValidadorEntrada {

public:
	int LimiteINT;

	ValidadorEntrada() {
		this->LimiteINT = INT_MAX;
	}

	~ValidadorEntrada() {

	}

	void StringParaInt(string ValorLiteral) {
		char* entrada = new char[ValorLiteral.size() + 1];
		strcpy(entrada, ValorLiteral.c_str());
		int tamanho = ValorLiteral.size();

		bool valido = true;
		if (tamanho == 0) valido = false;
		if (tamanho != 0) {
			if (entrada[0] != '0' && entrada[0] != '1' && entrada[0] != '2' && entrada[0] != '3' && entrada[0] != '4' && entrada[0] != '5' && entrada[0] != '6' && entrada[0] != '7' && entrada[0] != '8' && entrada[0] != '9' && entrada[0] != '+' && entrada[0] != '-') {
				valido = false;
			}
			if (entrada[0] != '0' && entrada[0] != '1' && entrada[0] != '2' && entrada[0] != '3' && entrada[0] != '4' && entrada[0] != '5' && entrada[0] != '6' && entrada[0] != '7' && entrada[0] != '8' && entrada[0] != '9' && entrada[1] == ',') {
				valido = false;
			}
			for (int i = 1; i < tamanho; i++) {
				if (entrada[i] != '0' && entrada[i] != '1' && entrada[i] != '2' && entrada[i] != '3' && entrada[i] != '4' && entrada[i] != '5' && entrada[i] != '6' && entrada[i] != '7' && entrada[i] != '8' && entrada[i] != '9' && entrada[i] != ',') {
					valido = false;
				}
		    }	
		}
		if (valido == true) {
			int conversao = 0;
			for (int i = 0; i < tamanho + 1; i++) {
				if (entrada[i + 1] == ',' || entrada[i+1] == '\0') {
					int x = 0;
					int inicio = 0;
					if (entrada[0] == '+' || entrada[0] == '-') inicio = 1;
					for (int j = i; j >= inicio; j--) {
						if (conversao + ((int)entrada[j] - 48) * pow(10, x) > this->LimiteINT) {
							cout << "\nA entrada estoura o intervalo de inteiros suportado pela linguagem.";
							return;
						}
						conversao = conversao + ((int)entrada[j] - 48) * pow(10, x);
						x++;
					}
					i = tamanho + 1;
				}
			}
			if (entrada[0] == '-') conversao = conversao * (-1);
			cout << "\nO inteiro equivalente a esta string e: " << conversao << ".";
			return;
		}
		if (valido == false) {
			cout << "\nEntrada invalida para ser convertida para um inteiro.";
			return;
		}
	}

};

int main() {

	ValidadorEntrada Solucao;

	string entrada;
	
	do {
		cout << "\n\nEntre a string que sera convertida para inteiro ou entre sair para finalizar.\n\n";
		getline(std::cin, entrada);
		cout << "\n";
		if (entrada != "sair") {
			Solucao.StringParaInt(entrada);
		}
	} while (entrada != "sair");
}

