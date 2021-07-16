#include <bits/stdc++.h>
using namespace std;

int main(){
  double t=1000, fh=500, oh=100, ft=50, tt=20, tec=10, fc=5, tc=2, oc=1, ftc=0.50, ttc=0.25;
  double ct, cfh, coh, cft, ctt, ctec, cfc, ctc, coc, cftc, cttc;
  double topay, paid, changes;
  cin >> topay >> paid;
  changes = paid-topay;
  ct = changes/t;
  cfh = fmod(changes,ct)/fh;
  coh = fmod(changes,fh)/oh;
  cft = fmod(changes,oh)/ft;
  ctt = fmod(changes,ft)/tt;
  ctec = fmod(changes,tt)/tec;
  cfc = fmod(changes,tec)/fc;
  ctc = fmod(changes,fc)/tc;
  coc = fmod(changes,tc)/oc;
  cftc = fmod(changes,oc)/ftc;
  cttc = fmod(changes,ftc)/ttc;

  cout << "1000: " << ct << "| 500 :" << cfh << "| 100: " << coh << "| 50: " << cft << "| 20: " << ctt << "| 10: " << ctec << "| 5: " << cfc << "| 2: " << ctc << "| 1: " << coc << "| 0.50: " << cftc << "| 0.25: " << cttc << endl;

}
