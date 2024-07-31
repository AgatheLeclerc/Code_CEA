#include "Flat_nu_e_nu_mu.h"

AgatheAnalysis::AgatheAnalysis(){
  // Empty constructor
}

AgatheAnalysis::~AgatheAnalysis(){
  // Empty destructor
}

void AgatheAnalysis::Flat_nu_e_nu_mu()
{

  //// Déclaration des histogrammes ////
  
  //nu_e//
  TH1D *hEnu_e_30 = new TH1D("hEnu_e_30","histogramme Enu total nue",nbinEnu,0,2);
  TH1D *hEnu_e_1 = new TH1D("hEnu_e_1","histogramme Enu CCQE nue",nbinEnu,0,2);
  TH1D *hEnu_e_2 = new TH1D("hEnu_e_2","histogramme Enu 2p2h nue",nbinEnu,0,2);
  TH1D *hEnu_e_11 = new TH1D("hEnu_e_11","histogramme Enu RES nue",nbinEnu,0,2);
  TH1D *hEnu_e_26 = new TH1D("hEnu_e_26","histogramme Enu DIS nue",nbinEnu,0,2);
  TH1D *hEnu_e_0 = new TH1D("hEnu_e_0","histogramme Enu Others nue",nbinEnu,0,2);

  TH1D *hq0_e_30 = new TH1D("hq0_e_30","histogramme q0 total nue",nbin,0,2);
  TH1D *hq0_e_1 = new TH1D("hq0_e_1","histogramme q0 CCQE nue",nbin,0,2);
  TH1D *hq0_e_2 = new TH1D("hq0_e_2","histogramme q0 2p2h nue",nbin,0,2);
  TH1D *hq0_e_11 = new TH1D("hq0_e_11","histogramme q0 RES nue",nbin,0,2);
  TH1D *hq0_e_26 = new TH1D("hq0_e_26","histogramme q0 DIS nue",nbin,0,2);
  TH1D *hq0_e_0 = new TH1D("hq0_e_0","histogramme q0 Others nue",nbin,0,2);

  TH1D *hq3_e_30 = new TH1D("hq3_e_30","histogramme q3 total nue",nbin,0,2);
  TH1D *hq3_e_1 = new TH1D("hq3_e_1","histogramme q3 CCQE nue",nbin,0,2);
  TH1D *hq3_e_2 = new TH1D("hq3_e_2","histogramme q3 2p2h nue",nbin,0,2);
  TH1D *hq3_e_11 = new TH1D("hq3_e_11","histogramme q3 RES nue",nbin,0,2);
  TH1D *hq3_e_26 = new TH1D("hq3_e_26","histogramme q3 DIS nue",nbin,0,2);
  TH1D *hq3_e_0 = new TH1D("hq3_e_0","histogramme q3 Others nue",nbin,0,2);

  TH1D *hQ2_e_30 = new TH1D("hQ2_e_30","histogramme Q2 total nue",nbin,0,2);
  TH1D *hQ2_e_1 = new TH1D("hQ2_e_1","histogramme Q2 CCQE nue",nbin,0,2);
  TH1D *hQ2_e_2 = new TH1D("hQ2_e_2","histogramme Q2 2p2h nue",nbin,0,2);
  TH1D *hQ2_e_11 = new TH1D("hQ2_e_11","histogramme Q2 RES nue",nbin,0,2);
  TH1D *hQ2_e_26 = new TH1D("hQ2_e_26","histogramme Q2 DIS nue",nbin,0,2);
  TH1D *hQ2_e_0 = new TH1D("hQ2_e_0","histogramme Q2 Others nue",nbin,0,2);

  TH1D *hcos_e_30 = new TH1D("hcos_e_30","histogramme coslep tot nue",nbin,-1,1);
  TH1D *hcos_e_1 = new TH1D("hcos_e_1","histogramme coslep CCQE nue",nbin,-1,1);
  TH1D *hcos_e_2 = new TH1D("hcos_e_2","histogramme coslep 2p2h nue",nbin,-1,1);
  TH1D *hcos_e_11 = new TH1D("hcos_e_11","histogramme coslep RES nue",nbin,-1,1);
  TH1D *hcos_e_26 = new TH1D("hcos_e_26","histogramme coslep DIS nue",nbin,-1,1);
  TH1D *hcos_e_0 = new TH1D("hcos_e_0","histogramme coslep Others nue",nbin,-1,1);

  TH1D *hELep_e_30 = new TH1D("hELep_e_30","histogramme ELep total nue",nbin,0,2);
  TH1D *hELep_e_1 = new TH1D("hELep_e_1","histogramme ELep CCQE nue",nbin,0,2);
  TH1D *hELep_e_2 = new TH1D("hELep_e_2","histogramme ELep 2p2h nue",nbin,0,2);
  TH1D *hELep_e_11 = new TH1D("hELep_e_11","histogramme ELep RES nue",nbin,0,2);
  TH1D *hELep_e_26 = new TH1D("hELep_e_26","histogramme ELep DIS nue",nbin,0,2);
  TH1D *hELep_e_0 = new TH1D("hELep_e_0","histogramme ELep Others nue",nbin,0,2);

  TH1D *hpLep_e_30 = new TH1D("hpLep_e_30","histogramme pLep total nue",nbin,0,2);
  TH1D *hpLep_e_1 = new TH1D("hpLep_e_1","histogramme pLep CCQE nue",nbin,0,2);
  TH1D *hpLep_e_2 = new TH1D("hpLep_e_2","histogramme pLep 2p2h nue",nbin,0,2);
  TH1D *hpLep_e_11 = new TH1D("hpLep_e_11","histogramme pLep RES nue",nbin,0,2);
  TH1D *hpLep_e_26 = new TH1D("hpLep_e_26","histogramme pLep DIS nue",nbin,0,2);
  TH1D *hpLep_e_0 = new TH1D("hpLep_e_0","histogramme pLep Others nue",nbin,0,2);

  TH2D *hq0q3_e_30 = new TH2D("hq0q3_e_30","histogramme q0 en fonction de q3 tot nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_1 = new TH2D("hq0q3_e_1","histogramme q0 en fonction de q3 CCQE nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_2 = new TH2D("hq0q3_e_2","histogramme q0 en fonction de q3 2p2h nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_11 = new TH2D("hq0q3_e_11","histogramme q0 en fonction de q3 2p2h nue",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_26 = new TH2D("hq0q3_e_26","histogramme q0 en fonction de q3 DIS nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_0 = new TH2D("hq0q3_e_0","histogramme q0 en fonction de q3 Others nue",nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnu_e_30 = new TH2D("hcosEnu_e_30","histogramme cos(theta) en fonction de Enu tot nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_1 = new TH2D("hcosEnu_e_1","histogramme cos(theta) en fonction de Enu CCQE nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_2 = new TH2D("hcosEnu_e_2","histogramme cos(theta) en fonction de Enu 2p2h nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_11 = new TH2D("hcosEnu_e_11","histogramme cos(theta) en fonction de Enu 2p2h nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_26 = new TH2D("hcosEnu_e_26","histogramme cos(theta) en fonction de Enu DIS nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_0 = new TH2D("hcosEnu_e_0","histogramme cos(theta) en fonction de Enu Others nue", 500,0,2,500,-1,1);
  
  TH2D *hplepEnu_e_30 = new TH2D("hplepEnu_e_30","histogramme plep en fonction de Enu tot nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_1 = new TH2D("hplepEnu_e_1","histogramme plep en fonction de Enu CCQE nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_2 = new TH2D("hplepEnu_e_2","histogramme plep en fonction de Enu 2p2h nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_11 = new TH2D("hplepEnu_e_11","histogramme plep en fonction de Enu 2p2h nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_26 = new TH2D("hplepEnu_e_26","histogramme plep en fonction de Enu DIS nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_0 = new TH2D("hplepEnu_e_0","histogramme plep en fonction de Enu Others nue", 500,0,2,500,0,2);

  
  //nu_mu//
  TH1D *hEnu_mu_30 = new TH1D("hEnu_mu_30","histogramme Enu total numu",nbinEnu,0,2);
  TH1D *hEnu_mu_1 = new TH1D("hEnu_mu_1","histogramme Enu CCQE numu",nbinEnu,0,2);
  TH1D *hEnu_mu_2 = new TH1D("hEnu_mu_2","histogramme Enu 2p2h numu",nbinEnu,0,2);
  TH1D *hEnu_mu_11 = new TH1D("hEnu_mu_11","histogramme Enu RES numu",nbinEnu,0,2);
  TH1D *hEnu_mu_26 = new TH1D("hEnu_mu_26","histogramme Enu DIS numu",nbinEnu,0,2);
  TH1D *hEnu_mu_0 = new TH1D("hEnu_mu_0","histogramme Enu Others numu",nbinEnu,0,2);

  TH1D *hq0_mu_30 = new TH1D("hq0_mu_30","histogramme q0 total numu",nbin,0,2);
  TH1D *hq0_mu_1 = new TH1D("hq0_mu_1","histogramme q0 CCQE numu",nbin,0,2);
  TH1D *hq0_mu_2 = new TH1D("hq0_mu_2","histogramme q0 2p2h numu",nbin,0,2);
  TH1D *hq0_mu_11 = new TH1D("hq0_mu_11","histogramme q0 RES numu",nbin,0,2);
  TH1D *hq0_mu_26 = new TH1D("hq0_mu_26","histogramme q0 DIS numu",nbin,0,2);
  TH1D *hq0_mu_0 = new TH1D("hq0_mu_0","histogramme q0 Others numu",nbin,0,2);

  TH1D *hq3_mu_30 = new TH1D("hq3_mu_30","histogramme q3 total numu",nbin,0,2);
  TH1D *hq3_mu_1 = new TH1D("hq3_mu_1","histogramme q3 CCQE numu",nbin,0,2);
  TH1D *hq3_mu_2 = new TH1D("hq3_mu_2","histogramme q3 2p2h numu",nbin,0,2);
  TH1D *hq3_mu_11 = new TH1D("hq3_mu_11","histogramme q3 RES numu",nbin,0,2);
  TH1D *hq3_mu_26 = new TH1D("hq3_mu_26","histogramme q3 DIS numu",nbin,0,2);
  TH1D *hq3_mu_0 = new TH1D("hq3_mu_0","histogramme q3 Others numu",nbin,0,2);

  TH1D *hQ2_mu_30 = new TH1D("hQ2_mu_30","histogramme Q2 total numu",nbin,0,2);
  TH1D *hQ2_mu_1 = new TH1D("hQ2_mu_1","histogramme Q2 CCQE numu",nbin,0,2);
  TH1D *hQ2_mu_2 = new TH1D("hQ2_mu_2","histogramme Q2 2p2h numu",nbin,0,2);
  TH1D *hQ2_mu_11 = new TH1D("hQ2_mu_11","histogramme Q2 RES numu",nbin,0,2);
  TH1D *hQ2_mu_26 = new TH1D("hQ2_mu_26","histogramme Q2 DIS numu",nbin,0,2);
  TH1D *hQ2_mu_0 = new TH1D("hQ2_mu_0","histogramme Q2 Others numu",nbin,0,2);

  TH1D *hcos_mu_30 = new TH1D("hcos_mu_30","histogramme coslep tot numu",nbin,-1,1);
  TH1D *hcos_mu_1 = new TH1D("hcos_mu_1","histogramme coslep CCQE numu",nbin,-1,1);
  TH1D *hcos_mu_2 = new TH1D("hcos_mu_2","histogramme coslep 2p2h numu",nbin,-1,1);
  TH1D *hcos_mu_11 = new TH1D("hcos_mu_11","histogramme coslep RES numu",nbin,-1,1);
  TH1D *hcos_mu_26 = new TH1D("hcos_mu_26","histogramme coslep DIS numu",nbin,-1,1);
  TH1D *hcos_mu_0 = new TH1D("hcos_mu_0","histogramme coslep Others numu",nbin,-1,1);

  TH1D *hELep_mu_30 = new TH1D("hELep_mu_30","histogramme ELep total numu",nbin,0,2);
  TH1D *hELep_mu_1 = new TH1D("hELep_mu_1","histogramme ELep CCQE numu",nbin,0,2);
  TH1D *hELep_mu_2 = new TH1D("hELep_mu_2","histogramme ELep 2p2h numu",nbin,0,2);
  TH1D *hELep_mu_11 = new TH1D("hELep_mu_11","histogramme ELep RES numu",nbin,0,2);
  TH1D *hELep_mu_26 = new TH1D("hELep_mu_26","histogramme ELep DIS numu",nbin,0,2);
  TH1D *hELep_mu_0 = new TH1D("hELep_mu_0","histogramme ELep Others numu",nbin,0,2);

  TH1D *hpLep_mu_30 = new TH1D("hpLep_mu_30","histogramme pLep total numu",nbin,0,2);
  TH1D *hpLep_mu_1 = new TH1D("hpLep_mu_1","histogramme pLep CCQE numu",nbin,0,2);
  TH1D *hpLep_mu_2 = new TH1D("hpLep_mu_2","histogramme pLep 2p2h numu",nbin,0,2);
  TH1D *hpLep_mu_11 = new TH1D("hpLep_mu_11","histogramme pLep RES numu",nbin,0,2);
  TH1D *hpLep_mu_26 = new TH1D("hpLep_mu_26","histogramme pLep DIS numu",nbin,0,2);
  TH1D *hpLep_mu_0 = new TH1D("hpLep_mu_0","histogramme pLep Others numu",nbin,0,2);

  TH2D *hq0q3_mu_30 = new TH2D("hq0q3_mu_30","histogramme q0 en fonction de q3 tot numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_1 = new TH2D("hq0q3_mu_1","histogramme q0 en fonction de q3 CCQE numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_2 = new TH2D("hq0q3_mu_2","histogramme q0 en fonction de q3 2p2h numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_11 = new TH2D("hq0q3_mu_11","histogramme q0 en fonction de q3 2p2h numu",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_26 = new TH2D("hq0q3_mu_26","histogramme q0 en fonction de q3 DIS numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_0 = new TH2D("hq0q3_mu_0","histogramme q0 en fonction de q3 Others numu",nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnu_mu_30 = new TH2D("hcosEnu_mu_30","histogramme cos(theta) en fonction de Enu tot numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_1 = new TH2D("hcosEnu_mu_1","histogramme cos(theta) en fonction de Enu CCQE numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_2 = new TH2D("hcosEnu_mu_2","histogramme cos(theta) en fonction de Enu 2p2h numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_11 = new TH2D("hcosEnu_mu_11","histogramme cos(theta) en fonction de Enu 2p2h numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_26 = new TH2D("hcosEnu_mu_26","histogramme cos(theta) en fonction de Enu DIS numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_0 = new TH2D("hcosEnu_mu_0","histogramme cos(theta) en fonction de Enu Others numu", 500,0,2,500,-1,1);
  
  TH2D *hplepEnu_mu_30 = new TH2D("hplepEnu_mu_30","histogramme plep en fonction de Enu tot numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_1 = new TH2D("hplepEnu_mu_1","histogramme plep en fonction de Enu CCQE numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_2 = new TH2D("hplepEnu_mu_2","histogramme plep en fonction de Enu 2p2h numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_11 = new TH2D("hplepEnu_mu_11","histogramme plep en fonction de Enu 2p2h numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_26 = new TH2D("hplepEnu_mu_26","histogramme plep en fonction de Enu DIS numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_0 = new TH2D("hplepEnu_mu_0","histogramme plep en fonction de Enu Others numu", 500,0,2,500,0,2);
  

  //nu_e_bar//
  TH1D *hEnubar_e_30 = new TH1D("hEnubar_e_30","histogramme Enu total nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_1 = new TH1D("hEnubar_e_1","histogramme Enu CCQE nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_2 = new TH1D("hEnubar_e_2","histogramme Enu 2p2h nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_11 = new TH1D("hEnubar_e_11","histogramme Enu RES nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_26 = new TH1D("hEnubar_e_26","histogramme Enu DIS nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_0 = new TH1D("hEnubar_e_0","histogramme Enu Others nuebar",nbinEnu,0,2);

  TH1D *hEnubar_H_e_30 = new TH1D("hEnubar_H_e_30","histogramme Enu CCQE nuebar sur H",nbinEnu,0,2);
  TH1D *hEnubar_O_e_30 = new TH1D("hEnubar_O_e_30","histogramme Enu CCQE nuebar sur O",nbinEnu,0,2);
  
  TH1D *hq0bar_e_30 = new TH1D("hq0bar_e_30","histogramme q0 total nuebar",nbin,0,2);
  TH1D *hq0bar_e_1 = new TH1D("hq0bar_e_1","histogramme q0 CCQE nuebar",nbin,0,2);
  TH1D *hq0bar_e_2 = new TH1D("hq0bar_e_2","histogramme q0 2p2h nuebar",nbin,0,2);
  TH1D *hq0bar_e_11 = new TH1D("hq0bar_e_11","histogramme q0 RES nuebar",nbin,0,2);
  TH1D *hq0bar_e_26 = new TH1D("hq0bar_e_26","histogramme q0 DIS nuebar",nbin,0,2);
  TH1D *hq0bar_e_0 = new TH1D("hq0bar_e_0","histogramme q0 Others nuebar",nbin,0,2);

  TH1D *hq3bar_e_30 = new TH1D("hq3bar_e_30","histogramme q3 total nuebar",nbin,0,2);
  TH1D *hq3bar_e_1 = new TH1D("hq3bar_e_1","histogramme q3 CCQE nuebar",nbin,0,2);
  TH1D *hq3bar_e_2 = new TH1D("hq3bar_e_2","histogramme q3 2p2h nuebar",nbin,0,2);
  TH1D *hq3bar_e_11 = new TH1D("hq3bar_e_11","histogramme q3 RES nuebar",nbin,0,2);
  TH1D *hq3bar_e_26 = new TH1D("hq3bar_e_26","histogramme q3 DIS nuebar",nbin,0,2);
  TH1D *hq3bar_e_0 = new TH1D("hq3bar_e_0","histogramme q3 Others nuebar",nbin,0,2);

  TH1D *hQ2bar_e_30 = new TH1D("hQ2bar_e_30","histogramme Q2 total nuebar",nbin,0,2);
  TH1D *hQ2bar_e_1 = new TH1D("hQ2bar_e_1","histogramme Q2 CCQE nuebar",nbin,0,2);
  TH1D *hQ2bar_e_2 = new TH1D("hQ2bar_e_2","histogramme Q2 2p2h nuebar",nbin,0,2);
  TH1D *hQ2bar_e_11 = new TH1D("hQ2bar_e_11","histogramme Q2 RES nuebar",nbin,0,2);
  TH1D *hQ2bar_e_26 = new TH1D("hQ2bar_e_26","histogramme Q2 DIS nuebar",nbin,0,2);
  TH1D *hQ2bar_e_0 = new TH1D("hQ2bar_e_0","histogramme Q2 Others nuebar",nbin,0,2);

  TH1D *hcosbar_e_30 = new TH1D("hcosbar_e_30","histogramme coslep tot nuebar",nbin,-1,1);
  TH1D *hcosbar_e_1 = new TH1D("hcosbar_e_1","histogramme coslep CCQE nuebar",nbin,-1,1);
  TH1D *hcosbar_e_2 = new TH1D("hcosbar_e_2","histogramme coslep 2p2h nuebar",nbin,-1,1);
  TH1D *hcosbar_e_11 = new TH1D("hcosbar_e_11","histogramme coslep RES nuebar",nbin,-1,1);
  TH1D *hcosbar_e_26 = new TH1D("hcosbar_e_26","histogramme coslep DIS nuebar",nbin,-1,1);
  TH1D *hcosbar_e_0 = new TH1D("hcosbar_e_0","histogramme coslep Others nuebar",nbin,-1,1);

  TH1D *hELepbar_e_30 = new TH1D("hELepbar_e_30","histogramme ELep total nuebar",nbin,0,2);
  TH1D *hELepbar_e_1 = new TH1D("hELepbar_e_1","histogramme ELep CCQE nuebar",nbin,0,2);
  TH1D *hELepbar_e_2 = new TH1D("hELepbar_e_2","histogramme ELep 2p2h nuebar",nbin,0,2);
  TH1D *hELepbar_e_11 = new TH1D("hELepbar_e_11","histogramme ELep RES nuebar",nbin,0,2);
  TH1D *hELepbar_e_26 = new TH1D("hELepbar_e_26","histogramme ELep DIS nuebar",nbin,0,2);
  TH1D *hELepbar_e_0 = new TH1D("hELepbar_e_0","histogramme ELep Others nuebar",nbin,0,2);

  TH1D *hpLepbar_e_30 = new TH1D("hpLepbar_e_30","histogramme pLep total nuebar",nbin,0,2);
  TH1D *hpLepbar_e_1 = new TH1D("hpLepbar_e_1","histogramme pLep CCQE nuebar",nbin,0,2);
  TH1D *hpLepbar_e_2 = new TH1D("hpLepbar_e_2","histogramme pLep 2p2h nuebar",nbin,0,2);
  TH1D *hpLepbar_e_11 = new TH1D("hpLepbar_e_11","histogramme pLep RES nuebar",nbin,0,2);
  TH1D *hpLepbar_e_26 = new TH1D("hpLepbar_e_26","histogramme pLep DIS nuebar",nbin,0,2);
  TH1D *hpLepbar_e_0 = new TH1D("hpLepbar_e_0","histogramme pLep Others nuebar",nbin,0,2);

  TH2D *hq0q3bar_e_30 = new TH2D("hq0q3bar_e_30","histogramme q0 en fonction de q3 tot nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_1 = new TH2D("hq0q3bar_e_1","histogramme q0 en fonction de q3 CCQE nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_2 = new TH2D("hq0q3bar_e_2","histogramme q0 en fonction de q3 2p2h nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_11 = new TH2D("hq0q3bar_e_11","histogramme q0 en fonction de q3 2p2h nuebar",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_26 = new TH2D("hq0q3bar_e_26","histogramme q0 en fonction de q3 DIS nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_0 = new TH2D("hq0q3bar_e_0","histogramme q0 en fonction de q3 Others nuebar",nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnubar_e_30 = new TH2D("hcosEnubar_e_30","histogramme cos(theta) en fonction de Enu tot nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_1 = new TH2D("hcosEnubar_e_1","histogramme cos(theta) en fonction de Enu CCQE nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_2 = new TH2D("hcosEnubar_e_2","histogramme cos(theta) en fonction de Enu 2p2h nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_11 = new TH2D("hcosEnubar_e_11","histogramme cos(theta) en fonction de Enu 2p2h nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_26 = new TH2D("hcosEnubar_e_26","histogramme cos(theta) en fonction de Enu DIS nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_0 = new TH2D("hcosEnubar_e_0","histogramme cos(theta) en fonction de Enu Others nuebar", 500,0,2,500,-1,1);
  
  TH2D *hplepEnubar_e_30 = new TH2D("hplepEnubar_e_30","histogramme plep en fonction de Enu tot nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_1 = new TH2D("hplepEnubar_e_1","histogramme plep en fonction de Enu CCQE nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_2 = new TH2D("hplepEnubar_e_2","histogramme plep en fonction de Enu 2p2h nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_11 = new TH2D("hplepEnubar_e_11","histogramme plep en fonction de Enu 2p2h nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_26 = new TH2D("hplepEnubar_e_26","histogramme plep en fonction de Enu DIS nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_0 = new TH2D("hplepEnubar_e_0","histogramme plep en fonction de Enu Others nuebar", 500,0,2,500,0,2);

  
  //nu_mu_bar//
  TH1D *hEnubar_mu_30 = new TH1D("hEnubar_mu_30","histogramme Enu total numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_1 = new TH1D("hEnubar_mu_1","histogramme Enu CCQE numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_2 = new TH1D("hEnubar_mu_2","histogramme Enu 2p2h numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_11 = new TH1D("hEnubar_mu_11","histogramme Enu RES numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_26 = new TH1D("hEnubar_mu_26","histogramme Enu DIS numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_0 = new TH1D("hEnubar_mu_0","histogramme Enu Others numubar",nbinEnu,0,2);

  TH1D *hEnubar_H_mu_30 = new TH1D("hEnubar_H_mu_30","histogramme Enu CCQE numubar sur H",nbinEnu,0,2);
  TH1D *hEnubar_O_mu_30 = new TH1D("hEnubar_O_mu_30","histogramme Enu CCQE numubar sur O",nbinEnu,0,2);
  
  TH1D *hq0bar_mu_30 = new TH1D("hq0bar_mu_30","histogramme q0 total numubar",nbin,0,2);
  TH1D *hq0bar_mu_1 = new TH1D("hq0bar_mu_1","histogramme q0 CCQE numubar",nbin,0,2);
  TH1D *hq0bar_mu_2 = new TH1D("hq0bar_mu_2","histogramme q0 2p2h numubar",nbin,0,2);
  TH1D *hq0bar_mu_11 = new TH1D("hq0bar_mu_11","histogramme q0 RES numubar",nbin,0,2);
  TH1D *hq0bar_mu_26 = new TH1D("hq0bar_mu_26","histogramme q0 DIS numubar",nbin,0,2);
  TH1D *hq0bar_mu_0 = new TH1D("hq0bar_mu_0","histogramme q0 Others numubar",nbin,0,2);

  TH1D *hq3bar_mu_30 = new TH1D("hq3bar_mu_30","histogramme q3 total numubar",nbin,0,2);
  TH1D *hq3bar_mu_1 = new TH1D("hq3bar_mu_1","histogramme q3 CCQE numubar",nbin,0,2);
  TH1D *hq3bar_mu_2 = new TH1D("hq3bar_mu_2","histogramme q3 2p2h numubar",nbin,0,2);
  TH1D *hq3bar_mu_11 = new TH1D("hq3bar_mu_11","histogramme q3 RES numubar",nbin,0,2);
  TH1D *hq3bar_mu_26 = new TH1D("hq3bar_mu_26","histogramme q3 DIS numubar",nbin,0,2);
  TH1D *hq3bar_mu_0 = new TH1D("hq3bar_mu_0","histogramme q3 Others numubar",nbin,0,2);

  TH1D *hQ2bar_mu_30 = new TH1D("hQ2bar_mu_30","histogramme Q2 total numubar",nbin,0,2);
  TH1D *hQ2bar_mu_1 = new TH1D("hQ2bar_mu_1","histogramme Q2 CCQE numubar",nbin,0,2);
  TH1D *hQ2bar_mu_2 = new TH1D("hQ2bar_mu_2","histogramme Q2 2p2h numubar",nbin,0,2);
  TH1D *hQ2bar_mu_11 = new TH1D("hQ2bar_mu_11","histogramme Q2 RES numubar",nbin,0,2);
  TH1D *hQ2bar_mu_26 = new TH1D("hQ2bar_mu_26","histogramme Q2 DIS numubar",nbin,0,2);
  TH1D *hQ2bar_mu_0 = new TH1D("hQ2bar_mu_0","histogramme Q2 Others numubar",nbin,0,2);

  TH1D *hcosbar_mu_30 = new TH1D("hcosbar_mu_30","histogramme coslep tot numubar",nbin,-1,1);
  TH1D *hcosbar_mu_1 = new TH1D("hcosbar_mu_1","histogramme coslep CCQE numubar",nbin,-1,1);
  TH1D *hcosbar_mu_2 = new TH1D("hcosbar_mu_2","histogramme coslep 2p2h numubar",nbin,-1,1);
  TH1D *hcosbar_mu_11 = new TH1D("hcosbar_mu_11","histogramme coslep RES numubar",nbin,-1,1);
  TH1D *hcosbar_mu_26 = new TH1D("hcosbar_mu_26","histogramme coslep DIS numubar",nbin,-1,1);
  TH1D *hcosbar_mu_0 = new TH1D("hcosbar_mu_0","histogramme coslep Others numubar",nbin,-1,1);

  TH1D *hELepbar_mu_30 = new TH1D("hELepbar_mu_30","histogramme ELep total numubar",nbin,0,2);
  TH1D *hELepbar_mu_1 = new TH1D("hELepbar_mu_1","histogramme ELep CCQE numubar",nbin,0,2);
  TH1D *hELepbar_mu_2 = new TH1D("hELepbar_mu_2","histogramme ELep 2p2h numubar",nbin,0,2);
  TH1D *hELepbar_mu_11 = new TH1D("hELepbar_mu_11","histogramme ELep RES numubar",nbin,0,2);
  TH1D *hELepbar_mu_26 = new TH1D("hELepbar_mu_26","histogramme ELep DIS numubar",nbin,0,2);
  TH1D *hELepbar_mu_0 = new TH1D("hELepbar_mu_0","histogramme ELep Others numubar",nbin,0,2);

  TH1D *hpLepbar_mu_30 = new TH1D("hpLepbar_mu_30","histogramme pLep total numubar",nbin,0,2);
  TH1D *hpLepbar_mu_1 = new TH1D("hpLepbar_mu_1","histogramme pLep CCQE numubar",nbin,0,2);
  TH1D *hpLepbar_mu_2 = new TH1D("hpLepbar_mu_2","histogramme pLep 2p2h numubar",nbin,0,2);
  TH1D *hpLepbar_mu_11 = new TH1D("hpLepbar_mu_11","histogramme pLep RES numubar",nbin,0,2);
  TH1D *hpLepbar_mu_26 = new TH1D("hpLepbar_mu_26","histogramme pLep DIS numubar",nbin,0,2);
  TH1D *hpLepbar_mu_0 = new TH1D("hpLepbar_mu_0","histogramme pLep Others numubar",nbin,0,2);

  TH2D *hq0q3bar_mu_30 = new TH2D("hq0q3bar_mu_30","histogramme q0 en fonction de q3 tot numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_1 = new TH2D("hq0q3bar_mu_1","histogramme q0 en fonction de q3 CCQE numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_2 = new TH2D("hq0q3bar_mu_2","histogramme q0 en fonction de q3 2p2h numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_11 = new TH2D("hq0q3bar_mu_11","histogramme q0 en fonction de q3 2p2h numubar",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_26 = new TH2D("hq0q3bar_mu_26","histogramme q0 en fonction de q3 DIS numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_0 = new TH2D("hq0q3bar_mu_0","histogramme q0 en fonction de q3 Others numubar",nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnubar_mu_30 = new TH2D("hcosEnubar_mu_30","histogramme cos(theta) en fonction de Enu tot numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_1 = new TH2D("hcosEnubar_mu_1","histogramme cos(theta) en fonction de Enu CCQE numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_2 = new TH2D("hcosEnubar_mu_2","histogramme cos(theta) en fonction de Enu 2p2h numubarr", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_11 = new TH2D("hcosEnubar_mu_11","histogramme cos(theta) en fonction de Enu 2p2h numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_26 = new TH2D("hcosEnubar_mu_26","histogramme cos(theta) en fonction de Enu DIS numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_0 = new TH2D("hcosEnubar_mu_0","histogramme cos(theta) en fonction de Enu Others numubar", 500,0,2,500,-1,1);
  
  TH2D *hplepEnubar_mu_30 = new TH2D("hplepEnubar_mu_30","histogramme plep en fonction de Enu tot numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_1 = new TH2D("hplepEnubar_mu_1","histogramme plep en fonction de Enu CCQE numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_2 = new TH2D("hplepEnubar_mu_2","histogramme plep en fonction de Enu 2p2h numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_11 = new TH2D("hplepEnubar_mu_11","histogramme plep en fonction de Enu 2p2h numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_26 = new TH2D("hplepEnubar_mu_26","histogramme plep en fonction de Enu DIS numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_0 = new TH2D("hplepEnubar_mu_0","histogramme plep en fonction de Enu Others numubar", 500,0,2,500,0,2);


  //// Récupération et déclaration des variables des fichiers de simulation ////
  
//Pour ouvrir le fichier et acceder aux variables
  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");
  
  int nModesCC = 30;
  int nentries;
  int nentries_mu;
  int nentries_ebar;
  int nentries_mubar;
  int Mode;
  
  float q0_e;
  float q3_e;
  float Q2_e;
  float coslep_e;
  float ELep_e;
  float pLep_e;
  float Q2_QE_e;
  float Enu_true_e;
  float Enu_QE_e;

  int Mode_mu;
  float q0_mu;
  float q3_mu;
  float Q2_mu;
  float coslep_mu;
  float ELep_mu;
  float pLep_mu;
  float Q2_QE_mu;
  float Enu_true_mu;
  float Enu_QE_mu;

  float Enu_true_ebar;
  int Mode_ebar;
  float q0_ebar;
  float q3_ebar;
  float Q2_ebar;
  float coslep_ebar;
  float ELep_ebar;
  float pLep_ebar;

  const int nmax = 25;
  float px_ebar[nmax];
  float py_ebar[nmax];
  int nfsp_ebar;
  int pdg_ebar[nmax];
  
  float Enu_true_mubar;
  int Mode_mubar;
  float q0_mubar;
  float q3_mubar;
  float Q2_mubar;
  float coslep_mubar;
  float ELep_mubar;
  float pLep_mubar;

  float px_mubar[nmax];
  float py_mubar[nmax];
  int nfsp_mubar;
  int pdg_mubar[nmax];

   
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");

  std::cout << "fscalefactor e " << scalefactor_e << std::endl;
  std::cout << "fscalefactor mu " << scalefactor_mu << std::endl;
  std::cout << "fscalefactor ebar " << scalefactor_ebar << std::endl;
  std::cout << "fscalefactor mubar " << scalefactor_mubar << std::endl;
  

  //Definit les variables du Tree
  input_tree_e->SetBranchAddress("Mode",&Mode);
  input_tree_e->SetBranchAddress("q0",&q0_e); 
  input_tree_e->SetBranchAddress("q3",&q3_e);
  input_tree_e->SetBranchAddress("Q2",&Q2_e);
  input_tree_e->SetBranchAddress("CosLep",&coslep_e);
  input_tree_e->SetBranchAddress("ELep",&ELep_e);
  input_tree_e->SetBranchAddress("Q2_QE",&Q2_QE_e);
  input_tree_e->SetBranchAddress("Enu_true",&Enu_true_e);
  input_tree_e->SetBranchAddress("Enu_QE",&Enu_QE_e);

  input_tree_mu->SetBranchAddress("Mode",&Mode_mu);
  input_tree_mu->SetBranchAddress("q0",&q0_mu); 
  input_tree_mu->SetBranchAddress("q3",&q3_mu);
  input_tree_mu->SetBranchAddress("Q2",&Q2_mu);
  input_tree_mu->SetBranchAddress("CosLep",&coslep_mu);
  input_tree_mu->SetBranchAddress("ELep",&ELep_mu);
  input_tree_mu->SetBranchAddress("Q2_QE",&Q2_QE_mu);
  input_tree_mu->SetBranchAddress("Enu_true",&Enu_true_mu);
  input_tree_mu->SetBranchAddress("Enu_QE",&Enu_QE_mu);

  input_tree_ebar->SetBranchAddress("Enu_true",&Enu_true_ebar);
  input_tree_ebar->SetBranchAddress("Mode",&Mode_ebar);
  input_tree_ebar->SetBranchAddress("q0",&q0_ebar); 
  input_tree_ebar->SetBranchAddress("q3",&q3_ebar);
  input_tree_ebar->SetBranchAddress("Q2",&Q2_ebar);
  input_tree_ebar->SetBranchAddress("CosLep",&coslep_ebar);
  input_tree_ebar->SetBranchAddress("ELep",&ELep_ebar);
  input_tree_ebar->SetBranchAddress("px",&px_ebar);
  input_tree_ebar->SetBranchAddress("py",&py_ebar);
  input_tree_ebar->SetBranchAddress("pdg",&pdg_ebar);
  input_tree_ebar->SetBranchAddress("nfsp",&nfsp_ebar);
  
  input_tree_mubar->SetBranchAddress("Enu_true",&Enu_true_mubar);
  input_tree_mubar->SetBranchAddress("Mode",&Mode_mubar);
  input_tree_mubar->SetBranchAddress("q0",&q0_mubar); 
  input_tree_mubar->SetBranchAddress("q3",&q3_mubar);
  input_tree_mubar->SetBranchAddress("Q2",&Q2_mubar);
  input_tree_mubar->SetBranchAddress("CosLep",&coslep_mubar);
  input_tree_mubar->SetBranchAddress("ELep",&ELep_mubar);
  input_tree_mubar->SetBranchAddress("px",&px_mubar);
  input_tree_mubar->SetBranchAddress("py",&py_mubar);
  input_tree_mubar->SetBranchAddress("pdg",&pdg_mubar);
  input_tree_mubar->SetBranchAddress("nfsp",&nfsp_mubar);

  //Pour avoir le nombre d'évenements par variable (11 million)
  nentries = input_tree_e->GetEntries(); 
  nentries_mu = input_tree_mu->GetEntries();
  nentries_ebar = input_tree_ebar->GetEntries();
  nentries_mubar = input_tree_mubar->GetEntries();

  std::cout << nentries << " " << nentries_mu << " " << nentries_ebar << " " <<nentries_mubar <<std::endl;
  std::cout << "Modes : nu_e " << Mode << " nu_mu " << Mode_mu << " nu_e_bar " << Mode_ebar << " nu_mu_bar " << Mode_mubar << std::endl; //Pas les même ??

  //Déclaration des variables pour connaitre la répartition en pourcentage des différentes interactions 
  float E_tot_e = 0;
  float E_CCQE_e = 0;
  float E_2p2h_e = 0;
  float E_RES_e = 0;
  float E_DIS_e = 0;
  float E_oth_e = 0;

  float E_tot_mu = 0;
  float E_CCQE_mu = 0;
  float E_2p2h_mu = 0;
  float E_RES_mu = 0;
  float E_DIS_mu = 0;
  float E_oth_mu = 0;

  float E_tot_ebar = 0;
  float E_CCQE_ebar = 0;
  float E_2p2h_ebar = 0;
  float E_RES_ebar = 0;
  float E_DIS_ebar = 0;
  float E_oth_ebar = 0;

  float E_tot_mubar = 0;
  float E_CCQE_mubar = 0;
  float E_2p2h_mubar = 0;
  float E_RES_mubar = 0;
  float E_DIS_mubar = 0;
  float E_oth_mubar = 0;

  float c2 = 9*pow(10.0,16.0);
  float m_mu = 0.10566; //En GeV
  float m_e = 511*pow(10.0, -6.0);

  std::cout << "c2 = " << c2 << " m_mu = " << m_mu << " m_e = " << m_e <<std::endl; 


  //// Boucle pour remplir les histogrammes ////

  for(int i = 0; i < nentries; i++){
    input_tree_e->GetEntry(i);

    if(Mode<30){
      hEnu_e_30->Fill(Enu_true_e);
      hq0_e_30->Fill(q0_e);
      hq3_e_30->Fill(q3_e);
      hQ2_e_30->Fill(Q2_e);
      hcos_e_30 -> Fill(coslep_e);
      hELep_e_30->Fill(ELep_e);
      hpLep_e_30->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
      hq0q3_e_30 -> Fill(q3_e, q0_e);
      hcosEnu_e_30->Fill(Enu_true_e, coslep_e);
      hplepEnu_e_30->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));
      
      E_tot_e++;
    }
   
   if(Mode==1){
     hEnu_e_1->Fill(Enu_true_e);
     hq0_e_1->Fill(q0_e);
     hq3_e_1->Fill(q3_e);
     hQ2_e_1->Fill(Q2_e);
     hcos_e_1 -> Fill(coslep_e);
     hELep_e_1->Fill(ELep_e);
     hpLep_e_1->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
     hq0q3_e_1 -> Fill(q3_e, q0_e);
     hcosEnu_e_1->Fill(Enu_true_e, coslep_e);
     hplepEnu_e_1->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));

     E_CCQE_e++;
   }
   
   if(Mode==2){
     hEnu_e_2->Fill(Enu_true_e);
     hq0_e_2->Fill(q0_e);
     hq3_e_2->Fill(q3_e);
     hQ2_e_2->Fill(Q2_e);
     hcos_e_2 -> Fill(coslep_e);
     hELep_e_2->Fill(ELep_e);
     hpLep_e_2->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
     hq0q3_e_2 -> Fill(q3_e, q0_e);
     hcosEnu_e_2->Fill(Enu_true_e, coslep_e);
     hplepEnu_e_2->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));

     E_2p2h_e++;
   }
    
   if((11<=Mode)&&(Mode<=17)){
     hEnu_e_11->Fill(Enu_true_e);
     hq0_e_11->Fill(q0_e);
     hq3_e_11->Fill(q3_e);
     hQ2_e_11->Fill(Q2_e);
     hcos_e_11 -> Fill(coslep_e);
     hELep_e_11->Fill(ELep_e);
     hpLep_e_11->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
     hq0q3_e_11 -> Fill(q3_e, q0_e);
     hcosEnu_e_11->Fill(Enu_true_e, coslep_e);
     hplepEnu_e_11->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));

     E_RES_e++;
   }
    
    if((Mode==21)||(Mode==22)||(Mode==23)||(Mode==26)){
      hEnu_e_26->Fill(Enu_true_e);
      hq0_e_26->Fill(q0_e);
      hq3_e_26->Fill(q3_e);
      hQ2_e_26->Fill(Q2_e);
      hcos_e_26 -> Fill(coslep_e);
      hELep_e_26->Fill(ELep_e);
      hpLep_e_26->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
      hq0q3_e_26 -> Fill(q3_e, q0_e);
      hcosEnu_e_26->Fill(Enu_true_e, coslep_e);
      hplepEnu_e_26->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));

      E_DIS_e++;
    }
    if ((Mode>=18)&&(Mode<=20)) {
      hEnu_e_0->Fill(Enu_true_e);
      hq0_e_0->Fill(q0_e);
      hq3_e_0->Fill(q3_e);
      hQ2_e_0->Fill(Q2_e);
      hcos_e_0 -> Fill(coslep_e);
      hELep_e_0->Fill(ELep_e);
      hpLep_e_0->Fill(sqrt(ELep_e*ELep_e -m_e*m_e));
      hq0q3_e_0 -> Fill(q3_e, q0_e);
      hcosEnu_e_0->Fill(Enu_true_e, coslep_e);
      hplepEnu_e_0->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e));

      E_oth_e++;
    }
  }



  for(int i = 0; i < nentries; i++){
    input_tree_mu->GetEntry(i);

    if(Mode_mu<30){

      hEnu_mu_30->Fill(Enu_true_mu);
      hq0_mu_30->Fill(q0_mu);
      hq3_mu_30->Fill(q3_mu);
      hQ2_mu_30->Fill(Q2_mu);
      hcos_mu_30 -> Fill(coslep_mu);
      hELep_mu_30->Fill(ELep_mu);
      hpLep_mu_30->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
      hq0q3_mu_30 -> Fill(q3_mu, q0_mu);
      hcosEnu_mu_30->Fill(Enu_true_mu, coslep_mu);
      hplepEnu_mu_30->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
      
      E_tot_mu++;
    }
   
   if(Mode_mu==1){
     hEnu_mu_1->Fill(Enu_true_mu);
     hq0_mu_1->Fill(q0_mu);
     hq3_mu_1->Fill(q3_mu);
     hQ2_mu_1->Fill(Q2_mu);
     hcos_mu_1 -> Fill(coslep_mu);
     hELep_mu_1->Fill(ELep_mu);
     hpLep_mu_1->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
     hq0q3_mu_1 -> Fill(q3_mu, q0_mu);
     hcosEnu_mu_1->Fill(Enu_true_mu, coslep_mu);
     hplepEnu_mu_1->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));

     E_CCQE_mu++;
   }
   
   if(Mode_mu==2){
     hEnu_mu_2->Fill(Enu_true_mu);
     hq0_mu_2->Fill(q0_mu);
     hq3_mu_2->Fill(q3_mu);
     hQ2_mu_2->Fill(Q2_mu);
     hcos_mu_2 -> Fill(coslep_mu);
     hELep_mu_2->Fill(ELep_mu);
     hpLep_mu_2->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
     hq0q3_mu_2 -> Fill(q3_mu, q0_mu);
     hcosEnu_mu_2->Fill(Enu_true_mu, coslep_mu);
     hplepEnu_mu_2->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));

     E_2p2h_mu++;
   }
    
   if((11<=Mode_mu)&&(Mode_mu<=17)){
     hEnu_mu_11->Fill(Enu_true_mu);
     hq0_mu_11->Fill(q0_mu);
     hq3_mu_11->Fill(q3_mu);
     hQ2_mu_11->Fill(Q2_mu);
     hcos_mu_11 -> Fill(coslep_mu);
     hELep_mu_11->Fill(ELep_mu);
     hpLep_mu_11->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
     hq0q3_mu_11 -> Fill(q3_mu, q0_mu);
     hcosEnu_mu_11->Fill(Enu_true_mu, coslep_mu);
     hplepEnu_mu_11->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));

     E_RES_mu++;
   }
    
    if((Mode_mu==21)||(Mode_mu==22)||(Mode_mu==23)||(Mode_mu==26)){
      hEnu_mu_26->Fill(Enu_true_mu);
      hq0_mu_26->Fill(q0_mu);
      hq3_mu_26->Fill(q3_mu);
      hQ2_mu_26->Fill(Q2_mu);
      hcos_mu_26 -> Fill(coslep_mu);
      hELep_mu_26->Fill(ELep_mu);
      hpLep_mu_26->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
      hq0q3_mu_26 -> Fill(q3_mu, q0_mu);
      hcosEnu_mu_26->Fill(Enu_true_mu, coslep_mu);
      hplepEnu_mu_26->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));

      E_DIS_mu++;
    }
    if ((Mode_mu>=18)&&(Mode_mu<=20)) {
      hEnu_mu_0->Fill(Enu_true_mu);
      hq0_mu_0->Fill(q0_mu);
      hq3_mu_0->Fill(q3_mu);
      hQ2_mu_0->Fill(Q2_mu);
      hcos_mu_0 -> Fill(coslep_mu);
      hELep_mu_0->Fill(ELep_mu);
      hpLep_mu_0->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu));
      hq0q3_mu_0 -> Fill(q3_mu, q0_mu);
      hcosEnu_mu_0->Fill(Enu_true_mu, coslep_mu);
      hplepEnu_mu_0->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu));

      E_oth_mu++;
    }
  }


  for(int i = 0; i < nentries_ebar; i++){
    input_tree_ebar->GetEntry(i);

    if(Mode_ebar>-30){
      hEnubar_e_30->Fill(Enu_true_ebar);
      hq0bar_e_30->Fill(q0_ebar);
      hq3bar_e_30->Fill(q3_ebar);
      hQ2bar_e_30->Fill(Q2_ebar);
      hcosbar_e_30 -> Fill(coslep_ebar);
      hELepbar_e_30->Fill(ELep_ebar);
      hpLepbar_e_30->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_30 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_30->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_30->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      
      E_tot_ebar++;
    }
    if(Mode_ebar==-1){
      hEnubar_e_1->Fill(Enu_true_ebar);
      hq0bar_e_1->Fill(q0_ebar);
      hq3bar_e_1->Fill(q3_ebar);
      hQ2bar_e_1->Fill(Q2_ebar);
      hcosbar_e_1 -> Fill(coslep_ebar);
      hELepbar_e_1->Fill(ELep_ebar);
      hpLepbar_e_1->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_1 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_1->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_1->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      
      E_CCQE_ebar++;
    }
    if(Mode_ebar==-2){
      hEnubar_e_2->Fill(Enu_true_ebar);
      hq0bar_e_2->Fill(q0_ebar);
      hq3bar_e_2->Fill(q3_ebar);
      hQ2bar_e_2->Fill(Q2_ebar);
      hcosbar_e_2 -> Fill(coslep_ebar);
      hELepbar_e_2->Fill(ELep_ebar);
      hpLepbar_e_2->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_2 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_2->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_2->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      
      E_2p2h_ebar++;
    }
    if((-17<=Mode_ebar)&&(Mode_ebar<=-11)){
      hEnubar_e_11->Fill(Enu_true_ebar);
      hq0bar_e_11->Fill(q0_ebar);
      hq3bar_e_11->Fill(q3_ebar);
      hQ2bar_e_11->Fill(Q2_ebar);
      hcosbar_e_11 -> Fill(coslep_ebar);
      hELepbar_e_11->Fill(ELep_ebar);
      hpLepbar_e_11->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_11 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_11->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_11->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      
     E_RES_ebar++;
    }
    if((Mode_ebar==-21)||(Mode_ebar==-22)||(Mode_ebar==-23)||(Mode_ebar==-26)){
      hEnubar_e_26->Fill(Enu_true_ebar);
      hq0bar_e_26->Fill(q0_ebar);
      hq3bar_e_26->Fill(q3_ebar);
      hQ2bar_e_26->Fill(Q2_ebar);
      hcosbar_e_26 -> Fill(coslep_ebar);
      hELepbar_e_26->Fill(ELep_ebar);
      hpLepbar_e_26->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_26 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_26->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_26->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
     E_DIS_ebar++;
    }
    if((Mode_ebar>=-20)&&(Mode_ebar<=-18)){
      hEnubar_e_0->Fill(Enu_true_ebar);
      hq0bar_e_0->Fill(q0_ebar);
      hq3bar_e_0->Fill(q3_ebar);
      hQ2bar_e_0->Fill(Q2_ebar);
      hcosbar_e_0 -> Fill(coslep_ebar);
      hELepbar_e_0->Fill(ELep_ebar);
      hpLepbar_e_0->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      hq0q3bar_e_0 -> Fill(q3_ebar, q0_ebar);
      hcosEnubar_e_0->Fill(Enu_true_ebar, coslep_ebar);
      hplepEnubar_e_0->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e));
      
     E_oth_ebar++;
    }

    if (Mode_ebar==-1){
      int n_electrons=0;
      int n_neutrons=0;
      float px_elec=0;
      float py_elec=0;

      float px_neutron=0;
      float py_neutron=0;
      
      for(int j = 0; j<nfsp_ebar; ++j){
	if(pdg_ebar[j] == -11){
	  n_electrons++;
	  px_elec = px_ebar[j];
	  py_elec = py_ebar[j];
	}
	if (pdg_ebar[j] == 2112){
	  n_neutrons++;
	  px_neutron = px_ebar[j];
	  py_neutron = py_ebar[j];
	}
      }
      
      if ((n_electrons == 1)&&(n_neutrons == 1)&&( abs(px_elec+px_neutron) < pow(10.0,-6.0))&&( abs(py_elec+py_neutron) < pow(10.0,-6.0))){
	hEnubar_H_e_30->Fill(Enu_true_ebar);
      }
      else {
	hEnubar_O_e_30->Fill(Enu_true_ebar);
      }
      
    }

  }

  for(int i = 0; i < nentries_mubar; i++){
    input_tree_mubar->GetEntry(i);

    if(Mode_mubar>-30){
      hEnubar_mu_30->Fill(Enu_true_mubar);
      hq0bar_mu_30->Fill(q0_mubar);
      hq3bar_mu_30->Fill(q3_mubar);
      hQ2bar_mu_30->Fill(Q2_mubar);
      hcosbar_mu_30 -> Fill(coslep_mubar);
      hELepbar_mu_30->Fill(ELep_mubar);
      hpLepbar_mu_30->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_30 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_30->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_30->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      
      E_tot_mubar++;
    }
    if(Mode_mubar==-1){
      hEnubar_mu_1->Fill(Enu_true_mubar);
      hq0bar_mu_1->Fill(q0_mubar);
      hq3bar_mu_1->Fill(q3_mubar);
      hQ2bar_mu_1->Fill(Q2_mubar);
      hcosbar_mu_1 -> Fill(coslep_mubar);
      hELepbar_mu_1->Fill(ELep_mubar);
      hpLepbar_mu_1->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_1 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_1->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_1->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      
     E_CCQE_mubar++;
    }
    if(Mode_mubar==-2){
      hEnubar_mu_2->Fill(Enu_true_mubar);
      hq0bar_mu_2->Fill(q0_mubar);
      hq3bar_mu_2->Fill(q3_mubar);
      hQ2bar_mu_2->Fill(Q2_mubar);
      hcosbar_mu_2 -> Fill(coslep_mubar);
      hELepbar_mu_2->Fill(ELep_mubar);
      hpLepbar_mu_2->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_2 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_2->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_2->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      
     E_2p2h_mubar++;
    }
    if((-17<=Mode_mubar)&&(Mode_mubar<=-11)){
      hEnubar_mu_11->Fill(Enu_true_mubar);
      hq0bar_mu_11->Fill(q0_mubar);
      hq3bar_mu_11->Fill(q3_mubar);
      hQ2bar_mu_11->Fill(Q2_mubar);
      hcosbar_mu_11 -> Fill(coslep_mubar);
      hELepbar_mu_11->Fill(ELep_mubar);
      hpLepbar_mu_11->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_11 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_11->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_11->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      
     E_RES_mubar++;
    }
    if((Mode_mubar==-21)||(Mode_mubar==-22)||(Mode_mubar==-23)||(Mode_mubar==-26)){
      hEnubar_mu_26->Fill(Enu_true_mubar);
      hq0bar_mu_26->Fill(q0_mubar);
      hq3bar_mu_26->Fill(q3_mubar);
      hQ2bar_mu_26->Fill(Q2_mubar);
      hcosbar_mu_26 -> Fill(coslep_mubar);
      hELepbar_mu_26->Fill(ELep_mubar);
      hpLepbar_mu_26->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_26 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_26->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_26->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      
     E_DIS_mubar++;
    }
    if ((Mode_mubar>=-20)&&(Mode_mubar<=-18)){
      hEnubar_mu_0->Fill(Enu_true_mubar);
      hq0bar_mu_0->Fill(q0_mubar);
      hq3bar_mu_0->Fill(q3_mubar);
      hQ2bar_mu_0->Fill(Q2_mubar);
      hcosbar_mu_0 -> Fill(coslep_mubar);
      hELepbar_mu_0->Fill(ELep_mubar);
      hpLepbar_mu_0->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
      hq0q3bar_mu_0 -> Fill(q3_mubar, q0_mubar);
      hcosEnubar_mu_0->Fill(Enu_true_mubar, coslep_mubar);
      hplepEnubar_mu_0->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu));
     E_oth_mubar++;
    }

    if (Mode_mubar==-1){
      int n_muons=0;
      int n_neutrons=0;
      float px_mu=0;
      float py_mu=0;

      float px_neutron=0;
      float py_neutron=0;
      
      for(int j = 0; j<nfsp_mubar; ++j){
	if(pdg_mubar[j] == -13){
	  n_muons++;
	  px_mu = px_mubar[j];
	  py_mu = py_mubar[j];
	}
	if (pdg_mubar[j] == 2112){
	  n_neutrons++;
	  px_neutron = px_mubar[j];
	  py_neutron = py_mubar[j];
	}
      }
      
      if((n_muons==1)&&(n_neutrons==1)&&(abs(px_mu+px_neutron) < pow(10.0,-6.0))&&(abs(py_mu+py_neutron) < pow(10.0, -6.0))){
	hEnubar_H_mu_30->Fill(Enu_true_mubar);
      }
      else {
	hEnubar_O_mu_30->Fill(Enu_true_mubar);
      }
    }
    
  }


  //// Pourcentage de la répartition des différents types d'interaction ////
  
  std::cout << "nue" <<std::endl;
  std::cout << "Etot " << E_tot_e << std::endl;
  std::cout << "CCQE " << E_CCQE_e << " prop " << (E_CCQE_e/E_tot_e)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_e << " prop " << (E_2p2h_e/E_tot_e)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_e << " prop " << (E_RES_e/E_tot_e)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_e << " prop " << (E_DIS_e/E_tot_e)*100 << "%" <<std::endl;
  std::cout << "other " << E_oth_e << " prop " << (E_oth_e/E_tot_e)*100 << "%" <<std::endl;

  std::cout <<"numu" <<std::endl;
  std::cout << "Etot " << E_tot_mu << std::endl;
  std::cout << "CCQE " << E_CCQE_mu << " prop " << (E_CCQE_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_mu << " prop " << (E_2p2h_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_mu << " prop " << (E_RES_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_mu << " prop " << (E_DIS_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "other " << E_oth_mu << " prop " << (E_oth_mu/E_tot_mu)*100 << "%" <<std::endl;

  std::cout << "nuebar" <<std::endl;
  std::cout << "Etot " << E_tot_ebar << std::endl;
  std::cout << "CCQE " << E_CCQE_ebar << " prop " << (E_CCQE_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_ebar << " prop " << (E_2p2h_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_ebar << " prop " << (E_RES_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_ebar << " prop " << (E_DIS_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "other " << E_oth_ebar << " prop " << (E_oth_ebar/E_tot_ebar)*100 << "%" <<std::endl;

  std::cout <<"numubar" <<std::endl;
  std::cout << "Etot " << E_tot_mubar << std::endl;
  std::cout << "CCQE " << E_CCQE_mubar << " prop " << (E_CCQE_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_mubar << " prop " << (E_2p2h_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_mubar << " prop " << (E_RES_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_mubar << " prop " << (E_DIS_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "other " << E_oth_mubar << " prop " << (E_oth_mubar/E_tot_mubar)*100 << "%" <<std::endl;


  //// Enregistrement des histogrammes dans les fichiers ////
  
  TFile * outfile1D_flat = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "RECREATE");

  //nu_e//
  hEnu_e_30->Write();
  hEnu_e_1->Write();
  hEnu_e_2->Write();
  hEnu_e_11->Write();
  hEnu_e_26->Write();
  hEnu_e_0->Write();

  hq0_e_30->Write();
  hq0_e_1->Write();
  hq0_e_2->Write();
  hq0_e_11->Write();
  hq0_e_26->Write();
  hq0_e_0->Write();

  hq3_e_30->Write();
  hq3_e_1->Write();
  hq3_e_2->Write();
  hq3_e_11->Write();
  hq3_e_26->Write();
  hq3_e_0->Write();
  
  hQ2_e_30->Write();
  hQ2_e_1->Write();
  hQ2_e_2->Write();
  hQ2_e_11->Write();
  hQ2_e_26->Write();
  hQ2_e_0->Write();

  hcos_e_30->Write();
  hcos_e_1->Write();
  hcos_e_2->Write();
  hcos_e_11->Write();
  hcos_e_26->Write(); 
  hcos_e_0->Write();

  hELep_e_30->Write();
  hELep_e_1->Write();
  hELep_e_2->Write();
  hELep_e_11->Write();
  hELep_e_26->Write();
  hELep_e_0->Write();

  hpLep_e_30->Write();
  hpLep_e_1->Write();
  hpLep_e_2->Write();
  hpLep_e_11->Write();
  hpLep_e_26->Write();
  hpLep_e_0->Write();

  //nu_mu//
  hEnu_mu_30->Write();
  hEnu_mu_1->Write();
  hEnu_mu_2->Write();
  hEnu_mu_11->Write();
  hEnu_mu_26->Write();
  hEnu_mu_0->Write();

  hq0_mu_30->Write();
  hq0_mu_1->Write();
  hq0_mu_2->Write();
  hq0_mu_11->Write();
  hq0_mu_26->Write();
  hq0_mu_0->Write();

  hq3_mu_30->Write();
  hq3_mu_1->Write();
  hq3_mu_2->Write();
  hq3_mu_11->Write();
  hq3_mu_26->Write();
  hq3_mu_0->Write();
  
  hQ2_mu_30->Write();
  hQ2_mu_1->Write();
  hQ2_mu_2->Write();
  hQ2_mu_11->Write();
  hQ2_mu_26->Write();
  hQ2_mu_0->Write();

  hcos_mu_30->Write();
  hcos_mu_1->Write();
  hcos_mu_2->Write();
  hcos_mu_11->Write();
  hcos_mu_26->Write(); 
  hcos_mu_0->Write();

  hELep_mu_30->Write();
  hELep_mu_1->Write();
  hELep_mu_2->Write();
  hELep_mu_11->Write();
  hELep_mu_26->Write();
  hELep_mu_0->Write();

  hpLep_mu_30->Write();
  hpLep_mu_1->Write();
  hpLep_mu_2->Write();
  hpLep_mu_11->Write();
  hpLep_mu_26->Write();
  hpLep_mu_0->Write();

  //nu_e_bar//
  hEnubar_e_30->Write();
  hEnubar_e_1->Write();
  hEnubar_e_2->Write();
  hEnubar_e_11->Write();
  hEnubar_e_26->Write();
  hEnubar_e_0->Write();

  hq0bar_e_30->Write();
  hq0bar_e_1->Write();
  hq0bar_e_2->Write();
  hq0bar_e_11->Write();
  hq0bar_e_26->Write();
  hq0bar_e_0->Write();

  hq3bar_e_30->Write();
  hq3bar_e_1->Write();
  hq3bar_e_2->Write();
  hq3bar_e_11->Write();
  hq3bar_e_26->Write();
  hq3bar_e_0->Write();
  
  hQ2bar_e_30->Write();
  hQ2bar_e_1->Write();
  hQ2bar_e_2->Write();
  hQ2bar_e_11->Write();
  hQ2bar_e_26->Write();
  hQ2bar_e_0->Write();

  hcosbar_e_30->Write();
  hcosbar_e_1->Write();
  hcosbar_e_2->Write();
  hcosbar_e_11->Write();
  hcosbar_e_26->Write(); 
  hcosbar_e_0->Write();

  hELepbar_e_30->Write();
  hELepbar_e_1->Write();
  hELepbar_e_2->Write();
  hELepbar_e_11->Write();
  hELepbar_e_26->Write();
  hELepbar_e_0->Write();

  hpLepbar_e_30->Write();
  hpLepbar_e_1->Write();
  hpLepbar_e_2->Write();
  hpLepbar_e_11->Write();
  hpLepbar_e_26->Write();
  hpLepbar_e_0->Write();

  hEnubar_H_e_30->Write();
  hEnubar_O_e_30->Write();
  
  //nu_mu_bar//
  hEnubar_mu_30->Write();
  hEnubar_mu_1->Write();
  hEnubar_mu_2->Write();
  hEnubar_mu_11->Write();
  hEnubar_mu_26->Write();
  hEnubar_mu_0->Write();

  hq0bar_mu_30->Write();
  hq0bar_mu_1->Write();
  hq0bar_mu_2->Write();
  hq0bar_mu_11->Write();
  hq0bar_mu_26->Write();
  hq0bar_mu_0->Write();

  hq3bar_mu_30->Write();
  hq3bar_mu_1->Write();
  hq3bar_mu_2->Write();
  hq3bar_mu_11->Write();
  hq3bar_mu_26->Write();
  hq3bar_mu_0->Write();
  
  hQ2bar_mu_30->Write();
  hQ2bar_mu_1->Write();
  hQ2bar_mu_2->Write();
  hQ2bar_mu_11->Write();
  hQ2bar_mu_26->Write();
  hQ2bar_mu_0->Write();

  hcosbar_mu_30->Write();
  hcosbar_mu_1->Write();
  hcosbar_mu_2->Write();
  hcosbar_mu_11->Write();
  hcosbar_mu_26->Write(); 
  hcosbar_mu_0->Write();

  hELepbar_mu_30->Write();
  hELepbar_mu_1->Write();
  hELepbar_mu_2->Write();
  hELepbar_mu_11->Write();
  hELepbar_mu_26->Write();
  hELepbar_mu_0->Write();

  hpLepbar_mu_30->Write();
  hpLepbar_mu_1->Write();
  hpLepbar_mu_2->Write();
  hpLepbar_mu_11->Write();
  hpLepbar_mu_26->Write();
  hpLepbar_mu_0->Write();

  hEnubar_H_mu_30->Write();
  hEnubar_O_mu_30->Write();

  outfile1D_flat->Close();

  TFile * outfile2D_flat = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D_flat.root", "RECREATE");

  hq0q3_e_30->Write();
  hq0q3_e_1->Write();
  hq0q3_e_2->Write();
  hq0q3_e_11->Write();
  hq0q3_e_26->Write();
  hq0q3_e_0->Write();

  hcosEnu_e_30->Write();
  hcosEnu_e_1->Write();
  hcosEnu_e_2->Write();
  hcosEnu_e_11->Write();
  hcosEnu_e_26->Write(); 
  hcosEnu_e_0->Write();

  hplepEnu_e_30->Write();
  hplepEnu_e_1->Write();
  hplepEnu_e_2->Write();
  hplepEnu_e_11->Write();
  hplepEnu_e_26->Write(); 
  hplepEnu_e_0->Write();
  

  hq0q3_mu_30->Write();
  hq0q3_mu_1->Write();
  hq0q3_mu_2->Write();
  hq0q3_mu_11->Write();
  hq0q3_mu_26->Write();
  hq0q3_mu_0->Write();
  
  hcosEnu_mu_30->Write();
  hcosEnu_mu_1->Write();
  hcosEnu_mu_2->Write();
  hcosEnu_mu_11->Write();
  hcosEnu_mu_26->Write(); 
  hcosEnu_mu_0->Write();

  hplepEnu_mu_30->Write();
  hplepEnu_mu_1->Write();
  hplepEnu_mu_2->Write();
  hplepEnu_mu_11->Write();
  hplepEnu_mu_26->Write(); 
  hplepEnu_mu_0->Write();
  

  hq0q3bar_e_30->Write();
  hq0q3bar_e_1->Write();
  hq0q3bar_e_2->Write();
  hq0q3bar_e_11->Write();
  hq0q3bar_e_26->Write();
  hq0q3bar_e_0->Write();

  hcosEnubar_e_30->Write();
  hcosEnubar_e_1->Write();
  hcosEnubar_e_2->Write();
  hcosEnubar_e_11->Write();
  hcosEnubar_e_26->Write(); 
  hcosEnubar_e_0->Write();

  hplepEnubar_e_30->Write();
  hplepEnubar_e_1->Write();
  hplepEnubar_e_2->Write();
  hplepEnubar_e_11->Write();
  hplepEnubar_e_26->Write(); 
  hplepEnubar_e_0->Write();
  

  hq0q3bar_mu_30->Write();
  hq0q3bar_mu_1->Write();
  hq0q3bar_mu_2->Write();
  hq0q3bar_mu_11->Write();
  hq0q3bar_mu_26->Write();
  hq0q3bar_mu_0->Write();

  hcosEnubar_mu_30->Write();
  hcosEnubar_mu_1->Write();
  hcosEnubar_mu_2->Write();
  hcosEnubar_mu_11->Write();
  hcosEnubar_mu_26->Write(); 
  hcosEnubar_mu_0->Write();

  hplepEnubar_mu_30->Write();
  hplepEnubar_mu_1->Write();
  hplepEnubar_mu_2->Write();
  hplepEnubar_mu_11->Write();
  hplepEnubar_mu_26->Write(); 
  hplepEnubar_mu_0->Write();

  outfile2D_flat->Close();  
  
  
}



void AgatheAnalysis::graph_xsec(){

  TH1D *hxsec_mu_30 = new TH1D("hxsec_mu_30","histogramme xsec total numu",200,0,2);
  TH1D *hxsec_mu_1 = new TH1D("hxsec_mu_1","histogramme xsec CCQE numu",200,0,2);
  TH1D *hxsec_mu_2 = new TH1D("hxsec_mu_2","histogramme xsec 2p2h numu",200,0,2);
  TH1D *hxsec_mu_RES = new TH1D("hxsec_mu_RES","histogramme xsec RES numu",200,0,2);
  TH1D *hxsec_mu_DIS = new TH1D("hxsec_mu_DIS","histogramme xsec DIS numu",200,0,2);

  //TH1D *hxsecvar_mu_30 = new TH1D("hxsecvar_mu_30","histogramme xsec total numu binvar",200,0,2);
  TH1D *hxsecvar_mu_1 = new TH1D("hxsecvar_mu_1","histogramme xsec CCQE numu binvar",200,0,2);
  TH1D *hxsecvar_mu_2 = new TH1D("hxsecvar_mu_2","histogramme xsec 2p2h numu binvar",200,0,2);
  TH1D *hxsecvar_mu_RES = new TH1D("hxsecvar_mu_RES","histogramme xsec RES numu binvar",200,0,2);
  TH1D *hxsecvar_mu_DIS = new TH1D("hxsecvar_mu_DIS","histogramme xsec DIS numu binvar",200,0,2);
  
  
  TH1D *hxsec_mu_11 = new TH1D("hxsec_mu_11","histogramme xsec 11 numu",200,0,2);
  TH1D *hxsec_mu_12 = new TH1D("hxsec_mu_12","histogramme xsec 12 numu",200,0,2);
  TH1D *hxsec_mu_13 = new TH1D("hxsec_mu_13","histogramme xsec 13 numu",200,0,2);
  TH1D *hxsec_mu_15 = new TH1D("hxsec_mu_15","histogramme xsec 15 numu",200,0,2);
  TH1D *hxsec_mu_16 = new TH1D("hxsec_mu_16","histogramme xsec 16 numu",200,0,2);
  TH1D *hxsec_mu_17 = new TH1D("hxsec_mu_17","histogramme xsec 17 numu",200,0,2);

  TH1D *hxsec_mu_21 = new TH1D("hxsec_mu_21","histogramme xsec 21 numu",200,0,2);
  TH1D *hxsec_mu_22 = new TH1D("hxsec_mu_22","histogramme xsec 22 numu",200,0,2);
  TH1D *hxsec_mu_23 = new TH1D("hxsec_mu_23","histogramme xsec 23 numu",200,0,2);
  TH1D *hxsec_mu_26 = new TH1D("hxsec_mu_26","histogramme xsec 26 numu",200,0,2);

  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  
  int nentries_mu;
  int Mode_mu;
  float Enu_true_mu;
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  std::cout << "fscalefactor mu " << scalefactor_mu << std::endl;
  
  input_tree_mu->SetBranchAddress("Enu_true",&Enu_true_mu);
  input_tree_mu->SetBranchAddress("Mode",&Mode_mu);
  nentries_mu = input_tree_mu->GetEntries();

  std::cout << "Mode " <<Mode_mu << std::endl;

  for(int i = 0; i < nentries_mu; i++){
    input_tree_mu->GetEntry(i);

    if(Mode_mu<30){
      hxsec_mu_30->Fill(Enu_true_mu);
    }

    if(Mode_mu==1){
      hxsec_mu_1->Fill(Enu_true_mu);
    }
    if(Mode_mu==2){
      hxsec_mu_2->Fill(Enu_true_mu);
    }
    if(Mode_mu==11){
      hxsec_mu_11->Fill(Enu_true_mu);
    }
    if(Mode_mu==12){
      hxsec_mu_12->Fill(Enu_true_mu);
    }
    if(Mode_mu==13){
      hxsec_mu_13->Fill(Enu_true_mu);
    }
    if(Mode_mu==15){
      hxsec_mu_15->Fill(Enu_true_mu);
    }
    if(Mode_mu==16){
      hxsec_mu_16->Fill(Enu_true_mu);
    }
    if(Mode_mu==17){
      hxsec_mu_17->Fill(Enu_true_mu);
    }
    if(Mode_mu==21){
      hxsec_mu_21->Fill(Enu_true_mu);
    }
    if(Mode_mu==22){
      hxsec_mu_22->Fill(Enu_true_mu);
    }
    if(Mode_mu==23){
      hxsec_mu_23->Fill(Enu_true_mu);
    }
    if(Mode_mu==26){
      hxsec_mu_26->Fill(Enu_true_mu);
    }
    if((11<=Mode_mu)&&(Mode_mu<=17)){
      hxsec_mu_RES->Fill(Enu_true_mu);
    }
    if((Mode_mu==21)||(Mode_mu==22)||(Mode_mu==23)||(Mode_mu==26)){
      hxsec_mu_DIS->Fill(Enu_true_mu);
    }
  }


  /*
  double xbins[nentries_mu+1];
  int k =0;
  TAxis * axis = hxsec_mu_30->GetXaxis();
  for (int i =1; i<=200;i++){
    int y = (int)hxsec_mu_30->GetBinContent(i);
      if (y <=0) continue;
      double dx = axis->GetBinWidth(i)/y;
      double xmin = axis->GetBinLowEdge(i);
      for (int j=0;j<y;j++) {
         xbins[k] = xmin +j*dx;
         k++;
      }
  }
  std::cout << xbins[41] << std::endl;
  std::cout << k << std::endl;

  sort(xbins, xbins+nentries_mu, std::greater<double>());

  std::cout << xbins[41] << std::endl;

  TH1D *hxsecvar_mu_30 = new TH1D("hxsecvar_mu_30","histogramme xsec total numu binvar",k,xbins);
  */
  /*
  TCanvas *cxsec_res = new TCanvas("histogramme xsec RES");
  TLegend *leg_res = new TLegend(0.4,0.5,0.6,0.7);

  hxsec_mu_RES->Draw();
  hxsec_mu_RES->SetLineColor(1);
  hxsec_mu_RES->SetLineStyle(kDashed);
  hxsec_mu_RES->SetLineWidth(3);
  hxsec_mu_RES->Scale(scalefactor_mu);
  hxsec_mu_RES->SetTitle("histogramme xsec RES; E_{#nu} (GeV); d#sigma/dE(cm^{2}/GeV/nucleon)");
  
  hxsec_mu_11->Draw("SAME");
  hxsec_mu_11->SetLineColor(4);
  hxsec_mu_11->SetLineWidth(2);
  hxsec_mu_11->Scale(scalefactor_mu);
  
  hxsec_mu_12->Draw("SAME");
  hxsec_mu_12->SetLineColor(7);
  hxsec_mu_12->SetLineWidth(2);
  hxsec_mu_12->Scale(scalefactor_mu);

  hxsec_mu_13->Draw("SAME");
  hxsec_mu_13->SetLineColor(9);
  hxsec_mu_13->SetLineWidth(2);
  hxsec_mu_13->Scale(scalefactor_mu);

  hxsec_mu_15->Draw("SAME");
  hxsec_mu_15->SetLineColor(34);
  hxsec_mu_15->SetLineWidth(2);
  hxsec_mu_15->Scale(scalefactor_mu);

  hxsec_mu_16->Draw("SAME");
  hxsec_mu_16->SetLineColor(39);
  hxsec_mu_16->SetLineWidth(2);
  hxsec_mu_16->Scale(scalefactor_mu);

  hxsec_mu_17->Draw("SAME");
  hxsec_mu_17->SetLineColor(49);
  hxsec_mu_17->SetLineWidth(2);
  hxsec_mu_17->Scale(scalefactor_mu);

  cxsec_res->SetGrid(1,1);
  leg_res->AddEntry("hxsec_mu_RES", "All RES");
  leg_res->AddEntry("hxsec_mu_11", "1 #pi ^{+} 1p");
  leg_res->AddEntry("hxsec_mu_12", "1 #pi ^{0} 1p");
  leg_res->AddEntry("hxsec_mu_13", "1 #pi ^{+} 1n");
  leg_res->AddEntry("hxsec_mu_15", "1 #pi ^{+} 1p (diffractive)");
  leg_res->AddEntry("hxsec_mu_16", "^{A}X 1#pi^{+} (coherent)");
  leg_res->AddEntry("hxsec_mu_17", "#gamma");
  leg_res->Draw();

  
  TCanvas *cxsec_dis = new TCanvas("histogramme xsec DIS");
  TLegend *leg_dis = new TLegend(0.4,0.5,0.6,0.7);

  hxsec_mu_DIS->Draw();
  hxsec_mu_DIS->SetLineColor(1);
  hxsec_mu_DIS->SetLineStyle(kDashed);
  hxsec_mu_DIS->SetLineWidth(3);
  hxsec_mu_DIS->Scale(scalefactor_mu);
  hxsec_mu_DIS->SetTitle("histogramme xsec DIS; E_{#nu} (GeV); d#sigma/dE(cm^{2}/GeV/nucleon)");
  
  hxsec_mu_21->Draw("SAME");
  hxsec_mu_21->SetLineColor(3);
  hxsec_mu_21->SetLineWidth(2);
  hxsec_mu_21->Scale(scalefactor_mu);

  hxsec_mu_22->Draw("SAME");
  hxsec_mu_22->SetLineColor(8);
  hxsec_mu_22->SetLineWidth(2);
  hxsec_mu_22->Scale(scalefactor_mu);

  hxsec_mu_23->Draw("SAME");
  hxsec_mu_23->SetLineColor(29);
  hxsec_mu_23->SetLineWidth(2);
  hxsec_mu_23->Scale(scalefactor_mu);

  hxsec_mu_26->Draw("SAME");
  hxsec_mu_26->SetLineColor(35);
  hxsec_mu_26->SetLineWidth(2);
  hxsec_mu_26->Scale(scalefactor_mu);

  cxsec_dis->SetGrid(1,1);
  leg_dis->AddEntry("hxsec_mu_DIS", "All DIS");
  leg_dis->AddEntry("hxsec_mu_21", "multi #pi");
  leg_dis->AddEntry("hxsec_mu_22", "#eta^{0} 1p");
  leg_dis->AddEntry("hxsec_mu_23", "1K^{+} 1#Lambda");
  leg_dis->AddEntry("hxsec_mu_26", "DIS");
  leg_dis->Draw();
  */

  /*
  TCanvas *cxsec = new TCanvas("histogramme xsec");
  TLegend *leg = new TLegend(0.4,0.5,0.6,0.7);

  hxsecvar_mu_30->Draw();
  hxsecvar_mu_30->SetLineColor(1);
  hxsecvar_mu_30->SetLineStyle(kDashed);
  hxsecvar_mu_30->SetLineWidth(3);
  hxsecvar_mu_30->Scale(scalefactor_mu);
  hxsecvar_mu_30->SetTitle("histogramme xsec tous modes; E_{#nu} (GeV); d#sigma/dE(cm^{2}/GeV/nucleon)");
  */
  
  /*
  hxsec_mu_1->Draw("SAME");
  hxsec_mu_1->SetLineColor(2);
  hxsec_mu_1->SetLineWidth(2);
  hxsec_mu_1->Scale(scalefactor_mu);
  
  hxsec_mu_2->Draw("SAME");
  hxsec_mu_2->SetLineColor(6);
  hxsec_mu_2->SetLineWidth(2);
  hxsec_mu_2->Scale(scalefactor_mu);

  hxsec_mu_RES->Draw("SAME");
  hxsec_mu_RES->SetLineColor(4);
  hxsec_mu_RES->SetLineWidth(2);
  //hxsec_mu_RES->Scale(scalefactor_mu);

  hxsec_mu_DIS->Draw("SAME");
  hxsec_mu_DIS->SetLineColor(3);
  hxsec_mu_DIS->SetLineWidth(2);
  //hxsec_mu_DIS->Scale(scalefactor_mu);

  cxsec->SetGrid(1,1);
  leg->AddEntry("hxsec_mu_30", "Total");
  leg->AddEntry("hxsec_mu_1", "CCQE");
  leg->AddEntry("hxsec_mu_2", "2p2h");
  leg->AddEntry("hxsec_mu_RES", "RES");
  leg->AddEntry("hxsec_mu_DIS", "DIS");
  leg->Draw();
  */
  

}




//Trace un histogramme 1D de la variable var avec les 4 modes étudiés et le total superposés 
//The flavor must be said in "var" (for example : "Enu_mu" to have the numu)
void AgatheAnalysis::plotTH1D_flat (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");

  std::cout << "fscalefactor e " << scalefactor_e << std::endl;
  std::cout << "fscalefactor mu " << scalefactor_mu << std::endl;
  std::cout << "fscalefactor ebar " << scalefactor_ebar << std::endl;
  std::cout << "fscalefactor mubar " << scalefactor_mubar << std::endl;
  
  
  TFile * infile1D_flat = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_flat = new TCanvas(Form("histogramme %s flat", var.c_str()));
  TLegend *leg1D = new TLegend(0.4,0.5,0.6,0.7);

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {

    std::cout << mod << std::endl;
      
    TH1D* hist = (TH1D*)(infile1D_flat->Get(Form("h%s_%d", var.c_str(), mod)));

    if (mod==30){
      hist->Draw("same,hist");
      hist->SetLineColor(color);
      hist->SetLineStyle(kDashed);
      hist->SetLineWidth(3);
      hist->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hist->Scale(scalefactor_mu);
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hist->Draw("same,hist");
      hist->SetLineColor(color);
      hist->SetMarkerSize(0);
      hist->SetLineWidth(2);
      hist->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hist->Scale(scalefactor_e);
    }

    color++;
  }

  c1D_flat->SetGrid(1,1);
  leg1D->AddEntry(Form("h%s_30",var.c_str()), "Total");
  leg1D->AddEntry(Form("h%s_1",var.c_str()), "CCQE");
  leg1D->AddEntry(Form("h%s_2",var.c_str()), "2p2h");
  leg1D->AddEntry(Form("h%s_11",var.c_str()), "RES");
  leg1D->AddEntry(Form("h%s_26",var.c_str()), "DIS");
  leg1D->Draw();


}



//Trace un histogramme 1D de la variable var avec les 4 modes étudiés et le total superposés pour nu(bar)_e et nu(bar)_mu sur un canvas 
void AgatheAnalysis::plotTH1D_superposes (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s flat", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.4,0.5,0.6,0.7);
  std::string outfile = "~/Code_agathe/OldFiles/output_OldFiles/output.pdf";

  /*
  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));
  */

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));
    c1D_sup->cd();



    if (mod==30){
      hist_e->Draw("same,hist,E");
      hist_e->SetLineColor(color);
      hist_e->SetLineWidth(3);
      hist_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_e->Scale(scalefactor_e, "width");


      //gStyle->SetEndErrorSize(3);
      //gStyle->SetErrorX(1.);
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetLineWidth(3);
      hist_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_mu->Scale(scalefactor_mu, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hist_e->Draw("same,hist,E");
      hist_e->SetLineColor(color);
      hist_e->SetMarkerSize(0);
      hist_e->SetLineWidth(2);
      hist_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hist_e->SetMinimum(0.0);
      //hist_e->Scale(scalefactor_e, "width");
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetMarkerSize(0);
      hist_mu->SetLineWidth(2);
      hist_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hist_mu->Scale(scalefactor_mu, "width");
    }

    color++;
  }

  /*
  hist_H_e->Draw("same,hist,E1");
  hist_H_e->SetLineColor(7);
  hist_H_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hist_H_mu->Draw("same,hist,E1");
  hist_H_mu->SetLineColor(7);
  hist_H_mu->SetLineStyle(kDashed);
  hist_H_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");

  hist_O_e->Draw("same,hist,E");
  hist_O_e->SetLineColor(28);
  hist_O_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hist_O_mu->Draw("same,hist,E");
  hist_O_mu->SetLineColor(28);
  hist_O_mu->SetLineStyle(kDashed);
  hist_O_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");
  */

  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(Form("h%s_e_30",var.c_str()), "#nu_{e} Total");
  leg1D_sup->AddEntry(Form("h%s_e_1",var.c_str()), "#nu_{e} CCQE");
  leg1D_sup->AddEntry(Form("h%s_e_2",var.c_str()), "#nu_{e} 2p2h");
  leg1D_sup->AddEntry(Form("h%s_e_11",var.c_str()), "#nu_{e} RES");
  leg1D_sup->AddEntry(Form("h%s_e_26",var.c_str()), "#nu_{e} DIS");
  leg1D_sup->AddEntry(Form("h%s_mu_30",var.c_str()), "#nu_{#mu} Total");
  leg1D_sup->AddEntry(Form("h%s_mu_1",var.c_str()), "#nu_{#mu} CCQE");
  leg1D_sup->AddEntry(Form("h%s_mu_2",var.c_str()), "#nu_{#mu} 2p2h");
  leg1D_sup->AddEntry(Form("h%s_mu_11",var.c_str()), "#nu_{#mu} RES");
  leg1D_sup->AddEntry(Form("h%s_mu_26",var.c_str()), "#nu_{#mu} DIS");

  /*
  leg1D_sup->AddEntry(Form("h%s_H_mu_30",var.c_str()), "#nu_{#mu} Total sur H");
  leg1D_sup->AddEntry(Form("h%s_H_e_30",var.c_str()), "#nu_{e} Total sur H");
  leg1D_sup->AddEntry(Form("h%s_O_mu_30",var.c_str()), "#nu_{#mu} Total sur C");
  leg1D_sup->AddEntry(Form("h%s_O_e_30",var.c_str()), "#nu_{e} Total sur C");
  */
  leg1D_sup->Draw();

  c1D_sup->SaveAs(outfile.c_str());

}



//Trace un histogramme 1D de la variable var avec les 4 modes étudiés et le total superposés pour nu(bar)_e et nu(bar)_mu sur un canvas 
void AgatheAnalysis::plotTH1D_superposes_QE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s sup QE", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.4,0.5,0.6,0.7);

  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));
      
  TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_1", var.c_str())));

  hist_e->Draw("same,hist,E1");
  hist_e->SetLineColor(2);
  hist_e->SetMarkerSize(0);
  hist_e->SetLineWidth(2);
  hist_e->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e->SetMinimum(0.0);
  //hist_e->Scale(scalefactor_ebar, "width");
  
  hist_mu->Draw("same,hist,E1");
  hist_mu->SetLineColor(2);
  hist_mu->SetLineStyle(kDashed);
  hist_mu->SetMarkerSize(0);
  hist_mu->SetLineWidth(2);
  hist_mu->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu->Scale(scalefactor_mubar, "width");
  
  
  hist_H_e->Draw("same,hist,E1");
  hist_H_e->SetLineColor(7);
  hist_H_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hist_H_mu->Draw("same,hist,E1");
  hist_H_mu->SetLineColor(7);
  hist_H_mu->SetLineStyle(kDashed);
  hist_H_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");

  hist_O_e->Draw("same,hist,E");
  hist_O_e->SetLineColor(28);
  hist_O_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hist_O_mu->Draw("same,hist,E");
  hist_O_mu->SetLineColor(28);
  hist_O_mu->SetLineStyle(kDashed);
  hist_O_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");
  
  
  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(hist_e, "#nu_{e} CCQE");
  leg1D_sup->AddEntry(hist_mu, "#nu_{#mu} CCQE");
 
  leg1D_sup->AddEntry(Form("h%s_H_mu_30",var.c_str()), "#nu_{#mu} Total sur H");
  leg1D_sup->AddEntry(Form("h%s_H_e_30",var.c_str()), "#nu_{e} Total sur H");
  leg1D_sup->AddEntry(Form("h%s_O_mu_30",var.c_str()), "#nu_{#mu} Total sur C");
  leg1D_sup->AddEntry(Form("h%s_O_e_30",var.c_str()), "#nu_{e} Total sur C");
  
  leg1D_sup->Draw();


}



//Trace un histogramme 1D de la variable var avec les 4 modes étudiés et le total superposés pour nu(bar)_e et nu(bar)_mu sur un canvas 
//CHANGER LE BINNING ET LES VALEURS D'AXE
void AgatheAnalysis::plotTH1D_superposes_QE_oldnew (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;
  
  TFile * infile1D_old = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN");
  TFile * infile1D_new = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles//histo1D_new_flat.root", "OPEN"); 
    
  TLegend *leg1D_sup = new TLegend(0.4,0.5,0.6,0.7);
  
  TH1D* hist_H_ebar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_H_e_30", var.c_str())));
  TH1D* hist_H_mubar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_H_mu_30", var.c_str())));
  TH1D* hist_H_ebar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_H_e_30", var.c_str())));
  TH1D* hist_H_mubar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_H_mu_30", var.c_str())));

  TH1D* hist_C_ebar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_O_e_30", var.c_str())));
  TH1D* hist_C_mubar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_O_mu_30", var.c_str())));
  
  TH1D* hist_ebar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_e_1", var.c_str())));
  TH1D* hist_mubar_old = (TH1D*)(infile1D_old->Get(Form("h%sbar_mu_1", var.c_str())));

  TH1D* h_ebar_old = new TH1D("h_ebar_old", "hist nuebar old files", 20, 0, 2);
  TH1D* h_mubar_old = new TH1D("h_mubar_old", "hist numubar old files", 20, 0, 2);

  TH1D* hist_O_ebar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_O_e_30", var.c_str())));
  TH1D* hist_O_mubar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_O_mu_30", var.c_str())));
     
  TH1D* hist_ebar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_e_1", var.c_str())));
  TH1D* hist_mubar_new = (TH1D*)(infile1D_new->Get(Form("h%sbar_mu_1", var.c_str())));

  TH1D* h_ebar_new = new TH1D("h_ebar_new", "hist nuebar new files", 20, 0, 2);
  TH1D* h_mubar_new = new TH1D("h_mubar_new", "hist numubar new files", 20, 0, 2);
  
  
  TH1D* hist_e_old = (TH1D*)(infile1D_old->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu_old = (TH1D*)(infile1D_old->Get(Form("h%s_mu_1", var.c_str())));

  TH1D* h_e_old = new TH1D("h_e_old", "hist nue old files", 20, 0, 2);
  TH1D* h_mu_old = new TH1D("h_mu_old", "hist numu old files", 20, 0, 2);
     
  TH1D* hist_e_new = (TH1D*)(infile1D_new->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu_new = (TH1D*)(infile1D_new->Get(Form("h%s_mu_1", var.c_str())));

  TH1D* h_e_new = new TH1D("h_e_new", "hist nue new files", 20, 0, 2);
  TH1D* h_mu_new = new TH1D("h_mu_new", "hist numu new files", 20, 0, 2);

  for (int i=0; i<20; ++i){
    float e_old = hist_e_old->GetBinContent(i);
    float mu_old = hist_mu_old->GetBinContent(i);
    float e_new = hist_e_new->GetBinContent(i);
    float mu_new = hist_mu_new->GetBinContent(i);

    float ebar_old = hist_C_ebar_old->GetBinContent(i);
    float mubar_old = hist_C_mubar_old->GetBinContent(i);
    float ebar_new = hist_O_ebar_new->GetBinContent(i);
    float mubar_new = hist_O_mubar_new->GetBinContent(i);
    
    h_e_old->SetBinContent(i,e_old/530529);
    h_mu_old->SetBinContent(i,mu_old/513804);
    h_e_new->SetBinContent(i,e_new/7360520);
    h_mu_new->SetBinContent(i,mu_new/7102560);

    h_ebar_old->SetBinContent(i,ebar_old/404048);
    h_mubar_old->SetBinContent(i,mubar_old/392709);
    h_ebar_new->SetBinContent(i,ebar_new/7434960);
    h_mubar_new->SetBinContent(i,mubar_new/7100770);
  }

  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s sup QE old and new", var.c_str()));

  h_mu_new->Draw("same,hist");
  h_mu_new->SetLineColor(4);
  h_mu_new->SetLineStyle(kDashed);
  h_mu_new->SetMarkerSize(0);
  h_mu_new->SetLineWidth(2);
  h_mu_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_new->Scale(7102560);
  
  h_e_new->Draw("same,hist");
  h_e_new->SetLineColor(4);
  h_e_new->SetMarkerSize(0);
  h_e_new->SetLineWidth(2);
  h_e_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_new->Scale(7360520);

  h_e_old->Draw("same,hist");
  h_e_old->SetLineColor(2);
  h_e_old->SetMarkerSize(0);
  h_e_old->SetLineWidth(2);
  h_e_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_old->Scale(530529);
  
  h_mu_old->Draw("same,hist");
  h_mu_old->SetLineColor(2);
  h_mu_old->SetLineStyle(kDashed);
  h_mu_old->SetMarkerSize(0);
  h_mu_old->SetLineWidth(2);
  h_mu_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_old->Scale(513804);

  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(h_e_old, "#nu_{e} CCQE on C, old files ");
  leg1D_sup->AddEntry(h_mu_old, "#nu_{#mu} CCQE on C, old files");
  leg1D_sup->AddEntry(h_e_new, "#nu_{e} CCQE on O, new files ");
  leg1D_sup->AddEntry(h_mu_new, "#nu_{#mu} CCQE on O, new files");
 
  leg1D_sup->Draw();

  TCanvas *c1D_supbar = new TCanvas(Form("histogramme %s sup QE old and new nubar", var.c_str()));
  TLegend *leg1D_supbar = new TLegend(0.4,0.5,0.6,0.7);

  h_mubar_new->Draw("same,hist");
  h_mubar_new->SetLineColor(4);
  h_mubar_new->SetLineStyle(kDashed);
  h_mubar_new->SetMarkerSize(0);
  h_mubar_new->SetLineWidth(2);
  h_mubar_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_new->Scale(7102560);
  
  h_ebar_new->Draw("same,hist");
  h_ebar_new->SetLineColor(4);
  h_ebar_new->SetMarkerSize(0);
  h_ebar_new->SetLineWidth(2);
  h_ebar_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_new->Scale(7360520);

  h_ebar_old->Draw("same,hist");
  h_ebar_old->SetLineColor(2);
  h_ebar_old->SetMarkerSize(0);
  h_ebar_old->SetLineWidth(2);
  h_ebar_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_old->Scale(530529);
  
  h_mubar_old->Draw("same,hist");
  h_mubar_old->SetLineColor(2);
  h_mubar_old->SetLineStyle(kDashed);
  h_mubar_old->SetMarkerSize(0);
  h_mubar_old->SetLineWidth(2);
  h_mubar_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_old->Scale(513804);
 
  c1D_supbar->SetGrid(1,1);
  leg1D_supbar->AddEntry(h_e_old, "#bar{#nu_{e}} CCQE on C, old files ");
  leg1D_supbar->AddEntry(h_mu_old, "#bar{#nu_{#mu}} CCQE on C, old files");
  leg1D_supbar->AddEntry(h_e_new, "#bar{#nu_{e}} CCQE on O, new files ");
  leg1D_supbar->AddEntry(h_mu_new, "#bar{#nu_{#mu}} CCQE on O, new files");
 
  leg1D_supbar->Draw();


}



void AgatheAnalysis::plotTH1D_superposes_oldnew (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;
  int nbin = 95;
  
  TFile * infile1D_old = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN");
  TFile * infile1D_new = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TLegend *leg1D_sup = new TLegend(0.4,0.5,0.6,0.7);
  
  TH1D* hist_e_old = (TH1D*)(infile1D_old->Get(Form("h%s_e_30", var.c_str())));
  TH1D* hist_mu_old = (TH1D*)(infile1D_old->Get(Form("h%s_mu_30", var.c_str())));

  std::cout << hist_e_old->Integral() << std::endl;
  std::cout << hist_mu_old->Integral() << std::endl;

  TH1D* h_e_old = new TH1D("h_ebar_old", "hist nue old files", nbin, 0.1, 2);
  TH1D* h_mu_old = new TH1D("h_mubar_old", "hist numu old files", nbin, 0.1, 2);
     
  TH1D* hist_e_new = (TH1D*)(infile1D_new->Get(Form("h%s_e_30", var.c_str())));
  TH1D* hist_mu_new = (TH1D*)(infile1D_new->Get(Form("h%s_mu_30", var.c_str())));

  TH1D* h_e_new = new TH1D("h_ebar_new", "hist nue new files", nbin, 0.1, 2);
  TH1D* h_mu_new = new TH1D("h_mubar_new", "hist numu new files", nbin, 0.1, 2);

  float max_e_old = hist_e_old->GetMaximum();
  float max_mu_old = hist_mu_old->GetMaximum();
  float max_e_new = hist_e_new->GetMaximum();
  float max_mu_new = hist_mu_new->GetMaximum();

  for (int i=0; i<nbin; ++i){
    float e_old = hist_e_old->GetBinContent(i);
    float mu_old = hist_mu_old->GetBinContent(i);
    float e_new = hist_e_new->GetBinContent(i);
    float mu_new = hist_mu_new->GetBinContent(i);

    h_e_old->SetBinContent(i,e_old/max_e_old);
    h_mu_old->SetBinContent(i,mu_old/max_mu_old);
    h_e_new->SetBinContent(i,e_new/max_e_new);
    h_mu_new->SetBinContent(i,mu_new/max_mu_new);

    
  }

   TCanvas *c1D_new = new TCanvas(Form("histogramme %s sup new", var.c_str()));
   hist_mu_new->Draw("same,hist");
  hist_mu_new->SetLineColor(4);
  hist_mu_new->SetLineStyle(kDashed);
  hist_mu_new->SetMarkerSize(0);
  hist_mu_new->SetLineWidth(2);
  hist_mu_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_new->Scale(7102560);
  
  hist_e_new->Draw("same,hist");
  hist_e_new->SetLineColor(4);
  hist_e_new->SetMarkerSize(0);
  hist_e_new->SetLineWidth(2);
  hist_e_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_new->Scale(7360520);

  TCanvas *c1D_old = new TCanvas(Form("histogramme %s sup old", var.c_str()));
  hist_e_old->Draw("same,hist");
  hist_e_old->SetLineColor(2);
  hist_e_old->SetMarkerSize(0);
  hist_e_old->SetLineWidth(2);
  hist_e_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_old->Scale(530529);
  
  hist_mu_old->Draw("same,hist");
  hist_mu_old->SetLineColor(2);
  hist_mu_old->SetLineStyle(kDashed);
  hist_mu_old->SetMarkerSize(0);
  hist_mu_old->SetLineWidth(2);
  hist_mu_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_old->Scale(513804);

  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s sup QE old and new", var.c_str()));

  h_mu_new->Draw("same,hist");
  h_mu_new->SetLineColor(4);
  h_mu_new->SetLineStyle(kDashed);
  h_mu_new->SetMarkerSize(0);
  h_mu_new->SetLineWidth(2);
  h_mu_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_new->Scale(7102560);
  
  h_e_new->Draw("same,hist");
  h_e_new->SetLineColor(4);
  h_e_new->SetMarkerSize(0);
  h_e_new->SetLineWidth(2);
  h_e_new->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_new->Scale(7360520);

  h_e_old->Draw("same,hist");
  h_e_old->SetLineColor(2);
  h_e_old->SetMarkerSize(0);
  h_e_old->SetLineWidth(2);
  h_e_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e_old->Scale(530529);
  
  h_mu_old->Draw("same,hist");
  h_mu_old->SetLineColor(2);
  h_mu_old->SetLineStyle(kDashed);
  h_mu_old->SetMarkerSize(0);
  h_mu_old->SetLineWidth(2);
  h_mu_old->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu_old->Scale(513804);

  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(h_e_old, "#nu_{e} CCQE on C, old files ");
  leg1D_sup->AddEntry(h_mu_old, "#nu_{#mu} CCQE on C, old files");
  leg1D_sup->AddEntry(h_e_new, "#nu_{e} CCQE on O, new files ");
  leg1D_sup->AddEntry(h_mu_new, "#nu_{#mu} CCQE on O, new files");
 
  leg1D_sup->Draw();


}




void AgatheAnalysis::plotTH1D_xsec (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;
  int nbin = 100;

  std::vector<int> mods = {30, 1, 26, 11, 2};
  std::map<int, TH1D*> hExsec_e_;
  std::map<int, TH1D*> hExsec_mu_;
  
  hExsec_e_[30] = new TH1D("hExsec_e_30","histogramme Enu total xsec nue",nbin,0,2);
  hExsec_e_[1] = new TH1D("hExsec_e_1","histogramme Enu CCQE xsec nue ",nbin,0,2);
  hExsec_e_[2] = new TH1D("hExsec_e_2","histogramme Enu 2p2h xsec nue",nbin,0,2);
  hExsec_e_[11] = new TH1D("hExsec_e_11","histogramme Enu RES xsec nue",nbin,0,2);
  hExsec_e_[26] = new TH1D("hExsec_e_26","histogramme Enu DIS xsec nue",nbin,0,2);

  hExsec_mu_[30] = new TH1D("hExsec_mu_30","histogramme Enu total xsec numu",nbin,0,2);
  hExsec_mu_[1] = new TH1D("hExsec_mu_1","histogramme Enu CCQE xsec numu",nbin,0,2);
  hExsec_mu_[2] = new TH1D("hExsec_mu_2","histogramme Enu 2p2h xsec numu",nbin,0,2);
  hExsec_mu_[11] = new TH1D("hExsec_mu_11","histogramme Enu RES xsec numu",nbin,0,2);
  hExsec_mu_[26] = new TH1D("hExsec_mu_26","histogramme Enu DIS xsec numu",nbin,0,2);
  
  
  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsec = new TCanvas(Form("histogramme %s cross section", var.c_str()));
  TLegend *leg1D_xsec = new TLegend(0.4,0.5,0.6,0.7);

  /*
  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));

  TH1D *hExsec_O_e = new TH1D("hExsec_e_O","histogramme Enu O xsec nue",20,0,2);
  TH1D *hExsec_H_e = new TH1D("hEnu_hExsec_e_H","histogramme Enu H xsec nue",20,0,2);
  TH1D *hExsec_O_mu = new TH1D("hExsec_mu_O","histogramme Enu O xsec numu",20,0,2);
  TH1D *hExsec_H_mu = new TH1D("hEnu_hExsec_mu_H","histogramme Enu H xsec numu",20,0,2);
  */

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : mods) {
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));

    TH1D* hExsec_e = hExsec_e_[mod];
    TH1D* hExsec_mu = hExsec_mu_[mod];
    
  
    double sigma_e = 0;
    double sigma_mu = 0;
    double sigma_O_e = 0;
    double sigma_O_mu = 0;
    double sigma_H_e = 0;
    double sigma_H_mu = 0;
   
    for (int j=1; j<=nbin; ++j){

      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);
      /*
      double he_O_Content = hist_O_e->GetBinContent(j);
      double hmu_O_Content = hist_O_mu->GetBinContent(j);
      double he_H_Content = hist_H_e->GetBinContent(j);
      double hmu_H_Content = hist_H_mu->GetBinContent(j);
      */
      sigma_e = heContent*pow(10.0,38.0);  
      sigma_mu = hmuContent*pow(10.0,38.0);
      /*
      sigma_O_e += he_O_Content*scalefactor_e*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
      sigma_O_mu += hmu_O_Content*scalefactor_mu*10*0.1*pow(10.0,38.0);
      sigma_H_e += he_H_Content*scalefactor_e*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
      sigma_H_mu += hmu_H_Content*scalefactor_mu*10*0.1*pow(10.0,38.0);
      */
      hExsec_e->SetBinContent(j, sigma_e);
      hExsec_mu->SetBinContent(j, sigma_mu);
      /*
      hExsec_O_e->SetBinContent(j, sigma_O_e);
      hExsec_O_mu->SetBinContent(j, sigma_O_mu);
      hExsec_H_e->SetBinContent(j, sigma_H_e);
      hExsec_H_mu->SetBinContent(j, sigma_H_mu);
      */
    }

    std::cout << "xsec nue = " << sigma_e << " xsec numu = " << sigma_mu << std::endl;


    if (mod==30){
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetLineWidth(3);
      hExsec_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hExsec_e->Scale(scalefactor_e, "width");

      std::cout << "xsec max = " << hExsec_e->GetMaximum() << std::endl;

      //gStyle->SetEndErrorSize(3);
      //gStyle->SetErrorX(1.);
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetLineWidth(3);
      hExsec_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hExsec_mu->Scale(scalefactor_mu, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetMarkerSize(0);
      hExsec_e->SetLineWidth(2);
      hExsec_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hExsec_e->Scale(scalefactor_e, "width");
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetMarkerSize(0);
      hExsec_mu->SetLineWidth(2);
      hExsec_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hExsec_mu->Scale(scalefactor_mu, "width");
    }

    color++;
  }

  /*
  hExsec_H_e->Draw("same,hist");
  hExsec_H_e->SetLineColor(7);
  hExsec_H_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hExsec_H_mu->Draw("same,hist");
  hExsec_H_mu->SetLineColor(7);
  hExsec_H_mu->SetLineStyle(kDashed);
  hExsec_H_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");

  hExsec_O_e->Draw("same,hist");
  hExsec_O_e->SetLineColor(28);
  hExsec_O_e->SetLineWidth(4);
  //hist_H_e->Scale(scalefactor_ebar, "width");
  hExsec_O_mu->Draw("same,hist");
  hExsec_O_mu->SetLineColor(28);
  hExsec_O_mu->SetLineStyle(kDashed);
  hExsec_O_mu->SetLineWidth(4);
  //hist_H_mu->Scale(scalefactor_mubar, "width");
  */
  
  c1D_xsec->SetGrid(1,1);
  leg1D_xsec->AddEntry("hExsec_e_30", "#nu_{e} Total");
  leg1D_xsec->AddEntry("hExsec_e_1", "#nu_{e} CCQE");
  leg1D_xsec->AddEntry("hExsec_e_2", "#nu_{e} 2p2h");
  leg1D_xsec->AddEntry("hExsec_e_11", "#nu_{e} RES");
  leg1D_xsec->AddEntry("hExsec_e_26", "#nu_{e} DIS");
  
  leg1D_xsec->AddEntry("hExsec_mu_30", "#nu_{#mu} Total");
  leg1D_xsec->AddEntry("hExsec_mu_1", "#nu_{#mu} CCQE");
  leg1D_xsec->AddEntry("hExsec_mu_2", "#nu_{#mu} 2p2h");
  leg1D_xsec->AddEntry("hExsec_mu_11", "#nu_{#mu} RES");
  leg1D_xsec->AddEntry("hExsec_mu_26", "#nu_{#mu} DIS");

  /*
  leg1D_xsec->AddEntry(Form("h%s_H_mu_30",var.c_str()), "#nu_{#mu} Total sur H");
  leg1D_xsec->AddEntry(Form("h%s_H_e_30",var.c_str()), "#nu_{e} Total sur H");
  leg1D_xsec->AddEntry(Form("h%s_O_mu_30",var.c_str()), "#nu_{#mu} Total sur C");
  leg1D_xsec->AddEntry(Form("h%s_O_e_30",var.c_str()), "#nu_{e} Total sur C");
  */
  leg1D_xsec->Draw();


}



void AgatheAnalysis::plotTH1D_xsec_overE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  std::vector<int> mods = {30, 1, 26, 11, 2};
  std::map<int, TH1D*> hExsec_e_;
  std::map<int, TH1D*> hExsec_mu_;
  
  hExsec_e_[30] = new TH1D("hExsec_e_30","histogramme Enu total xsec nue",20,0,2);
  hExsec_e_[1] = new TH1D("hExsec_e_1","histogramme Enu CCQE xsec nue ",20,0,2);
  hExsec_e_[2] = new TH1D("hExsec_e_2","histogramme Enu 2p2h xsec nue",20,0,2);
  hExsec_e_[11] = new TH1D("hExsec_e_11","histogramme Enu RES xsec nue",20,0,2);
  hExsec_e_[26] = new TH1D("hExsec_e_26","histogramme Enu DIS xsec nue",20,0,2);

  hExsec_mu_[30] = new TH1D("hExsec_mu_30","histogramme Enu total xsec numu",20,0,2);
  hExsec_mu_[1] = new TH1D("hExsec_mu_1","histogramme Enu CCQE xsec numu",20,0,2);
  hExsec_mu_[2] = new TH1D("hExsec_mu_2","histogramme Enu 2p2h xsec numu",20,0,2);
  hExsec_mu_[11] = new TH1D("hExsec_mu_11","histogramme Enu RES xsec numu",20,0,2);
  hExsec_mu_[26] = new TH1D("hExsec_mu_26","histogramme Enu DIS xsec numu",20,0,2);
  
  
  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsec_ovE = new TCanvas(Form("histogramme %s cross section over E", var.c_str()));

  TLegend *leg1D_xsec = new TLegend(0.4,0.5,0.6,0.7);
  
  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : mods) {
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));

    TH1D* hExsec_e = hExsec_e_[mod];
    TH1D* hExsec_mu = hExsec_mu_[mod];
    
  
    double sigma_e = 0;
    double sigma_mu = 0;
    double sigma_O_e = 0;
    double sigma_O_mu = 0;
    double sigma_H_e = 0;
    double sigma_H_mu = 0;
   
    for (int j=1; j<=20; ++j){

      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);

      double heCenter = hist_e->GetBinCenter(j);
      double hmuCenter = hist_mu->GetBinCenter(j);
     
      sigma_e += heContent*scalefactor_e*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
      sigma_mu += hmuContent*scalefactor_mu*10*0.1*pow(10.0,38.0);
    
      hExsec_e->SetBinContent(j, sigma_e/heCenter);
      hExsec_mu->SetBinContent(j, sigma_mu/hmuCenter);
   
    }

    std::cout << "xsec nue = " << sigma_e << " xsec numu = " << sigma_mu << std::endl;


    if (mod==30){
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetLineWidth(3);
      hExsec_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_e->Scale(scalefactor_ebar, "width");
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetLineWidth(3);
      hExsec_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_mu->Scale(scalefactor_mubar, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetMarkerSize(0);
      hExsec_e->SetLineWidth(2);
      hExsec_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hist_e->Scale(scalefactor_ebar, "width");
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetMarkerSize(0);
      hExsec_mu->SetLineWidth(2);
      hExsec_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hist_mu->Scale(scalefactor_mubar, "width");
    }

    color++;
  }
  
  c1D_xsec_ovE->SetGrid(1,1);
  leg1D_xsec->AddEntry("hExsec_e_30", "#nu_{e} Total");
  leg1D_xsec->AddEntry("hExsec_e_1", "#nu_{e} CCQE");
  leg1D_xsec->AddEntry("hExsec_e_2", "#nu_{e} 2p2h");
  leg1D_xsec->AddEntry("hExsec_e_11", "#nu_{e} RES");
  leg1D_xsec->AddEntry("hExsec_e_26", "#nu_{e} DIS");
  
  leg1D_xsec->AddEntry("hExsec_mu_30", "#nu_{#mu} Total");
  leg1D_xsec->AddEntry("hExsec_mu_1", "#nu_{#mu} CCQE");
  leg1D_xsec->AddEntry("hExsec_mu_2", "#nu_{#mu} 2p2h");
  leg1D_xsec->AddEntry("hExsec_mu_11", "#nu_{#mu} RES");
  leg1D_xsec->AddEntry("hExsec_mu_26", "#nu_{#mu} DIS");

  /*
  leg1D_xsec->AddEntry("hExsec_H_mu", "#nu_{#mu} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_H_e", "#nu_{e} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_O_mu", "#nu_{#mu} CCQE sur O");
  leg1D_xsec->AddEntry("hExsec_O_e", "#nu_{e} CCQE sur O");
  */
  leg1D_xsec->Draw();


}



void AgatheAnalysis::plotTH1D_xsec_overE_test (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  std::vector<int> mods = {30, 1, 26, 11, 2};  
  std::map<int, TH1D*> hxsecE_e_;
  std::map<int, TH1D*> hxsecE_mu_;

  int nbin = 100;
  
  hxsecE_e_[30] = new TH1D("hxsecE_e_30","histogramme xsec over E total nue",nbin,0,2);
  hxsecE_e_[1] = new TH1D("hxsecE_e_1","histogramme xsec over E CCQE nue ",nbin,0,2);
  hxsecE_e_[2] = new TH1D("hxsecE_e_2","histogramme xsec over E 2p2h nue",nbin,0,2);
  hxsecE_e_[11] = new TH1D("hxsecE_e_11","histogramme xsec overE RES nue",nbin,0,2);
  hxsecE_e_[26] = new TH1D("hxsecE_e_26","histogramme xsec over E DIS nue",nbin,0,2);

  hxsecE_mu_[30] = new TH1D("hxsecE_mu_30","histogramme xsec over E total numu",nbin,0,2);
  hxsecE_mu_[1] = new TH1D("hxsecE_mu_1","histogramme xsec over E CCQE numu",nbin,0,2);
  hxsecE_mu_[2] = new TH1D("hxsecE_mu_2","histogramme xsec over E 2p2h numu",nbin,0,2);
  hxsecE_mu_[11] = new TH1D("hxsecE_mu_11","histogramme xsec over E RES numu",nbin,0,2);
  hxsecE_mu_[26] = new TH1D("hxsecE_mu_26","histogramme xsec over E DIS numu",nbin,0,2);
  
  
  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_test = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsec_ovE_test = new TCanvas(Form("histogramme %s cross section over E test", var.c_str()));

  TLegend *leg1D_xsec = new TLegend(0.9,0.42,0.78,0.8);

  std::string outfile_xsecE = "~/Code_agathe/OldFiles/output_OldFiles/output_xsecE.pdf";
  
  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : mods) {
      
    TH1D* hist_e = (TH1D*)(infile1D_test->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_test->Get(Form("h%s_mu_%d", var.c_str(), mod)));

    TH1D* hxsecE_e = hxsecE_e_[mod];
    TH1D* hxsecE_mu = hxsecE_mu_[mod];
    
  
    double sigma_e = 0;
    double sigma_mu = 0;
    double sigma_O_e = 0;
    double sigma_O_mu = 0;
    double sigma_H_e = 0;
    double sigma_H_mu = 0;
   
    for (int j=1; j<=nbin; ++j){

      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);

      double heCenter = hist_e->GetBinCenter(j);
      double hmuCenter = hist_mu->GetBinCenter(j);
    
      hxsecE_e->SetBinContent(j, (heContent/heCenter));
      hxsecE_mu->SetBinContent(j, (hmuContent/hmuCenter));
   
    }


    if (mod==30){
      hxsecE_e->Draw("same,hist");
      hxsecE_e->SetLineColor(color);
      hxsecE_e->SetLineWidth(3);
      hxsecE_e->SetTitle(Form("histogramme %s cross section over E tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hxsecE_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");

      std::cout << "xsec std::max = " << hxsecE_e->GetMaximum() << std::endl;
      
      hxsecE_mu->Draw("same,hist");
      hxsecE_mu->SetLineColor(color);
      hxsecE_mu->SetLineStyle(kDashed);
      hxsecE_mu->SetLineWidth(3);
      hxsecE_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hxsecE_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hxsecE_e->Draw("same,hist");
      hxsecE_e->SetLineColor(color);
      hxsecE_e->SetMarkerSize(0);
      hxsecE_e->SetLineWidth(2);
      hxsecE_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hxsecE_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");

      gStyle->SetStatX(0);
      
      hxsecE_mu->Draw("same,hist");
      hxsecE_mu->SetLineColor(color);
      hxsecE_mu->SetLineStyle(kDashed);
      hxsecE_mu->SetMarkerSize(0);
      hxsecE_mu->SetLineWidth(2);
      hxsecE_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hxsecE_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
    }

    color++;
  }
  
  c1D_xsec_ovE_test->SetGrid(1,1);
  leg1D_xsec->AddEntry("hxsecE_e_30", "#nu_{e} Total");
  leg1D_xsec->AddEntry("hxsecE_e_1", "#nu_{e} CCQE");
  leg1D_xsec->AddEntry("hxsecE_e_2", "#nu_{e} 2p2h");
  leg1D_xsec->AddEntry("hxsecE_e_11", "#nu_{e} RES");
  leg1D_xsec->AddEntry("hxsecE_e_26", "#nu_{e} DIS");
  
  leg1D_xsec->AddEntry("hxsecE_mu_30", "#nu_{#mu} Total");
  leg1D_xsec->AddEntry("hxsecE_mu_1", "#nu_{#mu} CCQE");
  leg1D_xsec->AddEntry("hxsecE_mu_2", "#nu_{#mu} 2p2h");
  leg1D_xsec->AddEntry("hxsecE_mu_11", "#nu_{#mu} RES");
  leg1D_xsec->AddEntry("hxsecE_mu_26", "#nu_{#mu} DIS");

  /*
  leg1D_xsec->AddEntry("hExsec_H_mu", "#nu_{#mu} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_H_e", "#nu_{e} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_O_mu", "#nu_{#mu} CCQE sur O");
  leg1D_xsec->AddEntry("hExsec_O_e", "#nu_{e} CCQE sur O");
  */
  leg1D_xsec->Draw();

  c1D_xsec_ovE_test->SaveAs(outfile_xsecE.c_str());


}





void AgatheAnalysis::plotTH1D_xsec_QE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 2;

  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsecQE = new TCanvas(Form("histogramme %s cross section QE", var.c_str()));

  TLegend *leg1D_xsecQE = new TLegend(0.1,0.55,0.35,0.9);
  std::string outfile_H2O = "~/Code_agathe/OldFiles/output_OldFiles/output_H2O.pdf";

  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));

  TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_1", var.c_str())));
      
  hist_e->Draw("same,hist,E1");
  hist_e->SetLineColor(color);
  hist_e->SetMarkerSize(0);
  hist_e->SetLineWidth(2);
  hist_e->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e->SetMinimum(0.0);
  hist_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");

  gStyle->SetStatX(0);
  
  hist_mu->Draw("same,hist,E1");
  hist_mu->SetLineColor(color);
  hist_mu->SetLineStyle(kDashed);
  hist_mu->SetMarkerSize(0);
  hist_mu->SetLineWidth(2);
  hist_mu->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
 

  hist_H_e->Draw("same,hist,E1");
  hist_H_e->SetLineColor(7);
  hist_H_e->SetLineWidth(2);
  hist_H_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");
  hist_H_mu->Draw("same,hist,E1");
  hist_H_mu->SetLineColor(7);
  hist_H_mu->SetLineStyle(kDashed);
  hist_H_mu->SetLineWidth(2);
  hist_H_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");

  hist_O_e->Draw("same,hist,E1");
  hist_O_e->SetLineColor(28);
  hist_O_e->SetLineWidth(2);
  hist_O_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");
  hist_O_mu->Draw("same,hist,E1");
  hist_O_mu->SetLineColor(28);
  hist_O_mu->SetLineStyle(kDashed);
  hist_O_mu->SetLineWidth(2);
  hist_O_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
  
  c1D_xsecQE->SetGrid(1,1);
  leg1D_xsecQE->AddEntry(hist_e, "#nu_{e} CCQE");
  leg1D_xsecQE->AddEntry(hist_mu, "#nu_{#mu} CCQE");

  leg1D_xsecQE->AddEntry(hist_H_mu, "#nu_{#mu} Total sur H");
  leg1D_xsecQE->AddEntry(hist_H_e, "#nu_{e} Total sur H");
  leg1D_xsecQE->AddEntry(hist_O_mu, "#nu_{#mu} Total sur C");
  leg1D_xsecQE->AddEntry(hist_O_e, "#nu_{e} Total sur C");

  leg1D_xsecQE->Draw();

  c1D_xsecQE->SaveAs(outfile_H2O.c_str()); 


}




void AgatheAnalysis::plotTH1D_normalise (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s flat", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.4,0.5,0.6,0.7);

  std::string outfile_norm = "~/Code_agathe/OldFiles/output_OldFiles/output_norm.pdf";

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));

        

    if (mod==30){
      hist_e->Draw("same,hist,E");
      hist_e->SetLineColor(color);
      hist_e->SetLineWidth(3);
      hist_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hist_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");

      std::cout << "xsec std::max = " << hist_e->GetMaximum() << std::endl;

      //gStyle->SetEndErrorSize(3);
      //gStyle->SetErrorX(1.);

      gStyle->SetStatX(0);
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetLineWidth(3);
      hist_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hist_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hist_e->Draw("same,hist,E");
      hist_e->SetLineColor(color);
      hist_e->SetMarkerSize(0);
      hist_e->SetLineWidth(2);
      hist_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hist_e->SetMinimum(0.0);
      hist_e->Scale(scalefactor_ebar*pow(10.0,38.0), "width");
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetMarkerSize(0);
      hist_mu->SetLineWidth(2);
      hist_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hist_mu->Scale(scalefactor_mubar*pow(10.0,38.0), "width");
    }

    color++;
  }

  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(Form("h%s_e_30",var.c_str()), "#nu_{e} Total");
  leg1D_sup->AddEntry(Form("h%s_e_1",var.c_str()), "#nu_{e} CCQE");
  leg1D_sup->AddEntry(Form("h%s_e_2",var.c_str()), "#nu_{e} 2p2h");
  leg1D_sup->AddEntry(Form("h%s_e_11",var.c_str()), "#nu_{e} RES");
  leg1D_sup->AddEntry(Form("h%s_e_26",var.c_str()), "#nu_{e} DIS");
  leg1D_sup->AddEntry(Form("h%s_mu_30",var.c_str()), "#nu_{#mu} Total");
  leg1D_sup->AddEntry(Form("h%s_mu_1",var.c_str()), "#nu_{#mu} CCQE");
  leg1D_sup->AddEntry(Form("h%s_mu_2",var.c_str()), "#nu_{#mu} 2p2h");
  leg1D_sup->AddEntry(Form("h%s_mu_11",var.c_str()), "#nu_{#mu} RES");
  leg1D_sup->AddEntry(Form("h%s_mu_26",var.c_str()), "#nu_{#mu} DIS");

  //leg1D_sup->Draw();

  c1D_sup->SaveAs(outfile_norm.c_str());


}



//Trace un histogramme 1D du rapport nu(bar)_e sur nu(bar)_mu la variable var avec les 4 modes étudiés sur un canvas et le total sur un autre canvas
void AgatheAnalysis::plotTH1D_divide(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 1;
  
 TFile * infile1D_div = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
 TCanvas *c1D_div = new TCanvas(Form("histogramme %s_e sur %s_mu", var.c_str(), var.c_str()));
 c1D_div->Divide(2,2,0.01,0.01);

 std::vector<int> mods = {30, 1, 26, 11, 2};
 std::map<int, TH1D*> hdivMap;

 int xmin = 0;
 int xmax = 2;
 if ((var == "cos")||(var == "cosbar")){
   xmin = -1;
   xmax = 1;
 }

 TLine *L1 = new TLine(xmin,1,xmax,1);

 hdivMap[30] = new TH1D("hdiv_30", "histogramme du ratio nue numu tot", 20,xmin, xmax);
 hdivMap[1] = new TH1D("hdiv_1", "histogramme du ratio nue numu ccqe", 20,xmin, xmax);
 hdivMap[2] = new TH1D("hdiv_2", "histogramme du ratio nue numu 2p2h", 20,xmin, xmax);
 hdivMap[11] = new TH1D("hdiv_11", "histogramme du ratio nue numu res", 20,xmin, xmax);
 hdivMap[26] = new TH1D("hdiv_26", "histogramme du ratio nue numu dis", 20,xmin, xmax);

 // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
 for (int mod : mods) {
   
   TH1D* hist_e = (TH1D*)(infile1D_div->Get(Form("h%s_e_%d", var.c_str(), mod)));
   TH1D* hist_mu = (TH1D*)(infile1D_div->Get(Form("h%s_mu_%d", var.c_str(), mod)));
   TH1D* hdiv = hdivMap[mod];

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=20; ++bin) {
     //std::cout << bin << std::endl;
     double heContent = hist_e->GetBinContent(bin);
     double heError = hist_e->GetBinError(bin);
     double hmuContent = hist_mu->GetBinContent(bin);
     double hmuError = hist_mu->GetBinError(bin);

     if (hmuContent != 0){
       double hdivContent = heContent/hmuContent;
       double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );

       hdiv->SetBinContent(bin, hdivContent);
       hdiv->SetBinError(bin, hdivError_prop);

       if (hdivError_prop > 1){
	 std::cout << "Bin " << bin << " - he : " << heContent << " +/- " << heError << ",  hmu : " << hmuContent << " +/- " << hmuError <<  ", hdiv : " << hdivContent << " +/- " << hdivError_prop << std::endl;
       }
     }

     else {
       hdiv->SetBinContent(bin, 0);
       hdiv->SetBinError(bin, 0);
     }
  }


    if (mod==30){
      TCanvas *c1D_tot = new TCanvas(Form("histogramme %s total", var.c_str()));

      hdiv->Draw("same,hist,E1");
      hdiv->SetLineColor(color);
      hdiv->SetLineWidth(2);
      //hdiv->SetMinimum(0);
      //hdiv->SetMaximum(15);
      hdiv->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
      c1D_tot->SetGrid(1,1);
    }

    
    else {
      if (color==5){
	color++;
	  }
      c1D_div->cd(cpt);
      c1D_div->cd(cpt)->SetGrid(1,1);
    
      hdiv->Draw("same,hist,E1");
      hdiv->SetLineColor(color);
      hdiv->SetLineWidth(2);
      //hdiv->SetMinimum(0);
      //hdiv->SetMaximum(15);
      hdiv->SetTitle(Form("histogramme ratio %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
    
    }
    cpt++;
    color++;
  }

  c1D_div->SetGrid(1,1);
  
}


//Trace un histogramme 1D du rapport nu_e sur nu_mu et nu_ebar sur nu_mubar la variable var avec les 4 modes étudiés sur un canvas et le total sur un autre canvas
void AgatheAnalysis::plotTH1D_divide_superposés(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 2;
 int cpt = 1;

 TFile * infile_e = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nue_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_nuebar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/flat_0-10GeV_numubar_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  
 TFile * infile1D_divsup = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
 TCanvas *c1D_divsup = new TCanvas(Form("histogramme %s_e sur %s_mu nu et nubar", var.c_str(), var.c_str()));
 c1D_divsup->Divide(2,2,0.01,0.01);

 TLegend *leg1D_divsuptot = new TLegend(0.4,0.5,0.6,0.7);
 std::string outfile_divide_sup = "~/Code_agathe/OldFiles/output_OldFiles/output_divide_sup.pdf";

 std::vector<int> mods = {1, 26, 11, 2};
 std::map<int, TH1D*> hdivsup;
 std::map<int, TH1D*> hdivsupbar;

 int xmin = 0;
 int xmax = 2;
 if (var == "cos"){
   xmin = -1;
   xmax = 1;
 }

 TLine *L1 = new TLine(xmin,1,xmax,1);

 hdivsup[1] = new TH1D("hdivsup_1", "histogramme du ratio nue numu ccqe sup", nbin,xmin, xmax);
 hdivsup[2] = new TH1D("hdivsup_2", "histogramme du ratio nue numu 2p2h sup", nbin,xmin, xmax);
 hdivsup[11] = new TH1D("hdivsup_11", "histogramme du ratio nue numu res sup", nbin,xmin, xmax);
 hdivsup[26] = new TH1D("hdivsup_26", "histogramme du ratio nue numu dis sup", nbin,xmin, xmax);

 hdivsupbar[1] = new TH1D("hdivsupbar_1", "histogramme du ratio nue numu bar ccqe sup", nbin,xmin, xmax);
 hdivsupbar[2] = new TH1D("hdivsupbar_2", "histogramme du ratio nue numu bar 2p2h sup", nbin,xmin, xmax);
 hdivsupbar[11] = new TH1D("hdivsupbar_11", "histogramme du ratio nue numu bar res sup", nbin,xmin, xmax);
 hdivsupbar[26] = new TH1D("hdivsupbar_26", "histogramme du ratio nue numu bar dis sup", nbin,xmin, xmax);

 // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
 for (int mod : mods) {

   double maxY = 0;
   double maxYbar = 0;
   double maxtot = 0;
   
   TH1D* hist_e = (TH1D*)(infile1D_divsup->Get(Form("h%s_e_%d", var.c_str(), mod)));
   TH1D* hist_mu = (TH1D*)(infile1D_divsup->Get(Form("h%s_mu_%d", var.c_str(), mod)));
   TH1D* h = hdivsup[mod];
   TH1D* hist_ebar = (TH1D*)(infile1D_divsup->Get(Form("h%sbar_e_%d", var.c_str(), mod)));
   TH1D* hist_mubar = (TH1D*)(infile1D_divsup->Get(Form("h%sbar_mu_%d", var.c_str(), mod)));
   TH1D* hbar = hdivsupbar[mod];

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=nbin; ++bin) {
     //std::cout << bin << std::endl;
     double heContent = hist_e->GetBinContent(bin);
     double heError = hist_e->GetBinError(bin);
     double hmuContent = hist_mu->GetBinContent(bin);
     double hmuError = hist_mu->GetBinError(bin);
     double hebarContent = hist_ebar->GetBinContent(bin);
     double hebarError = hist_ebar->GetBinError(bin);
     double hmubarContent = hist_mubar->GetBinContent(bin);
     double hmubarError = hist_mubar->GetBinError(bin);

     if (hmuContent != 0){
       double hdivContent = (heContent*scalefactor_e)/(hmuContent*scalefactor_mu);
       double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );
       //double hdivError_prop = sqrt( ((heError*sqrt(scalefactor_e))/(hmuContent*scalefactor_mu))*((heError*sqrt(scalefactor_e))/(hmuContent*scalefactor_mu)) + ((hmuError*sqrt(scalefactor_mu)*heContent*scalefactor_e)/(hmuContent*hmuContent*scalefactor_mu*scalefactor_mu))*((hmuError*sqrt(scalefactor_mu)*heContent*scalefactor_e)/(hmuContent*hmuContent*scalefactor_mu*scalefactor_mu)) );

       h->SetBinContent(bin, hdivContent);
       h->SetBinError(bin, hdivError_prop);

       maxY = std::max(maxY, hdivContent + hdivError_prop);
     }

     else {
       h->SetBinContent(bin, 0);
       h->SetBinError(bin, 0);
     }

     if (hmuContent != 0){
       double hdivbarContent = (hebarContent*scalefactor_ebar)/(hmubarContent*scalefactor_mubar);
       double hdivbarError_prop = sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );

       hbar->SetBinContent(bin, hdivbarContent);
       hbar->SetBinError(bin, hdivbarError_prop);

       maxYbar = std::max(maxYbar, hdivbarContent + hdivbarError_prop);

     }

     else {
       hbar->SetBinContent(bin, 0);
       hbar->SetBinError(bin, 0);
     }

     if (maxY>maxYbar){
       maxtot = maxY;
     }
     else {
       maxtot = maxYbar;
     }
   }

   //std::cout << "std::max : "<< maxY << " " << maxYbar << " " << mod << std::endl;
  
      if (color==5){
	color++;
	  }
      TLegend *leg1D_divsup = new TLegend(0.4,0.5,0.6,0.7);
      c1D_divsup->cd(cpt);
      c1D_divsup->cd(cpt)->SetGrid(1,1);

      hbar->Draw("same,hist,E1");
      hbar->SetLineColor(color);
      hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      hbar->SetMaximum(maxtot*1.1);
    
      h->Draw("same,hist,E1");
      h->SetLineColor(color);
      h->SetLineWidth(2);
      //h->SetMaximum(maxtot);

      hbar->SetTitle(Form("histogramme ratio %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      leg1D_divsup->AddEntry(h, "#nu_{e}/#nu_{#mu}");
      leg1D_divsup->AddEntry(hbar, "#bar{#nu_{e}}/#bar{#nu_{#mu}}");
      leg1D_divsup->Draw();
    
    //std::cout << cpt << std::endl;
  
    cpt++;
    color++;
  }

  c1D_divsup->SetGrid(1,1);
  c1D_divsup->SaveAs(outfile_divide_sup.c_str());

  
}



//Trace un histogramme 1D du rapport nu_e sur nu_mu de la variable var avec le mode CCQE (nu et nubar) et le total (nu et nubar) sur un canvas
void AgatheAnalysis::plotTH1D_tot_CCQE(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 1;
  
 TFile * infile1D_tot_CCQE = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
 TCanvas *c1D_tot_CCQE = new TCanvas(Form("histogramme %s_e sur %s_mu nu et nubar pour tot et CCQE", var.c_str(), var.c_str()));
 c1D_tot_CCQE->Divide(2,2,0.01,0.01);

 std::string outfile_tot_QE = "~/Code_agathe/OldFiles/output_OldFiles/output_tot_QE.pdf";

 std::vector<int> mods = {30, 1};
 std::map<int, TH1D*> hdivsup;
 std::map<int, TH1D*> hdivsupbar;

float xmin = 0.1;
float xmax = 2.0;
 if (var == "cos"){
   xmin = -1;
   xmax = 1;
 }

 TLine *L1 = new TLine(xmin,1,xmax,1);

 hdivsup[30] = new TH1D("hdivsup_30", "histogramme du ratio nue numu tot", nbin,xmin, xmax);
 hdivsup[1] = new TH1D("hdivsup_1", "histogramme du ratio nue numu ccqe", nbin,xmin, xmax);
 hdivsupbar[30] = new TH1D("hdivsupbar_30", "histogramme du ratio nue numu bar tot", nbin,xmin, xmax);
 hdivsupbar[1] = new TH1D("hdivsupbar_1", "histogramme du ratio nue numu bar ccqe", nbin,xmin, xmax);

 // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
 for (int mod : mods) {
   
   TH1D* hist_e = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%s_e_%d", var.c_str(), mod)));
   TH1D* hist_mu = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%s_mu_%d", var.c_str(), mod)));
   TH1D* h = hdivsup[mod];
   TH1D* hist_ebar = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%sbar_e_%d", var.c_str(), mod)));
   TH1D* hist_mubar = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%sbar_mu_%d", var.c_str(), mod)));
   TH1D* hbar = hdivsupbar[mod];

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=nbin; ++bin) {
     //std::cout << bin << std::endl;
     double heContent = hist_e->GetBinContent(bin);
     double heError = hist_e->GetBinError(bin);
     double hmuContent = hist_mu->GetBinContent(bin);
     double hmuError = hist_mu->GetBinError(bin);
     double hebarContent = hist_ebar->GetBinContent(bin);
     double hebarError = hist_ebar->GetBinError(bin);
     double hmubarContent = hist_mubar->GetBinContent(bin);
     double hmubarError = hist_mubar->GetBinError(bin);

     if (hmuContent != 0){
       double hdivContent = heContent/hmuContent;
       double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );

       h->SetBinContent(bin, hdivContent);
       h->SetBinError(bin, hdivError_prop);
     }

     else {
       h->SetBinContent(bin, 0);
       h->SetBinError(bin, 0);
     }

     if (hmuContent != 0){
       double hdivbarContent = hebarContent/hmubarContent;
       double hdivbarError_prop = sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );

       hbar->SetBinContent(bin, hdivbarContent);
       hbar->SetBinError(bin, hdivbarError_prop);

     }

     else {
       hbar->SetBinContent(bin, 0);
       hbar->SetBinError(bin, 0);
     }
  }


    if (mod==30){

      c1D_tot_CCQE->cd(cpt);
      c1D_tot_CCQE->cd(cpt)->SetGrid(1,1);
      h->Draw("hist,E1");
      h->SetLineColor(color);
      h->SetLineWidth(2);
      h->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      c1D_tot_CCQE->cd(cpt+1);
      c1D_tot_CCQE->cd(cpt+1)->SetGrid(1,1);
      hbar->Draw("hist,E1");
      hbar->SetLineColor(color);
      hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      hbar->SetTitle(Form("histogramme  %s_nuebar/%s_numubar tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
    }

    
    else {
      if (color==5){
	color++;
	  }
      c1D_tot_CCQE->cd(cpt);
      c1D_tot_CCQE->cd(cpt)->SetGrid(1,1);
    
      h->Draw("hist,E1");
      h->SetLineColor(color);
      h->SetLineWidth(2);
      h->SetTitle(Form("histogramme %s_nue/%s_numu mode CCQE; %s; %s", var.c_str(), var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      c1D_tot_CCQE->cd(cpt+1);
      c1D_tot_CCQE->cd(cpt+1)->SetGrid(1,1);
      hbar->Draw("hist,E1");
      hbar->SetLineColor(color);
      hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      hbar->SetTitle(Form("histogramme %s_nuebar/%s_numubar mode CCQE; %s; %s", var.c_str(), var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
    
    }
    cpt=cpt+2;
    color++;
  }

  c1D_tot_CCQE->SetGrid(1,1);
  c1D_tot_CCQE->SaveAs(outfile_tot_QE.c_str());

  
}




void AgatheAnalysis::plotTH1D_divide_tot(std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile1D_div_tot = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_div_tot = new TCanvas(Form("histogramme %s_e sur %s_mu total", var.c_str(), var.c_str()));
  TLegend *leg1D_div_tot = new TLegend(0.4,0.5,0.6,0.7);

  TH1D* hdiv_tot = new TH1D("hdiv_30", "histogramme du ratio nue numu tot", 20,0, 2);
      
  TH1D* hist_e_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_e_30", var.c_str())));
  TH1D* hist_mu_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_mu_30", var.c_str())));
      
  hdiv_tot = (TH1D*)hist_e_tot->Clone();
  hdiv_tot->Divide(hist_mu_tot);
  
  c1D_div_tot->SetGrid(1,1);

  for (int bin = 1; bin <=20; ++bin) {
    double heContent_tot = hist_e_tot->GetBinContent(bin);
    double heError_tot = hist_e_tot->GetBinError(bin);
    double hmuContent_tot = hist_mu_tot->GetBinContent(bin);
    double hmuError_tot = hist_mu_tot->GetBinError(bin);
  
    double hdivError_prop_tot = sqrt( (heError_tot/hmuContent_tot)*(heError_tot/hmuContent_tot) + ((hmuError_tot*heContent_tot)/(hmuContent_tot*hmuContent_tot))*((hmuError_tot*heContent_tot)/(hmuContent_tot*hmuContent_tot)) );

    hdiv_tot->SetBinError(bin, hdivError_prop_tot);

    double hdivContent_tot = hdiv_tot->GetBinContent(bin);
    double hdivError_tot = hdiv_tot->GetBinError(bin);

    //std::cout << "Bin " << bin << " - he : " << heContent_tot << " +/- " << heError_tot << ",  hmu : " << hmuContent_tot << " +/- " << hmuError_tot <<  ", hdiv : " << hdivContent_tot << " +/- " << hdivError_tot << std::endl;

  }



  hdiv_tot->Draw("same,hist,E1");
  hdiv_tot->SetLineColor(1);
  hdiv_tot->SetLineWidth(2);
  //hdiv_tot->SetMinimum(0.7);
  //hdiv_tot->SetMaximum(1.3);
  hdiv_tot->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
  
}



void AgatheAnalysis::plotTH1D_divide2_bar(std::string var, std::string var_bar, std::string xaxis, std::string yaxis)
{
  
  TFile * infile1D_div_tot = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D_flat.root", "OPEN"); 
    
  TCanvas *c1D_div_bar = new TCanvas(Form("histogramme double ratio %s_e sur %s_mu ", var.c_str(), var.c_str()));
  TLegend *leg1D_div_tot = new TLegend(0.4,0.5,0.6,0.7);

  TH1D* hdenom_tot = new TH1D("hdenom_tot", "histogramme du ratio nue numu tot", 20,0, 2);
  TH1D* hnum_tot = new TH1D("hnum_tot", "histogramme du ratio nue numu tot", 20,0, 2);
  TH1D* hdiv_tot = new TH1D("hdiv_tot", "histogramme du ratio nue numu tot", 20,0, 2);
      
  TH1D* hist_e_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_e_30", var.c_str())));
  TH1D* hist_mu_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_mu_30", var.c_str())));
  TH1D* hist_ebar_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_e_30", var_bar.c_str())));
  TH1D* hist_mubar_tot = (TH1D*)(infile1D_div_tot->Get(Form("h%s_mu_30", var_bar.c_str())));

  TLine *L1 = new TLine(0,1,5,1);
      
  hdenom_tot = (TH1D*)hist_e_tot->Clone();
  hdenom_tot->Divide(hist_mu_tot);
  //hdenom_tot->Draw("same,hist");
  hdenom_tot->SetLineColor(1);
  hdenom_tot->SetLineWidth(2);
  hdenom_tot->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));

  hnum_tot = (TH1D*)hist_ebar_tot->Clone();
  hnum_tot->Divide(hist_mubar_tot);
  //hnum_tot->Draw("same,hist");
  hnum_tot->SetLineColor(1);
  hnum_tot->SetLineWidth(2);
  hnum_tot->SetTitle(Form("histogramme  %s_nue/%s_numu bar tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));


  hdiv_tot = (TH1D*)hnum_tot->Clone();
  hdiv_tot->Divide(hdenom_tot);
  hdiv_tot->Draw("same,hist, E1");
  hdiv_tot->SetLineColor(1);
  hdiv_tot->SetLineWidth(2);
  hdiv_tot->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
  L1->SetLineStyle(kDashed);
  L1->SetLineColor(1);
  L1->SetLineWidth(3);
  L1->Draw();

  

  c1D_div_bar->SetGrid(1,1);
  
}


void AgatheAnalysis::plotTH2D_comp_tot (std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D_flat.root", "OPEN"); 
    
  TCanvas *c2Dcomp = new TCanvas(Form("histogramme %s tot", var.c_str()));
  TLegend *leg2Dtot = new TLegend(0.4,0.5,0.6,0.7);
      
  TH2D* hist2Dtot_e = (TH2D*)(infile2Dtot->Get(Form("h%s_e_30", var.c_str())));
  TH2D* hist2Dtot_mu = (TH2D*)(infile2Dtot->Get(Form("h%s_mu_30", var.c_str())));
    
  hist2Dtot_e->Draw("CONT3");
  hist2Dtot_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist2Dtot_e->SetLineColor(8);
  hist2Dtot_mu->Draw("SAME,CONT3");
  hist2Dtot_mu->SetLineColor(9);
  
  c2Dcomp->SetGrid(1,1);
  leg2Dtot->AddEntry("hist2Dtot_e", "#nu_{e} Total");
  leg2Dtot->AddEntry("hist2Dtot_mu", "#nu_{mu} Total");
  leg2Dtot->Draw();

}


void AgatheAnalysis::plotTH2D_tot (std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D_flat.root", "OPEN"); 
    
  TCanvas *c2Dtot = new TCanvas(Form("histogramme %s total", var.c_str()));
  c2Dtot->Divide(2,0,0.01,0.01);
      
  TH2D* hist2Dtot_e = (TH2D*)(infile2Dtot->Get(Form("h%s_e_30", var.c_str())));
  TH2D* hist2Dtot_mu = (TH2D*)(infile2Dtot->Get(Form("h%s_mu_30", var.c_str())));

  c2Dtot->cd(1);
  c2Dtot->cd(1)->SetGrid(1,1);
  hist2Dtot_e->Draw("COLZ");
  hist2Dtot_e->SetTitle(Form("histogramme %s tous modes nue; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist2Dtot_e->SetLineColor(8);

  c2Dtot->cd(2);
  hist2Dtot_mu->Draw("COLZ");
  hist2Dtot_mu->SetTitle(Form("histogramme %s tous modes numu; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist2Dtot_mu->SetLineColor(9);
  
  c2Dtot->cd(2)->SetGrid(1,1);


}



void AgatheAnalysis::plotTH2D_int(){

  TFile * infile2Dint = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D_flat.root", "OPEN"); 
          
  TH2D* hint_e = (TH2D*)(infile2Dint->Get("hq0q3_e_1"));
  TH2D* hint_mu = (TH2D*)(infile2Dint->Get("hq0q3_mu_1"));

  /*
  int binx1;
  int binx2;
  int biny1;
  int biny2;

  hist2Dint_e->LabelsOption(">","X");
  hist2Dint_e->LabelsOption(">","Y");
    
  for (int i = 1, i<=50, i++){
    binx1 = hist2Dint_e->GetXaxis()->FindBin(xmin);
    binx2 = hist2Dint_e->GetXaxis()->FindBin(xmax);
    biny1 = hist2Dint_e->GetYaxis()->FindBin(ymin);
    biny2 = hist2Dint_e->GetYaxis()->FindBin(ymax);
  }
  Integral(binx1, binx2, biny1, biny2)
  */

  std::vector<std::pair<double, int>> binContents;

    // Loop over all bins
    int nBinsX = hint_e->GetNbinsX();
    int nBinsY = hint_e->GetNbinsY();
    for (int i = 1; i <= nBinsX; ++i) {
        for (int j = 1; j <= nBinsY; ++j) {
            int bin = hint_e->GetBin(i, j);
            double content = hint_e->GetBinContent(bin);
            binContents.push_back(std::make_pair(content, bin));
        }
    }

    // Sort the std::vector by bin content in descending order
    sort(binContents.begin(), binContents.end(), std::greater<std::pair<double, int>>());

    // Sum the content of the top 10 bins
    double sum = 0;
    for (int i = 0; i < 50; ++i) {
        sum += binContents[i].first;
    }
    std::cout << "Sum of the 10 maximum bins: " << sum << std::endl;

    double contourLevel = binContents[49].first;

    // Draw the contour for the top 10 bins
    TCanvas *c2Dint = new TCanvas("histogramme q0q3 total");
    c2Dint->Divide(2,0,0.01,0.01);
    c2Dint->cd(1);
    c2Dint->cd(1)->SetGrid();
    hint_e->Draw("COLZ");
    hint_e->SetTitle("histogramme q0 en fonction de q3 tous modes nu_e; q_{3} (GeV); q_{0} (GeV)");

    TH2D* histForContour = (TH2D*)hint_e->Clone();

    // Set the contour level
    histForContour->SetContour(2);
    double levels[2] = {contourLevel, hint_e->GetMaximum()};
    histForContour->SetContour(2, levels);

    // Draw the contour
    histForContour->Draw("CONT3 SAME");


    
    std::vector<std::pair<double, int>> binContents_mu;

    // Loop over all bins
    int nBinsX_mu = hint_mu->GetNbinsX();
    int nBinsY_mu = hint_mu->GetNbinsY();
    for (int i = 1; i <= nBinsX_mu; ++i) {
        for (int j = 1; j <= nBinsY_mu; ++j) {
            int bin_mu = hint_mu->GetBin(i, j);
            double content_mu = hint_mu->GetBinContent(bin_mu);
            binContents_mu.push_back(std::make_pair(content_mu, bin_mu));
        }
    }

    // Sort the std::vector by bin content in descending order
    sort(binContents_mu.begin(), binContents_mu.end(), std::greater<std::pair<double, int>>());

    // Sum the content of the top 10 bins
    double sum_mu = 0;
    int bincount;
    for (int i = 0; i < 150; ++i) {
      //bincount = 0;
      if (sum_mu<=sum){
        sum_mu += binContents_mu[i].first;
	bincount=i;
      }
    }
    std::cout << "Sum of the 10 maximum bins: " << sum_mu << " nb bin " << bincount << std::endl;

    double contourLevel_mu = binContents_mu[bincount].first;

    // Draw the contour for the top 10 bins
    c2Dint->cd(2);
    c2Dint->cd(2)->SetGrid();
    hint_mu->Draw("COLZ");
    hint_mu->SetTitle("histogramme q0 en fonction de q3 tous modes nu_mu; q_{3} (GeV); q_{0} (GeV)");

    TH2D* histForContour_mu = (TH2D*)hint_mu->Clone();

    // Set the contour level
    histForContour_mu->SetContour(2);
    double levels_mu[2] = {contourLevel_mu, hint_mu->GetMaximum()};
    histForContour_mu->SetContour(2, levels_mu);

    // Draw the contour
    histForContour_mu->Draw("CONT3 SAME");



    TCanvas* c2Dcont = new TCanvas("histogramme q0q3 totalcontour");
    c2Dcont->SetGrid();
    histForContour->Draw("CONT3 SAME");
    histForContour->SetTitle("histogramme q0 en fonction de q3 tous modes contour; q_{3} (GeV); q_{0} (GeV)");
    histForContour_mu->Draw("CONT3 SAME");


}







void AgatheAnalysis::PlotAll_flav()
{

  // plotTH1D_superposes_oldnew("Enu", "E_{#nu} (GeV)", " ");
  //plotTH1D_superposes("Enu", "E_{#nu} (GeV)", " ");
  //plotTH1D_divide_superposés("Enu", "E_{#nu} (GeV)", " ");
  //plotTH1D_tot_CCQE("Enu", "E_{#nu} (GeV)", " ");

  plotTH1D_normalise ("cosbar", "cos(#theta)", "bin normalised 10^{-38}");
  //plotTH1D_xsec_overE_test("Enubar", "E_{#nu} (GeV)", "#sigma(E_{#nu})/E_{#nu} (cm^{2}/GeV/nucleon) 10^{-38}");
  //plotTH1D_xsec("Enu", "E_{#nu} (GeV)", "#sigma(E_{#nu}) (cm^{2}/nucleon) 10^{-38}");

  //plotTH1D_xsec_QE ("Enubar", "E_{#nu} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38} ");

  /*
  plotTH1D_superposes ("q0", "q_{0} (GeV)", " ");
  plotTH1D_superposes ("q3", "q_{3} (GeV)", " ");
  plotTH1D_superposes ("Q2", "Q^{2} (GeV)", " ");
  */
  

  /*
  plotTH1D_tot_CCQE ("q0", "q_{0} (GeV)", " ");
  plotTH1D_tot_CCQE ("q3", "q_{3} (GeV)", " ");
  plotTH1D_tot_CCQE ("Q2", "Q^{2} (GeV)", " ");
  
  plotTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");
  plotTH1D_divide_superposés("Enu", "E_{#nu} (GeV)", " ");
  */

  //plotTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");

  /*
  plotTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");
  plotTH2D_tot("cosEnu", "E_{#nu} (GeV)", "cos(#theta)");
  plotTH2D_tot("plepEnu", "E_{#nu} (GeV)", "p_{lepton} (GeV)");


  plotTH1D_superposes ("q0", "q_{0} (GeV)", " ");
  plotTH1D_divide("q0", "q_{0} (GeV)", "#nu_{e}/#nu_{#mu} ");
  //plotTH1D_superposes ("q0bar", "q_{0} (GeV)", " ");
  //plotTH1D_divide("q0bar", "q_{0} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");

  plotTH1D_superposes ("q3", "q_{3} (GeV)", " ");
  plotTH1D_divide("q3", "q_{3} (GeV)", "#nu_{e}/#nu_{#mu} ");

  plotTH1D_superposes ("Q2", "Q^{2} (GeV)", " ");
  plotTH1D_divide("Q2", "Q^{2} (GeV)", "#nu_{e}/#nu_{#mu} ");
  */
  //plotTH1D_superposes ("q0", "q_{0} (GeV)", " ");
  //plotTH1D_superposes ("Q2", "Q^{2} (GeV)", " ");
  //plotTH1D_superposes ("pLep", "p_lepton (GeV)", " ");
  //plotTH1D_divide("pLep", "p_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");

  /*
  plotTH1D_superposes ("cos", "cos(#theta)", " ");
  plotTH1D_divide("cos", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  //plotTH1D_superposes ("cosbar", "cos(#theta)", " ");
  //plotTH1D_divide("cosbar", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  
  plotTH1D_superposes ("pLep", "p_lepton (GeV)", " ");
  plotTH1D_divide("pLep", "p_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  //plotTH1D_superposes ("pLepbar", "p_lepton (GeV)", " ");
  //plotTH1D_divide("pLepbar", "p_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  */
  
  /*
  plotTH1D_superposes ("Enu", "E_{#nu} (GeV)", " ");
  plotTH1D_divide("Enu", "E_{#nu} (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotTH1D_superposes ("Enubar", "E_{#nu} (GeV)", " ");
  plotTH1D_divide("Enubar", "E_{#nu} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");
  */

  /*
  plotTH1D_superposes ("q0", "q_{0} (GeV)", " ");
  plotTH1D_divide("q0", "q_{0} (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotTH1D_superposes ("q0bar", "q_{0} (GeV)", " ");
  plotTH1D_divide("q0bar", "q_{0} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");
  

  plotTH1D_superposes ("q3", "q_{3} (GeV)", " ");
  plotTH1D_divide("q3", "q_{3} (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotTH1D_superposes ("q3bar", "q_{3} (GeV)", " ");
  plotTH1D_divide("q3bar", "q_{3} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");

  plotTH1D_superposes ("Q2", "Q^{2} (GeV)", " ");
  plotTH1D_divide("Q2", "Q^{2} (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotTH1D_superposes ("Q2bar", "Q^{2} (GeV)", " ");
  plotTH1D_divide("Q2bar", "Q^{2} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");
  */

  /*
  plotTH1D_superposes ("ELep", "E_lepton (GeV)", " ");
  plotTH1D_divide("ELep", "E_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotTH1D_superposes ("ELepbar", "E_lepton (GeV)", " ");
  plotTH1D_divide("ELepbar", "E_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  
  
  plotTH1D_superposes ("cos", "cos(#theta)", " ");
  plotTH1D_divide("cos", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  plotTH1D_superposes ("cosbar", "cos(#theta)", " ");
  plotTH1D_divide("cosbar", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  */
  
  //plotTH1D_divide ("q0", "q_{0} (GeV)", " ");

  //plotTH1D_divide_tot("Enu", "E_{#nu} (GeV)", "#nu_{e}/#nu_{#mu} ");
  //plotTH1D_divide_tot("Enubar", "E_{#nu} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");

  //plotTH1D_divide2_bar("Enu", "Enubar", "E_{#nu} (GeV)", "(#bar{#nu_{e}}/#bar{#nu_{#mu}})/(#nu_{e}/#nu_{#mu}) ");

		     


  /*
  plotTH1D_superposes ("q3", "q_{3} (GeV)", " ");
  plotTH1D_superposes ("Q2", "Q^{2} (GeV)", " ");
  plotTH1D_superposes ("ELep", "E_lepton (GeV)", " ");
  plotTH1D_superposes ("cos", "cos(#theta)", " ");
  */


}
