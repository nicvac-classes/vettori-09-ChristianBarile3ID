#include <iostream>
#include <vector>
using namespace std;

int main() {
    int giri, i, iMin;
    float sommaHamilton, sommaVerstappen, veloceHamilton, veloceVerstappen;
    do {
        cout << "Da quanti giri è composta la gara?" << endl;
        cin >> giri;
    } while (giri < 3);
    vector<float> tempiHamilton(giri);
    vector<float> tempiVerstappen(giri);
    sommaHamilton = 0;
    sommaVerstappen = 0;
    i = 0;
    while (i < tempiHamilton.size()) {
        cout << "In quanto tempo ha Hamilton completato il giro n°" << i + 1 << "?" << endl;
        cin >> tempiHamilton[i];
        sommaHamilton += tempiHamilton[i];

        cout << "In quanto tempo ha Verstappen completato il giro n°" << i + 1 << "?" << endl;
        cin >> tempiVerstappen[i];
        sommaVerstappen += tempiVerstappen[i];
        i++;
    }
    if (sommaHamilton < sommaVerstappen) {
        cout << "Il vincitore della gara è Hamilton, che ha finito la gara in " << sommaHamilton << endl;
    } else {
        cout << "Il vincitore della gara è Verstappen, che ha finito la gara in " << sommaVerstappen << endl;
    }
    i = 0;
    iMin = 0;
    while (i < tempiHamilton.size()) {
        if (tempiHamilton[i] < tempiHamilton[iMin]) {
            iMin = i;
        }
        i++;
    }
    veloceHamilton = tempiHamilton[iMin];
    cout << "Il giro più veloce di Hamilton è stato il giro n°" << iMin + 1 << " ed ha totalizzato un tempo di " << veloceHamilton << endl;
    i = 0;
    iMin = 0;
    while (i < tempiVerstappen.size()) {
        if (tempiVerstappen[i] < tempiVerstappen[iMin]) {
            iMin = i;
        }
        i++;
    }
    veloceVerstappen = tempiVerstappen[iMin];
    cout << "Il giro più veloce di Verstappen è stato il giro n°" << iMin + 1 << " ed ha totalizzato un tempo di " << veloceVerstappen << endl;
    if (veloceVerstappen < veloceHamilton) {
        cout << "Il giro più veloce è stato quello di Verstappen" << endl;
    } else {
        cout << "Il giro più veloce è stato quello di Hamilton" << endl;
    }
}
