#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
   int ra;
   double ac1, ac2, ag, af;
   char cont = 's';
   string nome;
   
   while (cont == 's' || cont == 'S') {
   cout << "Qual o seu nome?" << endl;
   cin >> nome;
   cout << "Qual o seu RA?" << endl;
   cin >> ra;
   cout << "Digite sua AC1:" << endl;
   cin >> ac1;
   cout << "Digite sua AC2:" << endl;
   cin >> ac2;
   cout << "Digite sua AG:" << endl;
   cin >> ag;
   cout << "Digite sua Avaliacao Final:" << endl;
   cin >> af;
   
   ac1 = (ac1 * 0.15);
   ac2 = (ac2 * 0.35);
   ag = (ag * 0.1);
   af = (af * 0.4);
   
   double soma = (ac1 + ac2 + af + ag);
   
   if (soma > 5) {
       cout << "Parabens! Voce foi aprovado! Com media: " << soma << endl;
   }
   
   else if (soma >= 3 & soma < 5) {
       cout << "Infelizmente voce esta em rec. Sua media foi: " << soma << endl;
   }
   else {
       cout << "Parabens! Voce conseguiu ser reprovado! Olha sua media aikkkk: " << soma << endl;
   }
   
   cout << "Fazer o calculo novamente? (Digite 's' ou 'S')" << endl;
   cin >> cont;
}
return 0;
}
