#include "Flat_nu_e_nu_mu.h"


/*
AgatheAnalysis::AgatheAnalysis(){
  // Empty constructor
}

AgatheAnalysis::~AgatheAnalysis(){
  // Empty destructor
}
*/

// Modes : 30 = all CC interaction, 1 = CCQE interaction, 2 = 2p2h interaction, 11 = RES interaction, 26 = DIS interaction



void AgatheAnalysis::new_Flat_nu_e_nu_mu()
{

  //// Déclaration des histogrammes ////

  int nbinq0q3 = 50;
  int nbinEnu = 100;
  int bin = 100;
  
//nu_e//

  //neutrino energy
  TH1D *hEnu_e_30 = new TH1D("hEnu_e_30","histogramme Enu total nue",nbinEnu,0,2);
  TH1D *hEnu_e_1 = new TH1D("hEnu_e_1","histogramme Enu CCQE nue",nbinEnu,0,2);
  TH1D *hEnu_e_2 = new TH1D("hEnu_e_2","histogramme Enu 2p2h nue",nbinEnu,0,2);
  TH1D *hEnu_e_11 = new TH1D("hEnu_e_11","histogramme Enu RES nue",nbinEnu,0,2);
  TH1D *hEnu_e_26 = new TH1D("hEnu_e_26","histogramme Enu DIS nue",nbinEnu,0,2);

  //vertex/nucleus energy
  TH1D *hq0_e_30 = new TH1D("hq0_e_30","histogramme q0 total nue",bin,0,2);
  TH1D *hq0_e_1 = new TH1D("hq0_e_1","histogramme q0 CCQE nue",bin,0,2);
  TH1D *hq0_e_2 = new TH1D("hq0_e_2","histogramme q0 2p2h nue",bin,0,2);
  TH1D *hq0_e_11 = new TH1D("hq0_e_11","histogramme q0 RES nue",bin,0,2);
  TH1D *hq0_e_26 = new TH1D("hq0_e_26","histogramme q0 DIS nue",bin,0,2);

  //vertex/nucleus momentum
  TH1D *hq3_e_30 = new TH1D("hq3_e_30","histogramme q3 total nue",bin,0,2);
  TH1D *hq3_e_1 = new TH1D("hq3_e_1","histogramme q3 CCQE nue",bin,0,2);
  TH1D *hq3_e_2 = new TH1D("hq3_e_2","histogramme q3 2p2h nue",bin,0,2);
  TH1D *hq3_e_11 = new TH1D("hq3_e_11","histogramme q3 RES nue",bin,0,2);
  TH1D *hq3_e_26 = new TH1D("hq3_e_26","histogramme q3 DIS nue",bin,0,2);

  TH1D *hQ2_e_30 = new TH1D("hQ2_e_30","histogramme Q2 total nue",bin,0,2);
  TH1D *hQ2_e_1 = new TH1D("hQ2_e_1","histogramme Q2 CCQE nue",bin,0,2);
  TH1D *hQ2_e_2 = new TH1D("hQ2_e_2","histogramme Q2 2p2h nue",bin,0,2);
  TH1D *hQ2_e_11 = new TH1D("hQ2_e_11","histogramme Q2 RES nue",bin,0,2);
  TH1D *hQ2_e_26 = new TH1D("hQ2_e_26","histogramme Q2 DIS nue",bin,0,2);

  //cos(theta) lepton 
  TH1D *hcos_e_30 = new TH1D("hcos_e_30","histogramme coslep tot nue",bin,-1,1);
  TH1D *hcos_e_1 = new TH1D("hcos_e_1","histogramme coslep CCQE nue",bin,-1,1);
  TH1D *hcos_e_2 = new TH1D("hcos_e_2","histogramme coslep 2p2h nue",bin,-1,1);
  TH1D *hcos_e_11 = new TH1D("hcos_e_11","histogramme coslep RES nue",bin,-1,1);
  TH1D *hcos_e_26 = new TH1D("hcos_e_26","histogramme coslep DIS nue",bin,-1,1);

  //lepton energy
  TH1D *hELep_e_30 = new TH1D("hELep_e_30","histogramme ELep total nue",bin,0,2);
  TH1D *hELep_e_1 = new TH1D("hELep_e_1","histogramme ELep CCQE nue",bin,0,2);
  TH1D *hELep_e_2 = new TH1D("hELep_e_2","histogramme ELep 2p2h nue",bin,0,2);
  TH1D *hELep_e_11 = new TH1D("hELep_e_11","histogramme ELep RES nue",bin,0,2);
  TH1D *hELep_e_26 = new TH1D("hELep_e_26","histogramme ELep DIS nue",bin,0,2);

  //lepton momentum
  TH1D *hpLep_e_30 = new TH1D("hpLep_e_30","histogramme pLep total nue",bin,0,2);
  TH1D *hpLep_e_1 = new TH1D("hpLep_e_1","histogramme pLep CCQE nue",bin,0,2);
  TH1D *hpLep_e_2 = new TH1D("hpLep_e_2","histogramme pLep 2p2h nue",bin,0,2);
  TH1D *hpLep_e_11 = new TH1D("hpLep_e_11","histogramme pLep RES nue",bin,0,2);
  TH1D *hpLep_e_26 = new TH1D("hpLep_e_26","histogramme pLep DIS nue",bin,0,2);

  //vertex energy as a function of impulsion energy
  TH2D *hq0q3_e_30 = new TH2D("hq0q3_e_30","histogramme q0 en fonction de q3 tot nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_1 = new TH2D("hq0q3_e_1","histogramme q0 en fonction de q3 CCQE nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_2 = new TH2D("hq0q3_e_2","histogramme q0 en fonction de q3 2p2h nue", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_11 = new TH2D("hq0q3_e_11","histogramme q0 en fonction de q3 2p2h nue",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_e_26 = new TH2D("hq0q3_e_26","histogramme q0 en fonction de q3 DIS nue", nbinq0q3,0,1,nbinq0q3,0,1);

  //cos(theta) lepton as a function of the neutrino energy
  TH2D *hcosEnu_e_30 = new TH2D("hcosEnu_e_30","histogramme cos(theta) en fonction de Enu tot nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_1 = new TH2D("hcosEnu_e_1","histogramme cos(theta) en fonction de Enu CCQE nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_2 = new TH2D("hcosEnu_e_2","histogramme cos(theta) en fonction de Enu 2p2h nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_11 = new TH2D("hcosEnu_e_11","histogramme cos(theta) en fonction de Enu 2p2h nue", 500,0,2,500,-1,1);
  TH2D *hcosEnu_e_26 = new TH2D("hcosEnu_e_26","histogramme cos(theta) en fonction de Enu DIS nue", 500,0,2,500,-1,1);
  
  //lepton momentum as a function of the neutrino energy
  TH2D *hplepEnu_e_30 = new TH2D("hplepEnu_e_30","histogramme plep en fonction de Enu tot nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_1 = new TH2D("hplepEnu_e_1","histogramme plep en fonction de Enu CCQE nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_2 = new TH2D("hplepEnu_e_2","histogramme plep en fonction de Enu 2p2h nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_11 = new TH2D("hplepEnu_e_11","histogramme plep en fonction de Enu 2p2h nue", 500,0,2,500,0,2);
  TH2D *hplepEnu_e_26 = new TH2D("hplepEnu_e_26","histogramme plep en fonction de Enu DIS nue", 500,0,2,500,0,2);

  
//nu_mu//
  TH1D *hEnu_mu_30 = new TH1D("hEnu_mu_30","histogramme Enu total numu",nbinEnu,0,2);
  TH1D *hEnu_mu_1 = new TH1D("hEnu_mu_1","histogramme Enu CCQE numu",nbinEnu,0,2);
  TH1D *hEnu_mu_2 = new TH1D("hEnu_mu_2","histogramme Enu 2p2h numu",nbinEnu,0,2);
  TH1D *hEnu_mu_11 = new TH1D("hEnu_mu_11","histogramme Enu RES numu",nbinEnu,0,2);
  TH1D *hEnu_mu_26 = new TH1D("hEnu_mu_26","histogramme Enu DIS numu",nbinEnu,0,2);

  TH1D *hq0_mu_30 = new TH1D("hq0_mu_30","histogramme q0 total numu",bin,0,2);
  TH1D *hq0_mu_1 = new TH1D("hq0_mu_1","histogramme q0 CCQE numu",bin,0,2);
  TH1D *hq0_mu_2 = new TH1D("hq0_mu_2","histogramme q0 2p2h numu",bin,0,2);
  TH1D *hq0_mu_11 = new TH1D("hq0_mu_11","histogramme q0 RES numu",bin,0,2);
  TH1D *hq0_mu_26 = new TH1D("hq0_mu_26","histogramme q0 DIS numu",bin,0,2);

  TH1D *hq3_mu_30 = new TH1D("hq3_mu_30","histogramme q3 total numu",bin,0,2);
  TH1D *hq3_mu_1 = new TH1D("hq3_mu_1","histogramme q3 CCQE numu",bin,0,2);
  TH1D *hq3_mu_2 = new TH1D("hq3_mu_2","histogramme q3 2p2h numu",bin,0,2);
  TH1D *hq3_mu_11 = new TH1D("hq3_mu_11","histogramme q3 RES numu",bin,0,2);
  TH1D *hq3_mu_26 = new TH1D("hq3_mu_26","histogramme q3 DIS numu",bin,0,2);

  TH1D *hQ2_mu_30 = new TH1D("hQ2_mu_30","histogramme Q2 total numu",bin,0,2);
  TH1D *hQ2_mu_1 = new TH1D("hQ2_mu_1","histogramme Q2 CCQE numu",bin,0,2);
  TH1D *hQ2_mu_2 = new TH1D("hQ2_mu_2","histogramme Q2 2p2h numu",bin,0,2);
  TH1D *hQ2_mu_11 = new TH1D("hQ2_mu_11","histogramme Q2 RES numu",bin,0,2);
  TH1D *hQ2_mu_26 = new TH1D("hQ2_mu_26","histogramme Q2 DIS numu",bin,0,2);

  TH1D *hcos_mu_30 = new TH1D("hcos_mu_30","histogramme coslep tot numu",bin,-1,1);
  TH1D *hcos_mu_1 = new TH1D("hcos_mu_1","histogramme coslep CCQE numu",bin,-1,1);
  TH1D *hcos_mu_2 = new TH1D("hcos_mu_2","histogramme coslep 2p2h numu",bin,-1,1);
  TH1D *hcos_mu_11 = new TH1D("hcos_mu_11","histogramme coslep RES numu",bin,-1,1);
  TH1D *hcos_mu_26 = new TH1D("hcos_mu_26","histogramme coslep DIS numu",bin,-1,1);

  TH1D *hELep_mu_30 = new TH1D("hELep_mu_30","histogramme ELep total numu",bin,0,2);
  TH1D *hELep_mu_1 = new TH1D("hELep_mu_1","histogramme ELep CCQE numu",bin,0,2);
  TH1D *hELep_mu_2 = new TH1D("hELep_mu_2","histogramme ELep 2p2h numu",bin,0,2);
  TH1D *hELep_mu_11 = new TH1D("hELep_mu_11","histogramme ELep RES numu",bin,0,2);
  TH1D *hELep_mu_26 = new TH1D("hELep_mu_26","histogramme ELep DIS numu",bin,0,2);

  TH1D *hpLep_mu_30 = new TH1D("hpLep_mu_30","histogramme pLep total numu",bin,0,2);
  TH1D *hpLep_mu_1 = new TH1D("hpLep_mu_1","histogramme pLep CCQE numu",bin,0,2);
  TH1D *hpLep_mu_2 = new TH1D("hpLep_mu_2","histogramme pLep 2p2h numu",bin,0,2);
  TH1D *hpLep_mu_11 = new TH1D("hpLep_mu_11","histogramme pLep RES numu",bin,0,2);
  TH1D *hpLep_mu_26 = new TH1D("hpLep_mu_26","histogramme pLep DIS numu",bin,0,2);

  TH2D *hq0q3_mu_30 = new TH2D("hq0q3_mu_30","histogramme q0 en fonction de q3 tot numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_1 = new TH2D("hq0q3_mu_1","histogramme q0 en fonction de q3 CCQE numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_2 = new TH2D("hq0q3_mu_2","histogramme q0 en fonction de q3 2p2h numu", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_11 = new TH2D("hq0q3_mu_11","histogramme q0 en fonction de q3 2p2h numu",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3_mu_26 = new TH2D("hq0q3_mu_26","histogramme q0 en fonction de q3 DIS numu", nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnu_mu_30 = new TH2D("hcosEnu_mu_30","histogramme cos(theta) en fonction de Enu tot numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_1 = new TH2D("hcosEnu_mu_1","histogramme cos(theta) en fonction de Enu CCQE numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_2 = new TH2D("hcosEnu_mu_2","histogramme cos(theta) en fonction de Enu 2p2h numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_11 = new TH2D("hcosEnu_mu_11","histogramme cos(theta) en fonction de Enu 2p2h numu", 500,0,2,500,-1,1);
  TH2D *hcosEnu_mu_26 = new TH2D("hcosEnu_mu_26","histogramme cos(theta) en fonction de Enu DIS numu", 500,0,2,500,-1,1);
  
  TH2D *hplepEnu_mu_30 = new TH2D("hplepEnu_mu_30","histogramme plep en fonction de Enu tot numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_1 = new TH2D("hplepEnu_mu_1","histogramme plep en fonction de Enu CCQE numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_2 = new TH2D("hplepEnu_mu_2","histogramme plep en fonction de Enu 2p2h numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_11 = new TH2D("hplepEnu_mu_11","histogramme plep en fonction de Enu 2p2h numu", 500,0,2,500,0,2);
  TH2D *hplepEnu_mu_26 = new TH2D("hplepEnu_mu_26","histogramme plep en fonction de Enu DIS numu", 500,0,2,500,0,2);

  TH2D *hcosQ2_1 = new TH2D("hcosQ2_1","histogramme CosLep en fonction de Q2 CCQE", 100,0,2,100,-1,1);
  TH2D *hcosQ2_1_zoom = new TH2D("hcosQ2_1_zoom","histogramme CosLep en fonction de Q2 CCQE zoom", 100,0,0.5,100,0.5,1);

  TH2D *hcosQ2_evtsA = new TH2D("hcosQ2_evtsA","histogramme CosLep en fonction de Q2 pour evts particuliers A CCQE", 100,0,0.5,100,0.5,1);
  TH1D *hEnu_evtsA = new TH1D("hEnu_evtsA","histogramme Enu de ces evts A CCQE", 100,0,2);
  TH1D *hq0_evtsA = new TH1D("hq0_evtsA","histogramme q0 de ces evts A CCQE", 100,0,2);
  TH1D *hq3_evtsA = new TH1D("hq3_evtsA","histogramme q3 de ces evts A CCQE", 100,0,2);
  TH1D *hQ2_evtsA = new TH1D("hQ2_evtsA","histogramme Q2 de ces evts A CCQE", 100,0,2);
  
  TH2D *hcosQ2_evtsB = new TH2D("hcosQ2_evtsB","histogramme CosLep en fonction de Q2 pour evts particuliers B CCQE", 100,0,0.5,100,0.5,1);
  TH1D *hEnu_evtsB = new TH1D("hEnu_evtsB","histogramme Enu de ces evts B CCQE", 100,0,2);
  TH1D *hq0_evtsB = new TH1D("hq0_evtsB","histogramme q0 de ces evts B CCQE", 100,0,2);
  TH1D *hq3_evtsB = new TH1D("hq3_evtsB","histogramme q3 de ces evts B CCQE", 100,0,2);
  TH1D *hQ2_evtsB = new TH1D("hQ2_evtsB","histogramme Q2 de ces evts B CCQE", 100,0,2);
  

//nu_e_bar//
  TH1D *hEnubar_e_30 = new TH1D("hEnubar_e_30","histogramme Enu total nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_1 = new TH1D("hEnubar_e_1","histogramme Enu CCQE nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_2 = new TH1D("hEnubar_e_2","histogramme Enu 2p2h nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_11 = new TH1D("hEnubar_e_11","histogramme Enu RES nuebar",nbinEnu,0,2);
  TH1D *hEnubar_e_26 = new TH1D("hEnubar_e_26","histogramme Enu DIS nuebar",nbinEnu,0,2);

  //neutrino energy separated by interaction on hydrogen
  TH1D *hEnubar_H_e_30 = new TH1D("hEnubar_H_e_30","histogramme Enu total nuebar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_e_1 = new TH1D("hEnubar_H_e_1","histogramme Enu CCQE nuebar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_e_2 = new TH1D("hEnubar_H_e_2","histogramme Enu 2p2h nuebar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_e_11 = new TH1D("hEnubar_H_e_11","histogramme Enu RES nuebar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_e_26 = new TH1D("hEnubar_H_e_26","histogramme Enu DIS nuebar sur H",nbinEnu,0,2);

  //neutrino energy separated by interaction on oxygen 
  TH1D *hEnubar_O_e_30 = new TH1D("hEnubar_O_e_30","histogramme Enu total nuebar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_e_1 = new TH1D("hEnubar_O_e_1","histogramme Enu CCQE nuebar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_e_2 = new TH1D("hEnubar_O_e_2","histogramme Enu 2p2h nuebar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_e_11 = new TH1D("hEnubar_O_e_11","histogramme Enu RES nuebar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_e_26 = new TH1D("hEnubar_O_e_26","histogramme Enu DIS nuebar sur O",nbinEnu,0,2);

  TH1D *hq0bar_e_30 = new TH1D("hq0bar_e_30","histogramme q0 total nuebar",bin,0,2);
  TH1D *hq0bar_e_1 = new TH1D("hq0bar_e_1","histogramme q0 CCQE nuebar",bin,0,2);
  TH1D *hq0bar_e_2 = new TH1D("hq0bar_e_2","histogramme q0 2p2h nuebar",bin,0,2);
  TH1D *hq0bar_e_11 = new TH1D("hq0bar_e_11","histogramme q0 RES nuebar",bin,0,2);
  TH1D *hq0bar_e_26 = new TH1D("hq0bar_e_26","histogramme q0 DIS nuebar",bin,0,2);

  TH1D *hq0bar_H_e_30 = new TH1D("hq0bar_H_e_30","histogramme q0 total nuebar sur H",bin,0,2);
  TH1D *hq0bar_H_e_1 = new TH1D("hq0bar_H_e_1","histogramme q0 CCQE nuebar sur H",bin,0,2);
  TH1D *hq0bar_O_e_30 = new TH1D("hq0bar_O_e_30","histogramme q0 total nuebar sur O",bin,0,2);
  TH1D *hq0bar_O_e_1 = new TH1D("hq0bar_O_e_1","histogramme q0 CCQE nuebar sur O",bin,0,2);

  TH1D *hq3bar_e_30 = new TH1D("hq3bar_e_30","histogramme q3 total nuebar",bin,0,2);
  TH1D *hq3bar_e_1 = new TH1D("hq3bar_e_1","histogramme q3 CCQE nuebar",bin,0,2);
  TH1D *hq3bar_e_2 = new TH1D("hq3bar_e_2","histogramme q3 2p2h nuebar",bin,0,2);
  TH1D *hq3bar_e_11 = new TH1D("hq3bar_e_11","histogramme q3 RES nuebar",bin,0,2);
  TH1D *hq3bar_e_26 = new TH1D("hq3bar_e_26","histogramme q3 DIS nuebar",bin,0,2);

  TH1D *hq3bar_H_e_30 = new TH1D("hq3bar_H_e_30","histogramme q3 total nuebar sur H",bin,0,2);
  TH1D *hq3bar_H_e_1 = new TH1D("hq3bar_H_e_1","histogramme q3 CCQE nuebar sur H",bin,0,2);
  TH1D *hq3bar_O_e_30 = new TH1D("hq3bar_O_e_30","histogramme q3 total nuebar sur O",bin,0,2);
  TH1D *hq3bar_O_e_1 = new TH1D("hq3bar_O_e_1","histogramme q3 CCQE nuebar sur O",bin,0,2);

  TH1D *hQ2bar_e_30 = new TH1D("hQ2bar_e_30","histogramme Q2 total nuebar",bin,0,2);
  TH1D *hQ2bar_e_1 = new TH1D("hQ2bar_e_1","histogramme Q2 CCQE nuebar",bin,0,2);
  TH1D *hQ2bar_e_2 = new TH1D("hQ2bar_e_2","histogramme Q2 2p2h nuebar",bin,0,2);
  TH1D *hQ2bar_e_11 = new TH1D("hQ2bar_e_11","histogramme Q2 RES nuebar",bin,0,2);
  TH1D *hQ2bar_e_26 = new TH1D("hQ2bar_e_26","histogramme Q2 DIS nuebar",bin,0,2);

  TH1D *hQ2bar_H_e_30 = new TH1D("hQ2bar_H_e_30","histogramme Q2 total nuebar sur H",bin,0,2);
  TH1D *hQ2bar_H_e_1 = new TH1D("hQ2bar_H_e_1","histogramme Q2 CCQE nuebar sur H",bin,0,2);
  TH1D *hQ2bar_O_e_30 = new TH1D("hQ2bar_O_e_30","histogramme Q2 total nuebar sur O",bin,0,2);
  TH1D *hQ2bar_O_e_1 = new TH1D("hQ2bar_O_e_1","histogramme Q2 CCQE nuebar sur O",bin,0,2);

  TH1D *hcosbar_e_30 = new TH1D("hcosbar_e_30","histogramme coslep tot nuebar",bin,-1,1);
  TH1D *hcosbar_e_1 = new TH1D("hcosbar_e_1","histogramme coslep CCQE nuebar",bin,-1,1);
  TH1D *hcosbar_e_2 = new TH1D("hcosbar_e_2","histogramme coslep 2p2h nuebar",bin,-1,1);
  TH1D *hcosbar_e_11 = new TH1D("hcosbar_e_11","histogramme coslep RES nuebar",bin,-1,1);
  TH1D *hcosbar_e_26 = new TH1D("hcosbar_e_26","histogramme coslep DIS nuebar",bin,-1,1);

  TH1D *hcosbar_H_e_30 = new TH1D("hcosbar_H_e_30","histogramme cos total nuebar sur H",bin,-1,1);
  TH1D *hcosbar_H_e_1 = new TH1D("hcosbar_H_e_1","histogramme cos CCQE nuebar sur H",bin,-1,1);
  TH1D *hcosbar_O_e_30 = new TH1D("hcosbar_O_e_30","histogramme cos total nuebar sur O",bin,-1,1);
  TH1D *hcosbar_O_e_1 = new TH1D("hcosbar_O_e_1","histogramme cos CCQE nuebar sur O",bin,-1,1);

  TH1D *hELepbar_e_30 = new TH1D("hELepbar_e_30","histogramme ELep total nuebar",bin,0,2);
  TH1D *hELepbar_e_1 = new TH1D("hELepbar_e_1","histogramme ELep CCQE nuebar",bin,0,2);
  TH1D *hELepbar_e_2 = new TH1D("hELepbar_e_2","histogramme ELep 2p2h nuebar",bin,0,2);
  TH1D *hELepbar_e_11 = new TH1D("hELepbar_e_11","histogramme ELep RES nuebar",bin,0,2);
  TH1D *hELepbar_e_26 = new TH1D("hELepbar_e_26","histogramme ELep DIS nuebar",bin,0,2);

  TH1D *hELepbar_H_e_30 = new TH1D("hELepbar_H_e_30","histogramme ELep total nuebar sur H",bin,0,2);
  TH1D *hELepbar_H_e_1 = new TH1D("hELepbar_H_e_1","histogramme ELep CCQE nuebar sur H",bin,0,2);
  TH1D *hELepbar_O_e_30 = new TH1D("hELepbar_O_e_30","histogramme ELep total nuebar sur O",bin,0,2);
  TH1D *hELepbar_O_e_1 = new TH1D("hELepbar_O_e_1","histogramme ELep CCQE nuebar sur O",bin,0,2);

  TH1D *hpLepbar_e_30 = new TH1D("hpLepbar_e_30","histogramme pLep total nuebar",bin,0,2);
  TH1D *hpLepbar_e_1 = new TH1D("hpLepbar_e_1","histogramme pLep CCQE nuebar",bin,0,2);
  TH1D *hpLepbar_e_2 = new TH1D("hpLepbar_e_2","histogramme pLep 2p2h nuebar",bin,0,2);
  TH1D *hpLepbar_e_11 = new TH1D("hpLepbar_e_11","histogramme pLep RES nuebar",bin,0,2);
  TH1D *hpLepbar_e_26 = new TH1D("hpLepbar_e_26","histogramme pLep DIS nuebar",bin,0,2);

  TH1D *hpLepbar_H_e_30 = new TH1D("hpLepbar_H_e_30","histogramme pLep total nuebar sur H",bin,0,2);
  TH1D *hpLepbar_H_e_1 = new TH1D("hpLepbar_H_e_1","histogramme pLep CCQE nuebar sur H",bin,0,2);
  TH1D *hpLepbar_O_e_30 = new TH1D("hpLepbar_O_e_30","histogramme pLep total nuebar sur O",bin,0,2);
  TH1D *hpLepbar_O_e_1 = new TH1D("hpLepbar_O_e_1","histogramme pLep CCQE nuebar sur O",bin,0,2);


  TH2D *hq0q3bar_e_30 = new TH2D("hq0q3bar_e_30","histogramme q0 en fonction de q3 tot nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_1 = new TH2D("hq0q3bar_e_1","histogramme q0 en fonction de q3 CCQE nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_2 = new TH2D("hq0q3bar_e_2","histogramme q0 en fonction de q3 2p2h nuebar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_11 = new TH2D("hq0q3bar_e_11","histogramme q0 en fonction de q3 2p2h nuebar",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_e_26 = new TH2D("hq0q3bar_e_26","histogramme q0 en fonction de q3 DIS nuebar", nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnubar_e_30 = new TH2D("hcosEnubar_e_30","histogramme cos(theta) en fonction de Enu tot nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_1 = new TH2D("hcosEnubar_e_1","histogramme cos(theta) en fonction de Enu CCQE nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_2 = new TH2D("hcosEnubar_e_2","histogramme cos(theta) en fonction de Enu 2p2h nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_11 = new TH2D("hcosEnubar_e_11","histogramme cos(theta) en fonction de Enu 2p2h nuebar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_e_26 = new TH2D("hcosEnubar_e_26","histogramme cos(theta) en fonction de Enu DIS nuebar", 500,0,2,500,-1,1);
  
  TH2D *hplepEnubar_e_30 = new TH2D("hplepEnubar_e_30","histogramme plep en fonction de Enu tot nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_1 = new TH2D("hplepEnubar_e_1","histogramme plep en fonction de Enu CCQE nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_2 = new TH2D("hplepEnubar_e_2","histogramme plep en fonction de Enu 2p2h nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_11 = new TH2D("hplepEnubar_e_11","histogramme plep en fonction de Enu 2p2h nuebar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_e_26 = new TH2D("hplepEnubar_e_26","histogramme plep en fonction de Enu DIS nuebar", 500,0,2,500,0,2);

  
//nu_mu_bar//
  TH1D *hEnubar_mu_30 = new TH1D("hEnubar_mu_30","histogramme Enu total numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_1 = new TH1D("hEnubar_mu_1","histogramme Enu CCQE numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_2 = new TH1D("hEnubar_mu_2","histogramme Enu 2p2h numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_11 = new TH1D("hEnubar_mu_11","histogramme Enu RES numubar",nbinEnu,0,2);
  TH1D *hEnubar_mu_26 = new TH1D("hEnubar_mu_26","histogramme Enu DIS numubar",nbinEnu,0,2);

  TH1D *hEnubar_H_mu_30 = new TH1D("hEnubar_H_mu_30","histogramme Enu total numubar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_mu_1 = new TH1D("hEnubar_H_mu_1","histogramme Enu CCQE numubar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_mu_2 = new TH1D("hEnubar_H_mu_2","histogramme Enu 2p2h numubar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_mu_11 = new TH1D("hEnubar_H_mu_11","histogramme Enu RES numubar sur H",nbinEnu,0,2);
  TH1D *hEnubar_H_mu_26 = new TH1D("hEnubar_H_mu_26","histogramme Enu DIS numubar sur H",nbinEnu,0,2);

  TH1D *hEnubar_O_mu_30 = new TH1D("hEnubar_O_mu_30","histogramme Enu total numubar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_mu_1 = new TH1D("hEnubar_O_mu_1","histogramme Enu CCQE numubar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_mu_2 = new TH1D("hEnubar_O_mu_2","histogramme Enu 2p2h numubar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_mu_11 = new TH1D("hEnubar_O_mu_11","histogramme Enu RES numubar sur O",nbinEnu,0,2);
  TH1D *hEnubar_O_mu_26 = new TH1D("hEnubar_O_mu_26","histogramme Enu DIS numubar sur O",nbinEnu,0,2);

  TH1D *hq0bar_mu_30 = new TH1D("hq0bar_mu_30","histogramme q0 total numubar",bin,0,2);
  TH1D *hq0bar_mu_1 = new TH1D("hq0bar_mu_1","histogramme q0 CCQE numubar",bin,0,2);
  TH1D *hq0bar_mu_2 = new TH1D("hq0bar_mu_2","histogramme q0 2p2h numubar",bin,0,2);
  TH1D *hq0bar_mu_11 = new TH1D("hq0bar_mu_11","histogramme q0 RES numubar",bin,0,2);
  TH1D *hq0bar_mu_26 = new TH1D("hq0bar_mu_26","histogramme q0 DIS numubar",bin,0,2);

  TH1D *hq0bar_H_mu_30 = new TH1D("hq0bar_H_mu_30","histogramme q0 total numubar sur H",bin,0,2);
  TH1D *hq0bar_H_mu_1 = new TH1D("hq0bar_H_mu_1","histogramme q0 CCQE numubar sur H",bin,0,2);
  TH1D *hq0bar_O_mu_30 = new TH1D("hq0bar_O_mu_30","histogramme q0 total numubar sur O",bin,0,2);
  TH1D *hq0bar_O_mu_1 = new TH1D("hq0bar_O_mu_1","histogramme q0 CCQE numubar sur O",bin,0,2);

  TH1D *hq3bar_mu_30 = new TH1D("hq3bar_mu_30","histogramme q3 total numubar",bin,0,2);
  TH1D *hq3bar_mu_1 = new TH1D("hq3bar_mu_1","histogramme q3 CCQE numubar",bin,0,2);
  TH1D *hq3bar_mu_2 = new TH1D("hq3bar_mu_2","histogramme q3 2p2h numubar",bin,0,2);
  TH1D *hq3bar_mu_11 = new TH1D("hq3bar_mu_11","histogramme q3 RES numubar",bin,0,2);
  TH1D *hq3bar_mu_26 = new TH1D("hq3bar_mu_26","histogramme q3 DIS numubar",bin,0,2);

  TH1D *hq3bar_H_mu_30 = new TH1D("hq3bar_H_mu_30","histogramme q3 total numubar sur H",bin,0,2);
  TH1D *hq3bar_H_mu_1 = new TH1D("hq3bar_H_mu_1","histogramme q3 CCQE numubar sur H",bin,0,2);
  TH1D *hq3bar_O_mu_30 = new TH1D("hq3bar_O_mu_30","histogramme q3 total numubar sur O",bin,0,2);
  TH1D *hq3bar_O_mu_1 = new TH1D("hq3bar_O_mu_1","histogramme q3 CCQE numubar sur O",bin,0,2);

  TH1D *hQ2bar_mu_30 = new TH1D("hQ2bar_mu_30","histogramme Q2 total numubar",bin,0,2);
  TH1D *hQ2bar_mu_1 = new TH1D("hQ2bar_mu_1","histogramme Q2 CCQE numubar",bin,0,2);
  TH1D *hQ2bar_mu_2 = new TH1D("hQ2bar_mu_2","histogramme Q2 2p2h numubar",bin,0,2);
  TH1D *hQ2bar_mu_11 = new TH1D("hQ2bar_mu_11","histogramme Q2 RES numubar",bin,0,2);
  TH1D *hQ2bar_mu_26 = new TH1D("hQ2bar_mu_26","histogramme Q2 DIS numubar",bin,0,2);

  TH1D *hQ2bar_H_mu_30 = new TH1D("hQ2bar_H_mu_30","histogramme Q2 total numubar sur H",bin,0,2);
  TH1D *hQ2bar_H_mu_1 = new TH1D("hQ2bar_H_mu_1","histogramme Q2 CCQE numubar sur H",bin,0,2);
  TH1D *hQ2bar_O_mu_30 = new TH1D("hQ2bar_O_mu_30","histogramme Q2 total numubar sur O",bin,0,2);
  TH1D *hQ2bar_O_mu_1 = new TH1D("hQ2bar_O_mu_1","histogramme Q2 CCQE numubar sur O",bin,0,2);

  TH1D *hcosbar_mu_30 = new TH1D("hcosbar_mu_30","histogramme coslep tot numubar",bin,-1,1);
  TH1D *hcosbar_mu_1 = new TH1D("hcosbar_mu_1","histogramme coslep CCQE numubar",bin,-1,1);
  TH1D *hcosbar_mu_2 = new TH1D("hcosbar_mu_2","histogramme coslep 2p2h numubar",bin,-1,1);
  TH1D *hcosbar_mu_11 = new TH1D("hcosbar_mu_11","histogramme coslep RES numubar",bin,-1,1);
  TH1D *hcosbar_mu_26 = new TH1D("hcosbar_mu_26","histogramme coslep DIS numubar",bin,-1,1);

  TH1D *hcosbar_H_mu_30 = new TH1D("hcosbar_H_mu_30","histogramme cos total numubar sur H",bin,-1,1);
  TH1D *hcosbar_H_mu_1 = new TH1D("hcosbar_H_mu_1","histogramme cos CCQE numubar sur H",bin,-1,1);
  TH1D *hcosbar_O_mu_30 = new TH1D("hcosbar_O_mu_30","histogramme cos total numubar sur O",bin,-1,1);
  TH1D *hcosbar_O_mu_1 = new TH1D("hcosbar_O_mu_1","histogramme cos CCQE numubar sur O",bin,-1,1);

  TH1D *hELepbar_mu_30 = new TH1D("hELepbar_mu_30","histogramme ELep total numubar",bin,0,2);
  TH1D *hELepbar_mu_1 = new TH1D("hELepbar_mu_1","histogramme ELep CCQE numubar",bin,0,2);
  TH1D *hELepbar_mu_2 = new TH1D("hELepbar_mu_2","histogramme ELep 2p2h numubar",bin,0,2);
  TH1D *hELepbar_mu_11 = new TH1D("hELepbar_mu_11","histogramme ELep RES numubar",bin,0,2);
  TH1D *hELepbar_mu_26 = new TH1D("hELepbar_mu_26","histogramme ELep DIS numubar",bin,0,2);

  TH1D *hELepbar_H_mu_30 = new TH1D("hELepbar_H_mu_30","histogramme ELep total numubar sur H",bin,0,2);
  TH1D *hELepbar_H_mu_1 = new TH1D("hELepbar_H_mu_1","histogramme ELep CCQE numubar sur H",bin,0,2);
  TH1D *hELepbar_O_mu_30 = new TH1D("hELepbar_O_mu_30","histogramme ELep total numubar sur O",bin,0,2);
  TH1D *hELepbar_O_mu_1 = new TH1D("hELepbar_O_mu_1","histogramme ELep CCQE numubar sur O",bin,0,2);

  TH1D *hpLepbar_mu_30 = new TH1D("hpLepbar_mu_30","histogramme pLep total numubar",bin,0,2);
  TH1D *hpLepbar_mu_1 = new TH1D("hpLepbar_mu_1","histogramme pLep CCQE numubar",bin,0,2);
  TH1D *hpLepbar_mu_2 = new TH1D("hpLepbar_mu_2","histogramme pLep 2p2h numubar",bin,0,2);
  TH1D *hpLepbar_mu_11 = new TH1D("hpLepbar_mu_11","histogramme pLep RES numubar",bin,0,2);
  TH1D *hpLepbar_mu_26 = new TH1D("hpLepbar_mu_26","histogramme pLep DIS numubar",bin,0,2);

  TH1D *hpLepbar_H_mu_30 = new TH1D("hpLepbar_H_mu_30","histogramme pLep total numubar sur H",bin,0,2);
  TH1D *hpLepbar_H_mu_1 = new TH1D("hpLepbar_H_mu_1","histogramme pLep CCQE numubar sur H",bin,0,2);
  TH1D *hpLepbar_O_mu_30 = new TH1D("hpLepbar_O_mu_30","histogramme pLep total numubar sur O",bin,0,2);
  TH1D *hpLepbar_O_mu_1 = new TH1D("hpLepbar_O_mu_1","histogramme pLep CCQE numubar sur O",bin,0,2);

  TH2D *hq0q3bar_mu_30 = new TH2D("hq0q3bar_mu_30","histogramme q0 en fonction de q3 tot numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_1 = new TH2D("hq0q3bar_mu_1","histogramme q0 en fonction de q3 CCQE numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_2 = new TH2D("hq0q3bar_mu_2","histogramme q0 en fonction de q3 2p2h numubar", nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_11 = new TH2D("hq0q3bar_mu_11","histogramme q0 en fonction de q3 2p2h numubar",nbinq0q3,0,1,nbinq0q3,0,1);
  TH2D *hq0q3bar_mu_26 = new TH2D("hq0q3bar_mu_26","histogramme q0 en fonction de q3 DIS numubar", nbinq0q3,0,1,nbinq0q3,0,1);

  TH2D *hcosEnubar_mu_30 = new TH2D("hcosEnubar_mu_30","histogramme cos(theta) en fonction de Enu tot numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_1 = new TH2D("hcosEnubar_mu_1","histogramme cos(theta) en fonction de Enu CCQE numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_2 = new TH2D("hcosEnubar_mu_2","histogramme cos(theta) en fonction de Enu 2p2h numubarr", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_11 = new TH2D("hcosEnubar_mu_11","histogramme cos(theta) en fonction de Enu 2p2h numubar", 500,0,2,500,-1,1);
  TH2D *hcosEnubar_mu_26 = new TH2D("hcosEnubar_mu_26","histogramme cos(theta) en fonction de Enu DIS numubar", 500,0,2,500,-1,1);
  
  TH2D *hplepEnubar_mu_30 = new TH2D("hplepEnubar_mu_30","histogramme plep en fonction de Enu tot numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_1 = new TH2D("hplepEnubar_mu_1","histogramme plep en fonction de Enu CCQE numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_2 = new TH2D("hplepEnubar_mu_2","histogramme plep en fonction de Enu 2p2h numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_11 = new TH2D("hplepEnubar_mu_11","histogramme plep en fonction de Enu 2p2h numubar", 500,0,2,500,0,2);
  TH2D *hplepEnubar_mu_26 = new TH2D("hplepEnubar_mu_26","histogramme plep en fonction de Enu DIS numubar", 500,0,2,500,0,2);

  TH2D *hcosQ2_1_mubar = new TH2D("hcosQ2_1_mubar","histogramme CosLep en fonction de Q2 CCQE _mubar", 100,0,2,100,-1,1);
  TH2D *hcosQ2_1_zoom_mubar= new TH2D("hcosQ2_1_zoom_mubar","histogramme CosLep en fonction de Q2 CCQE zoom _mubar", 100,0,0.5,100,0.5,1);
  TH2D *hcosQ2_1_mubarH = new TH2D("hcosQ2_1_mubarH","histogramme CosLep en fonction de Q2 CCQE _mubar sur H", 100,0,0.5,100,0.5,1);
  TH2D *hcosQ2_1_mubarO = new TH2D("hcosQ2_1_mubarO","histogramme CosLep en fonction de Q2 CCQE _mubar sur O", 100,0,0.5,100,0.5,1);


  //// Récupération et déclaration des variables des fichiers de simulation ////
  
//To open the files and access the variables
  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");
  
//nu_e variables
  int Mode;
  int nentries;
  float q0_e;
  float q3_e;
  float Q2_e;
  float coslep_e;
  float ELep_e;
  float pLep_e;
  float Q2_QE_e;
  float Enu_true_e;
  float Enu_QE_e;

//nu_mu variables 
  int nentries_mu;
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

//nu_e_bar variables
  int nentries_ebar;
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
  
//nu_mu_bar variables
  int nentries_mubar;
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

  float E_tot_mu = 0;
  float E_CCQE_mu = 0;
  float E_2p2h_mu = 0;
  float E_RES_mu = 0;
  float E_DIS_mu = 0;

  float E_tot_ebar = 0;
  float E_CCQE_ebar = 0;
  float E_2p2h_ebar = 0;
  float E_RES_ebar = 0;
  float E_DIS_ebar = 0;

  float E_tot_mubar = 0;
  float E_CCQE_mubar = 0;
  float E_2p2h_mubar = 0;
  float E_RES_mubar = 0;
  float E_DIS_mubar = 0;

  float c2 = 9*pow(10.0,16.0);
  float m_mu = 0.10566; //En GeV
  float m_e = 511*pow(10.0, -6.0);

  std::cout << "c2 = " << c2 << " m_mu = " << m_mu << " m_e = " << m_e <<std::endl;

  //float weight_e = 0.0056*Enu_true_e*Enu_true_e*Enu_true_e;
  //float weight_mu = 0.0056*Enu_true_mu*Enu_true_mu*Enu_true_mu;

//To reweight the flux to be flat 
  TFile * infile_flux = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TH1D* flux = (TH1D*)(infile_flux->Get("outputFlux"));
  //std::cout << "integrale flux = " << flux->Integral() << std::endl;

//To reweight the nu_mu (bar) variables so that xsec(nu_mu (bar)) = xsec(nu_e (bar))
  TFile * infile_factor_30 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factor_30.root", "OPEN");
  TFile * infile_factor_1 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factor_1.root", "OPEN");
  TFile * infile_factor_2 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factor_2.root", "OPEN");
  TFile * infile_factor_11 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factor_11.root", "OPEN");
  TFile * infile_factor_26 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factor_26.root", "OPEN");
  TFile * infile_factorbar_30 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_30.root", "OPEN");
  TFile * infile_factorbar_1 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_1.root", "OPEN");
  TFile * infile_factorbar_2 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_2.root", "OPEN");
  TFile * infile_factorbar_11 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_11.root", "OPEN");
  TFile * infile_factorbar_26 = new TFile("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_26.root", "OPEN");

  TH1D * hist_factor_30 = (TH1D*) infile_factor_30->Get("hfactor");
  TH1D * hist_factor_1 = (TH1D*) infile_factor_1->Get("hfactor");
  TH1D * hist_factor_2 = (TH1D*) infile_factor_2->Get("hfactor");
  TH1D * hist_factor_11 = (TH1D*) infile_factor_11->Get("hfactor");
  TH1D * hist_factor_26 = (TH1D*) infile_factor_26->Get("hfactor");
  TH1D * hist_factorbar_30 = (TH1D*) infile_factorbar_30->Get("hfactorbar");
  TH1D * hist_factorbar_1 = (TH1D*) infile_factorbar_1->Get("hfactorbar");
  TH1D * hist_factorbar_2 = (TH1D*) infile_factorbar_2->Get("hfactorbar");
  TH1D * hist_factorbar_11 = (TH1D*) infile_factorbar_11->Get("hfactorbar");
  TH1D * hist_factorbar_26 = (TH1D*) infile_factorbar_26->Get("hfactorbar");
  
  //// Boucle pour remplir les histogrammes ////

  float binX = 0;
  float w = 0;
  float binX1 = 0;
  float w1 = 0;

  for(int i = 0; i < nentries; i++){
    input_tree_e->GetEntry(i);

    //This is the weight I apply to each histogram to simulate a flat flux
    binX = flux->FindBin(Enu_true_e);
    w = flux->GetBinContent(binX);
    //w=1; //To remove the weight

    //All CC interactions 
    if(Mode<30){  
      hEnu_e_30->Fill(Enu_true_e,1/w);
      hq0_e_30->Fill(q0_e,1/w);
      hq3_e_30->Fill(q3_e,1/w);
      hQ2_e_30->Fill(Q2_e,1/w);
      hcos_e_30 -> Fill(coslep_e,1/w);
      hELep_e_30->Fill(ELep_e,1/w);
      hpLep_e_30->Fill(sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
      hq0q3_e_30 -> Fill(q3_e, q0_e,1/w);
      hcosEnu_e_30->Fill(Enu_true_e, coslep_e,1/w);
      hplepEnu_e_30->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
      
      E_tot_e++;
    }
   
   //quasi-elastic (QE) interactions
   if(Mode==1){
     hEnu_e_1->Fill(Enu_true_e,1/w);
     hq0_e_1->Fill(q0_e,1/w);
     hq3_e_1->Fill(q3_e,1/w);
     hQ2_e_1->Fill(Q2_e,1/w);
     hcos_e_1 -> Fill(coslep_e,1/w);
     hELep_e_1->Fill(ELep_e,1/w);
     hpLep_e_1->Fill(sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
     hq0q3_e_1 -> Fill(q3_e, q0_e,1/w);
     hcosEnu_e_1->Fill(Enu_true_e, coslep_e,1/w);
     hplepEnu_e_1->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e),1/w);

     E_CCQE_e++;
   }
   
   //2p2h interactions 
   if(Mode==2){
     hEnu_e_2->Fill(Enu_true_e,1/w);
     hq0_e_2->Fill(q0_e,1/w);
     hq3_e_2->Fill(q3_e,1/w);
     hQ2_e_2->Fill(Q2_e,1/w);
     hcos_e_2 -> Fill(coslep_e,1/w);
     hELep_e_2->Fill(ELep_e,1/w);
     hpLep_e_2->Fill(sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
     hq0q3_e_2 -> Fill(q3_e, q0_e,1/w);
     hcosEnu_e_2->Fill(Enu_true_e, coslep_e,1/w);
     hplepEnu_e_2->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e),1/w);

     E_2p2h_e++;
   }
    
   //resonant (RES) interactions 
   if((11<=Mode)&&(Mode<=17)){
     hEnu_e_11->Fill(Enu_true_e,1/w);
     hq0_e_11->Fill(q0_e,1/w);
     hq3_e_11->Fill(q3_e,1/w);
     hQ2_e_11->Fill(Q2_e,1/w);
     hcos_e_11 -> Fill(coslep_e,1/w);
     hELep_e_11->Fill(ELep_e,1/w);
     hpLep_e_11->Fill(sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
     hq0q3_e_11 -> Fill(q3_e, q0_e,1/w);
     hcosEnu_e_11->Fill(Enu_true_e, coslep_e,1/w);
     hplepEnu_e_11->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e),1/w);

     E_RES_e++;
   }
    
    //deep-inelastic scattering (DIS)
    if((Mode==21)||(Mode==22)||(Mode==23)||(Mode==26)){
      hEnu_e_26->Fill(Enu_true_e,1/w);
      hq0_e_26->Fill(q0_e,1/w);
      hq3_e_26->Fill(q3_e,1/w);
      hQ2_e_26->Fill(Q2_e,1/w);
      hcos_e_26 -> Fill(coslep_e,1/w);
      hELep_e_26->Fill(ELep_e,1/w);
      hpLep_e_26->Fill(sqrt(ELep_e*ELep_e -m_e*m_e),1/w);
      hq0q3_e_26 -> Fill(q3_e, q0_e,1/w);
      hcosEnu_e_26->Fill(Enu_true_e, coslep_e,1/w);
      hplepEnu_e_26->Fill(Enu_true_e, sqrt(ELep_e*ELep_e -m_e*m_e),1/w);

      E_DIS_e++;
    }
 
  }



  for(int i = 0; i < nentries; i++){
    input_tree_mu->GetEntry(i);

    //This is the weight I apply to each histogram to simulate a flat flux
    binX = flux->FindBin(Enu_true_mu);
    w = flux->GetBinContent(binX);
    //w=1; //To remove the weight
    w1=1; //To remove the weight

    if(Mode_mu<30){

    //This is the weight I apply to each numu histogram to have xsec(nue)=xsec(numu)
    binX1 = hist_factor_30->FindBin(Enu_true_mu);
    //w1 = hist_factor_30->GetBinContent(binX1);

      hEnu_mu_30->Fill(Enu_true_mu,w1/w);
      hq0_mu_30->Fill(q0_mu,w1/w);
      hq3_mu_30->Fill(q3_mu,w1/w);
      hQ2_mu_30->Fill(Q2_mu,w1/w);
      hcos_mu_30 -> Fill(coslep_mu,w1/w);
      hELep_mu_30->Fill(ELep_mu,w1/w);
      hpLep_mu_30->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
      hq0q3_mu_30 -> Fill(q3_mu, q0_mu,w1/w);
      hcosEnu_mu_30->Fill(Enu_true_mu, coslep_mu,w1/w);
      hplepEnu_mu_30->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
      
      E_tot_mu++;
    }
   
   if(Mode_mu==1){

    binX1 = hist_factor_1->FindBin(Enu_true_mu);
    //w1 = hist_factor_1->GetBinContent(binX1);

     hEnu_mu_1->Fill(Enu_true_mu,w1/w);
     hq0_mu_1->Fill(q0_mu,w1/w);
     hq3_mu_1->Fill(q3_mu,w1/w);
     hQ2_mu_1->Fill(Q2_mu,w1/w);
     hcos_mu_1 -> Fill(coslep_mu,w1/w);
     hELep_mu_1->Fill(ELep_mu,w1/w);
     hpLep_mu_1->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
     hq0q3_mu_1 -> Fill(q3_mu, q0_mu,w1/w);
     hcosEnu_mu_1->Fill(Enu_true_mu, coslep_mu,w1/w);
     hplepEnu_mu_1->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
     hcosQ2_1 -> Fill(Q2_mu, coslep_mu, w1/w);
     hcosQ2_1_zoom -> Fill(Q2_mu, coslep_mu, w1/w);

     E_CCQE_mu++;
   }
   
   if(Mode_mu==2){

    binX1 = hist_factor_2->FindBin(Enu_true_mu);
    //w1 = hist_factor_2->GetBinContent(binX1);

     hEnu_mu_2->Fill(Enu_true_mu,w1/w);
     hq0_mu_2->Fill(q0_mu,w1/w);
     hq3_mu_2->Fill(q3_mu,w1/w);
     hQ2_mu_2->Fill(Q2_mu,w1/w);
     hcos_mu_2 -> Fill(coslep_mu,w1/w);
     hELep_mu_2->Fill(ELep_mu,w1/w);
     hpLep_mu_2->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
     hq0q3_mu_2 -> Fill(q3_mu, q0_mu,w1/w);
     hcosEnu_mu_2->Fill(Enu_true_mu, coslep_mu,w1/w);
     hplepEnu_mu_2->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);

     E_2p2h_mu++;
   }
    
   if((11<=Mode_mu)&&(Mode_mu<=17)){

      binX1 = hist_factor_11->FindBin(Enu_true_mu);
      //w1 = hist_factor_11->GetBinContent(binX1);

     hEnu_mu_11->Fill(Enu_true_mu,w1/w);
     hq0_mu_11->Fill(q0_mu,w1/w);
     hq3_mu_11->Fill(q3_mu,w1/w);
     hQ2_mu_11->Fill(Q2_mu,w1/w);
     hcos_mu_11 -> Fill(coslep_mu,w1/w);
     hELep_mu_11->Fill(ELep_mu,w1/w);
     hpLep_mu_11->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
     hq0q3_mu_11 -> Fill(q3_mu, q0_mu,w1/w);
     hcosEnu_mu_11->Fill(Enu_true_mu, coslep_mu,w1/w);
     hplepEnu_mu_11->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);

     E_RES_mu++;
   }
    
    if((Mode_mu==21)||(Mode_mu==22)||(Mode_mu==23)||(Mode_mu==26)){

      binX1 = hist_factor_26->FindBin(Enu_true_mu);
      //w1 = hist_factor_26->GetBinContent(binX1);

      hEnu_mu_26->Fill(Enu_true_mu,w1/w);
      hq0_mu_26->Fill(q0_mu,w1/w);
      hq3_mu_26->Fill(q3_mu,w1/w);
      hQ2_mu_26->Fill(Q2_mu,w1/w);
      hcos_mu_26 -> Fill(coslep_mu,w1/w);
      hELep_mu_26->Fill(ELep_mu,w1/w);
      hpLep_mu_26->Fill(sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);
      hq0q3_mu_26 -> Fill(q3_mu, q0_mu,w1/w);
      hcosEnu_mu_26->Fill(Enu_true_mu, coslep_mu,w1/w);
      hplepEnu_mu_26->Fill(Enu_true_mu, sqrt(ELep_mu*ELep_mu -m_mu*m_mu),w1/w);

      E_DIS_mu++;
    }


    if ((Mode_mu==1)&&(Enu_true_mu<0.3)){   //(-0.27*Q2_mu+0.99>coslep_mu)
     hcosQ2_evtsA->Fill(Q2_mu, coslep_mu);  
     hEnu_evtsA->Fill(Enu_true_mu);
     hq0_evtsA->Fill(q0_mu);
     hq3_evtsA->Fill(q3_mu);
     hQ2_evtsA->Fill(Q2_mu);
    
   }
   if ((Mode_mu==1)&&(Enu_true_mu>0.3)){
     hcosQ2_evtsB->Fill(Q2_mu, coslep_mu);
     hEnu_evtsB->Fill(Enu_true_mu);
     hq0_evtsB->Fill(q0_mu);
     hq3_evtsB->Fill(q3_mu);
     hQ2_evtsB->Fill(Q2_mu);
     
   }
   
  }


  for(int i = 0; i < nentries_ebar; i++){
    input_tree_ebar->GetEntry(i);

    binX = flux->FindBin(Enu_true_ebar);
    w = flux->GetBinContent(binX);
    //w=1;
    if(Mode_ebar>-30){
      hEnubar_e_30->Fill(Enu_true_ebar,1/w);
      hq0bar_e_30->Fill(q0_ebar,1/w);
      hq3bar_e_30->Fill(q3_ebar,1/w);
      hQ2bar_e_30->Fill(Q2_ebar,1/w);
      hcosbar_e_30 -> Fill(coslep_ebar,1/w);
      hELepbar_e_30->Fill(ELep_ebar,1/w);
      hpLepbar_e_30->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      hq0q3bar_e_30 -> Fill(q3_ebar, q0_ebar,1/w);
      hcosEnubar_e_30->Fill(Enu_true_ebar, coslep_ebar,1/w);
      hplepEnubar_e_30->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      
      E_tot_ebar++;
    }
    if(Mode_ebar==-1){
      hEnubar_e_1->Fill(Enu_true_ebar,1/w);
      hq0bar_e_1->Fill(q0_ebar,1/w);
      hq3bar_e_1->Fill(q3_ebar,1/w);
      hQ2bar_e_1->Fill(Q2_ebar,1/w);
      hcosbar_e_1 -> Fill(coslep_ebar,1/w);
      hELepbar_e_1->Fill(ELep_ebar,1/w);
      hpLepbar_e_1->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      hq0q3bar_e_1 -> Fill(q3_ebar, q0_ebar,1/w);
      hcosEnubar_e_1->Fill(Enu_true_ebar, coslep_ebar,1/w);
      hplepEnubar_e_1->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      
      E_CCQE_ebar++;
    }
    if(Mode_ebar==-2){
      hEnubar_e_2->Fill(Enu_true_ebar,1/w);
      hq0bar_e_2->Fill(q0_ebar,1/w);
      hq3bar_e_2->Fill(q3_ebar,1/w);
      hQ2bar_e_2->Fill(Q2_ebar,1/w);
      hcosbar_e_2 -> Fill(coslep_ebar,1/w);
      hELepbar_e_2->Fill(ELep_ebar,1/w);
      hpLepbar_e_2->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      hq0q3bar_e_2 -> Fill(q3_ebar, q0_ebar,1/w);
      hcosEnubar_e_2->Fill(Enu_true_ebar, coslep_ebar,1/w);
      hplepEnubar_e_2->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      
      E_2p2h_ebar++;
    }
    if((-17<=Mode_ebar)&&(Mode_ebar<=-11)){
      hEnubar_e_11->Fill(Enu_true_ebar,1/w);
      hq0bar_e_11->Fill(q0_ebar,1/w);
      hq3bar_e_11->Fill(q3_ebar,1/w);
      hQ2bar_e_11->Fill(Q2_ebar,1/w);
      hcosbar_e_11 -> Fill(coslep_ebar,1/w);
      hELepbar_e_11->Fill(ELep_ebar,1/w);
      hpLepbar_e_11->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      hq0q3bar_e_11 -> Fill(q3_ebar, q0_ebar,1/w);
      hcosEnubar_e_11->Fill(Enu_true_ebar, coslep_ebar,1/w);
      hplepEnubar_e_11->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      
     E_RES_ebar++;
    }
    if((Mode_ebar==-21)||(Mode_ebar==-22)||(Mode_ebar==-23)||(Mode_ebar==-26)){
      hEnubar_e_26->Fill(Enu_true_ebar,1/w);
      hq0bar_e_26->Fill(q0_ebar,1/w);
      hq3bar_e_26->Fill(q3_ebar,1/w);
      hQ2bar_e_26->Fill(Q2_ebar,1/w);
      hcosbar_e_26 -> Fill(coslep_ebar,1/w);
      hELepbar_e_26->Fill(ELep_ebar,1/w);
      hpLepbar_e_26->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
      hq0q3bar_e_26 -> Fill(q3_ebar, q0_ebar,1/w);
      hcosEnubar_e_26->Fill(Enu_true_ebar, coslep_ebar,1/w);
      hplepEnubar_e_26->Fill(Enu_true_ebar, sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
     E_DIS_ebar++;
    }

    // To separate interactions on H (that only happen with anti-neutrinos) and interactions on O //

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
        if (Mode_ebar>-30){
          hEnubar_H_e_30->Fill(Enu_true_ebar,1/w);
          hq0bar_H_e_30->Fill(q0_ebar,1/w);
          hq3bar_H_e_30->Fill(q3_ebar,1/w);
          hQ2bar_H_e_30->Fill(Q2_ebar,1/w);
          hcosbar_H_e_30 -> Fill(coslep_ebar,1/w);
          hELepbar_H_e_30->Fill(ELep_ebar,1/w);
          hpLepbar_H_e_30->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
        }
        if (Mode_ebar==-1){
          hEnubar_H_e_1->Fill(Enu_true_ebar,1/w);
          hq0bar_H_e_1->Fill(q0_ebar,1/w);
          hq3bar_H_e_1->Fill(q3_ebar,1/w);
          hQ2bar_H_e_1->Fill(Q2_ebar,1/w);
          hcosbar_H_e_1 -> Fill(coslep_ebar,1/w);
          hELepbar_H_e_1->Fill(ELep_ebar,1/w);
          hpLepbar_H_e_1->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
        }
        if (Mode_ebar==-2){
          hEnubar_H_e_2->Fill(Enu_true_ebar,1/w);
        }
        if ((-17<=Mode_ebar)&&(Mode_ebar<=-11)){
          hEnubar_H_e_11->Fill(Enu_true_ebar,1/w);
        }
        if ((Mode_ebar==-21)||(Mode_ebar==-22)||(Mode_ebar==-23)||(Mode_ebar==-26)){
          hEnubar_H_e_26->Fill(Enu_true_ebar,1/w);
        }
      }
      else {
        if (Mode_ebar>-30){
          hEnubar_O_e_30->Fill(Enu_true_ebar,1/w);
          hq0bar_O_e_30->Fill(q0_ebar,1/w);
          hq3bar_O_e_30->Fill(q3_ebar,1/w);
          hQ2bar_O_e_30->Fill(Q2_ebar,1/w);
          hcosbar_O_e_30 -> Fill(coslep_ebar,1/w);
          hELepbar_O_e_30->Fill(ELep_ebar,1/w);
          hpLepbar_O_e_30->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
        }
        if (Mode_ebar==-1){
          hEnubar_O_e_1->Fill(Enu_true_ebar,1/w);
          hq0bar_O_e_1->Fill(q0_ebar,1/w);
          hq3bar_O_e_1->Fill(q3_ebar,1/w);
          hQ2bar_O_e_1->Fill(Q2_ebar,1/w);
          hcosbar_O_e_1 -> Fill(coslep_ebar,1/w);
          hELepbar_O_e_1->Fill(ELep_ebar,1/w);
          hpLepbar_O_e_1->Fill(sqrt(ELep_ebar*ELep_ebar -m_e*m_e),1/w);
        }
        if (Mode_ebar==-2){
          hEnubar_O_e_2->Fill(Enu_true_ebar,1/w);
        }
        if ((-17<=Mode_ebar)&&(Mode_ebar<=-11)){
          hEnubar_O_e_11->Fill(Enu_true_ebar,1/w);
        }
        if ((Mode_ebar==-21)||(Mode_ebar==-22)||(Mode_ebar==-23)||(Mode_ebar==-26)){
          hEnubar_O_e_26->Fill(Enu_true_ebar,1/w);
        }
      }
      
  }

  for(int i = 0; i < nentries_mubar; i++){
    input_tree_mubar->GetEntry(i);

    binX = flux->FindBin(Enu_true_mubar);
    w = flux->GetBinContent(binX);
    //w=1;
    w1=1;
    if(Mode_mubar>-30){

      binX1 = hist_factorbar_30->FindBin(Enu_true_mubar);
      //w1 = hist_factorbar_30->GetBinContent(binX1);

      hEnubar_mu_30->Fill(Enu_true_mubar,w1/w);
      hq0bar_mu_30->Fill(q0_mubar,w1/w);
      hq3bar_mu_30->Fill(q3_mubar,w1/w);
      hQ2bar_mu_30->Fill(Q2_mubar,w1/w);
      hcosbar_mu_30 -> Fill(coslep_mubar,w1/w);
      hELepbar_mu_30->Fill(ELep_mubar,w1/w);
      hpLepbar_mu_30->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hq0q3bar_mu_30 -> Fill(q3_mubar, q0_mubar,w1/w);
      hcosEnubar_mu_30->Fill(Enu_true_mubar, coslep_mubar,w1/w);
      hplepEnubar_mu_30->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      
      E_tot_mubar++;
    }
    if(Mode_mubar==-1){

      binX1 = hist_factorbar_1->FindBin(Enu_true_mubar);
      //w1 = hist_factorbar_1->GetBinContent(binX1);

      hEnubar_mu_1->Fill(Enu_true_mubar,w1/w);
      hq0bar_mu_1->Fill(q0_mubar,w1/w);
      hq3bar_mu_1->Fill(q3_mubar,w1/w);
      hQ2bar_mu_1->Fill(Q2_mubar,w1/w);
      hcosbar_mu_1 -> Fill(coslep_mubar,w1/w);
      hELepbar_mu_1->Fill(ELep_mubar,w1/w);
      hpLepbar_mu_1->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hq0q3bar_mu_1 -> Fill(q3_mubar, q0_mubar,w1/w);
      hcosEnubar_mu_1->Fill(Enu_true_mubar, coslep_mubar,w1/w);
      hplepEnubar_mu_1->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hcosQ2_1_mubar -> Fill(Q2_mubar, coslep_mubar, w1/w);
      hcosQ2_1_zoom_mubar -> Fill(Q2_mubar, coslep_mubar, w1/w);
      
     E_CCQE_mubar++;
    }
    if(Mode_mubar==-2){

      binX1 = hist_factorbar_2->FindBin(Enu_true_mubar);
      //w1 = hist_factorbar_2->GetBinContent(binX1);

      hEnubar_mu_2->Fill(Enu_true_mubar,w1/w);
      hq0bar_mu_2->Fill(q0_mubar,w1/w);
      hq3bar_mu_2->Fill(q3_mubar,w1/w);
      hQ2bar_mu_2->Fill(Q2_mubar,w1/w);
      hcosbar_mu_2 -> Fill(coslep_mubar,w1/w);
      hELepbar_mu_2->Fill(ELep_mubar,w1/w);
      hpLepbar_mu_2->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hq0q3bar_mu_2 -> Fill(q3_mubar, q0_mubar,w1/w);
      hcosEnubar_mu_2->Fill(Enu_true_mubar, coslep_mubar,w1/w);
      hplepEnubar_mu_2->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      
     E_2p2h_mubar++;
    }
    if((-17<=Mode_mubar)&&(Mode_mubar<=-11)){

      binX1 = hist_factorbar_11->FindBin(Enu_true_mubar);
      //w1 = hist_factorbar_11->GetBinContent(binX1);

      hEnubar_mu_11->Fill(Enu_true_mubar,w1/w);
      hq0bar_mu_11->Fill(q0_mubar,w1/w);
      hq3bar_mu_11->Fill(q3_mubar,w1/w);
      hQ2bar_mu_11->Fill(Q2_mubar,w1/w);
      hcosbar_mu_11 -> Fill(coslep_mubar,w1/w);
      hELepbar_mu_11->Fill(ELep_mubar,w1/w);
      hpLepbar_mu_11->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hq0q3bar_mu_11 -> Fill(q3_mubar, q0_mubar,w1/w);
      hcosEnubar_mu_11->Fill(Enu_true_mubar, coslep_mubar,w1/w);
      hplepEnubar_mu_11->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      
     E_RES_mubar++;
    }
    if((Mode_mubar==-21)||(Mode_mubar==-22)||(Mode_mubar==-23)||(Mode_mubar==-26)){

      binX1 = hist_factorbar_26->FindBin(Enu_true_mubar);
      //w1 = hist_factorbar_26->GetBinContent(binX1);

      hEnubar_mu_26->Fill(Enu_true_mubar,w1/w);
      hq0bar_mu_26->Fill(q0_mubar,w1/w);
      hq3bar_mu_26->Fill(q3_mubar,w1/w);
      hQ2bar_mu_26->Fill(Q2_mubar,w1/w);
      hcosbar_mu_26 -> Fill(coslep_mubar,w1/w);
      hELepbar_mu_26->Fill(ELep_mubar,w1/w);
      hpLepbar_mu_26->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      hq0q3bar_mu_26 -> Fill(q3_mubar, q0_mubar,w1/w);
      hcosEnubar_mu_26->Fill(Enu_true_mubar, coslep_mubar,w1/w);
      hplepEnubar_mu_26->Fill(Enu_true_mubar, sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
      
     E_DIS_mubar++;
    }

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
        if (Mode_mubar>-30){
          binX1 = hist_factorbar_30->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_30->GetBinContent(binX1);
          hEnubar_H_mu_30->Fill(Enu_true_mubar,w1/w);
          hq0bar_H_mu_30->Fill(q0_mubar,w1/w);
          hq3bar_H_mu_30->Fill(q3_mubar,w1/w);
          hQ2bar_H_mu_30->Fill(Q2_mubar,w1/w);
          hcosbar_H_mu_30 -> Fill(coslep_mubar,w1/w);
          hELepbar_H_mu_30->Fill(ELep_mubar,w1/w);
          hpLepbar_H_mu_30->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
        }
        if (Mode_mubar==-1){
          binX1 = hist_factorbar_1->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_1->GetBinContent(binX1);
          hEnubar_H_mu_1->Fill(Enu_true_mubar,w1/w);
          hq0bar_H_mu_1->Fill(q0_mubar,w1/w);
          hq3bar_H_mu_1->Fill(q3_mubar,w1/w);
          hQ2bar_H_mu_1->Fill(Q2_mubar,w1/w);
          hcosbar_H_mu_1-> Fill(coslep_mubar,w1/w);
          hELepbar_H_mu_1->Fill(ELep_mubar,w1/w);
          hpLepbar_H_mu_1->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
          hcosQ2_1_mubarH -> Fill(Q2_mubar, coslep_mubar, w1/w);
        }
        if (Mode_mubar==-2){
          binX1 = hist_factorbar_2->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_2->GetBinContent(binX1);
          hEnubar_H_mu_2->Fill(Enu_true_mubar,w1/w);
        }
        if ((-17<=Mode_mubar)&&(Mode_mubar<=-11)){
          binX1 = hist_factorbar_11->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_11->GetBinContent(binX1);
          hEnubar_H_mu_11->Fill(Enu_true_mubar,w1/w);
        }
        if ((Mode_mubar==-21)||(Mode_mubar==-22)||(Mode_mubar==-23)||(Mode_mubar==-26)){
          binX1 = hist_factorbar_26->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_26->GetBinContent(binX1);
          hEnubar_H_mu_26->Fill(Enu_true_mubar,w1/w);
        }
      }
      else {
        if (Mode_mubar>-30){
          binX1 = hist_factorbar_30->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_30->GetBinContent(binX1);
          hEnubar_O_mu_30->Fill(Enu_true_mubar,w1/w);
          hq0bar_O_mu_30->Fill(q0_mubar,w1/w);
          hq3bar_O_mu_30->Fill(q3_mubar,w1/w);
          hQ2bar_O_mu_30->Fill(Q2_mubar,w1/w);
          hcosbar_O_mu_30 -> Fill(coslep_mubar,w1/w);
          hELepbar_O_mu_30->Fill(ELep_mubar,w1/w);
          hpLepbar_O_mu_30->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
        }
        if (Mode_mubar==-1){
          binX1 = hist_factorbar_1->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_1->GetBinContent(binX1);
          hEnubar_O_mu_1->Fill(Enu_true_mubar,w1/w);
          hq0bar_O_mu_1->Fill(q0_mubar,w1/w);
          hq3bar_O_mu_1->Fill(q3_mubar,w1/w);
          hQ2bar_O_mu_1->Fill(Q2_mubar,w1/w);
          hcosbar_O_mu_1 -> Fill(coslep_mubar,w1/w);
          hELepbar_O_mu_1->Fill(ELep_mubar,w1/w);
          hpLepbar_O_mu_1->Fill(sqrt(ELep_mubar*ELep_mubar -m_mu*m_mu),w1/w);
          hcosQ2_1_mubarO -> Fill(Q2_mubar, coslep_mubar, w1/w);
        }
        if (Mode_mubar==-2){
          binX1 = hist_factorbar_2->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_2->GetBinContent(binX1);
          hEnubar_O_mu_2->Fill(Enu_true_mubar,w1/w);
        }
        if ((-17<=Mode_mubar)&&(Mode_mubar<=-11)){
          binX1 = hist_factorbar_11->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_11->GetBinContent(binX1);
          hEnubar_O_mu_11->Fill(Enu_true_mubar,w1/w);
        }
        if ((Mode_mubar==-21)||(Mode_mubar==-22)||(Mode_mubar==-23)||(Mode_mubar==-26)){
          binX1 = hist_factorbar_26->FindBin(Enu_true_mubar);
          //w1 = hist_factorbar_26->GetBinContent(binX1);
          hEnubar_O_mu_26->Fill(Enu_true_mubar,w1/w);
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

  std::cout <<"numu" <<std::endl;
  std::cout << "Etot " << E_tot_mu << std::endl;
  std::cout << "CCQE " << E_CCQE_mu << " prop " << (E_CCQE_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_mu << " prop " << (E_2p2h_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_mu << " prop " << (E_RES_mu/E_tot_mu)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_mu << " prop " << (E_DIS_mu/E_tot_mu)*100 << "%" <<std::endl;

  std::cout << "nuebar" <<std::endl;
  std::cout << "Etot " << E_tot_ebar << std::endl;
  std::cout << "CCQE " << E_CCQE_ebar << " prop " << (E_CCQE_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_ebar << " prop " << (E_2p2h_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_ebar << " prop " << (E_RES_ebar/E_tot_ebar)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_ebar << " prop " << (E_DIS_ebar/E_tot_ebar)*100 << "%" <<std::endl;

  std::cout <<"numubar" <<std::endl;
  std::cout << "Etot " << E_tot_mubar << std::endl;
  std::cout << "CCQE " << E_CCQE_mubar << " prop " << (E_CCQE_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h_mubar << " prop " << (E_2p2h_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES_mubar << " prop " << (E_RES_mubar/E_tot_mubar)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS_mubar << " prop " << (E_DIS_mubar/E_tot_mubar)*100 << "%" <<std::endl;


  //// Saving the histograms and the files ////
  
  TFile * outfile1D_new_flat = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "RECREATE");

  //nu_e//
  hEnu_e_30->Write();
  hEnu_e_1->Write();
  hEnu_e_2->Write();
  hEnu_e_11->Write();
  hEnu_e_26->Write();

  hq0_e_30->Write();
  hq0_e_1->Write();
  hq0_e_2->Write();
  hq0_e_11->Write();
  hq0_e_26->Write();

  hq3_e_30->Write();
  hq3_e_1->Write();
  hq3_e_2->Write();
  hq3_e_11->Write();
  hq3_e_26->Write();
  
  hQ2_e_30->Write();
  hQ2_e_1->Write();
  hQ2_e_2->Write();
  hQ2_e_11->Write();
  hQ2_e_26->Write();

  hcos_e_30->Write();
  hcos_e_1->Write();
  hcos_e_2->Write();
  hcos_e_11->Write();
  hcos_e_26->Write(); 

  hELep_e_30->Write();
  hELep_e_1->Write();
  hELep_e_2->Write();
  hELep_e_11->Write();
  hELep_e_26->Write();

  hpLep_e_30->Write();
  hpLep_e_1->Write();
  hpLep_e_2->Write();
  hpLep_e_11->Write();
  hpLep_e_26->Write();

  //nu_mu//
  hEnu_mu_30->Write();
  hEnu_mu_1->Write();
  hEnu_mu_2->Write();
  hEnu_mu_11->Write();
  hEnu_mu_26->Write();

  hq0_mu_30->Write();
  hq0_mu_1->Write();
  hq0_mu_2->Write();
  hq0_mu_11->Write();
  hq0_mu_26->Write();

  hq3_mu_30->Write();
  hq3_mu_1->Write();
  hq3_mu_2->Write();
  hq3_mu_11->Write();
  hq3_mu_26->Write();
  
  hQ2_mu_30->Write();
  hQ2_mu_1->Write();
  hQ2_mu_2->Write();
  hQ2_mu_11->Write();
  hQ2_mu_26->Write();

  hcos_mu_30->Write();
  hcos_mu_1->Write();
  hcos_mu_2->Write();
  hcos_mu_11->Write();
  hcos_mu_26->Write(); 

  hELep_mu_30->Write();
  hELep_mu_1->Write();
  hELep_mu_2->Write();
  hELep_mu_11->Write();
  hELep_mu_26->Write();

  hpLep_mu_30->Write();
  hpLep_mu_1->Write();
  hpLep_mu_2->Write();
  hpLep_mu_11->Write();
  hpLep_mu_26->Write();

  hEnu_evtsA->Write();
  hEnu_evtsB->Write();

  hq0_evtsA->Write();
  hq0_evtsB->Write();
  
  hq3_evtsA->Write();
  hq3_evtsB->Write();

  hQ2_evtsA->Write();
  hQ2_evtsB->Write();


  //nu_e_bar//
  hEnubar_e_30->Write();
  hEnubar_e_1->Write();
  hEnubar_e_2->Write();
  hEnubar_e_11->Write();
  hEnubar_e_26->Write();

  hq0bar_e_30->Write();
  hq0bar_e_1->Write();
  hq0bar_e_2->Write();
  hq0bar_e_11->Write();
  hq0bar_e_26->Write();

  hq3bar_e_30->Write();
  hq3bar_e_1->Write();
  hq3bar_e_2->Write();
  hq3bar_e_11->Write();
  hq3bar_e_26->Write();
  
  hQ2bar_e_30->Write();
  hQ2bar_e_1->Write();
  hQ2bar_e_2->Write();
  hQ2bar_e_11->Write();
  hQ2bar_e_26->Write();

  hcosbar_e_30->Write();
  hcosbar_e_1->Write();
  hcosbar_e_2->Write();
  hcosbar_e_11->Write();
  hcosbar_e_26->Write(); 

  hELepbar_e_30->Write();
  hELepbar_e_1->Write();
  hELepbar_e_2->Write();
  hELepbar_e_11->Write();
  hELepbar_e_26->Write();

  hpLepbar_e_30->Write();
  hpLepbar_e_1->Write();
  hpLepbar_e_2->Write();
  hpLepbar_e_11->Write();
  hpLepbar_e_26->Write();

  hEnubar_H_e_30->Write();
  hEnubar_O_e_30->Write();
  hEnubar_H_e_1->Write();
  hEnubar_O_e_1->Write();
  hEnubar_H_e_2->Write();
  hEnubar_O_e_2->Write();
  hEnubar_H_e_11->Write();
  hEnubar_O_e_11->Write();
  hEnubar_H_e_26->Write();
  hEnubar_O_e_26->Write();

  hq0bar_H_e_30->Write();
  hq0bar_O_e_30->Write();
  hq0bar_H_e_1->Write();
  hq0bar_O_e_1->Write();

  hq3bar_H_e_30->Write();
  hq3bar_O_e_30->Write();
  hq3bar_H_e_1->Write();
  hq3bar_O_e_1->Write();
  
  hQ2bar_H_e_30->Write();
  hQ2bar_O_e_30->Write();
  hQ2bar_H_e_1->Write();
  hQ2bar_O_e_1->Write();

  hcosbar_H_e_30->Write();
  hcosbar_O_e_30->Write();
  hcosbar_H_e_1->Write();
  hcosbar_O_e_1->Write();

  hELepbar_H_e_30->Write();
  hELepbar_O_e_30->Write();
  hELepbar_H_e_1->Write();
  hELepbar_O_e_1->Write();

  hpLepbar_H_e_30->Write();
  hpLepbar_O_e_30->Write();
  hpLepbar_H_e_1->Write();
  hpLepbar_O_e_1->Write();
  
  //nu_mu_bar//
  hEnubar_mu_30->Write();
  hEnubar_mu_1->Write();
  hEnubar_mu_2->Write();
  hEnubar_mu_11->Write();
  hEnubar_mu_26->Write();

  hq0bar_mu_30->Write();
  hq0bar_mu_1->Write();
  hq0bar_mu_2->Write();
  hq0bar_mu_11->Write();
  hq0bar_mu_26->Write();

  hq3bar_mu_30->Write();
  hq3bar_mu_1->Write();
  hq3bar_mu_2->Write();
  hq3bar_mu_11->Write();
  hq3bar_mu_26->Write();
  
  hQ2bar_mu_30->Write();
  hQ2bar_mu_1->Write();
  hQ2bar_mu_2->Write();
  hQ2bar_mu_11->Write();
  hQ2bar_mu_26->Write();

  hcosbar_mu_30->Write();
  hcosbar_mu_1->Write();
  hcosbar_mu_2->Write();
  hcosbar_mu_11->Write();
  hcosbar_mu_26->Write(); 

  hELepbar_mu_30->Write();
  hELepbar_mu_1->Write();
  hELepbar_mu_2->Write();
  hELepbar_mu_11->Write();
  hELepbar_mu_26->Write();

  hpLepbar_mu_30->Write();
  hpLepbar_mu_1->Write();
  hpLepbar_mu_2->Write();
  hpLepbar_mu_11->Write();
  hpLepbar_mu_26->Write();

  hEnubar_H_mu_30->Write();
  hEnubar_O_mu_30->Write();
  hEnubar_H_mu_1->Write();
  hEnubar_O_mu_1->Write();
  hEnubar_H_mu_2->Write();
  hEnubar_O_mu_2->Write();
  hEnubar_H_mu_11->Write();
  hEnubar_O_mu_11->Write();
  hEnubar_H_mu_26->Write();
  hEnubar_O_mu_26->Write();

  hq0bar_H_mu_30->Write();
  hq0bar_O_mu_30->Write();
  hq0bar_H_mu_1->Write();
  hq0bar_O_mu_1->Write();

  hq3bar_H_mu_30->Write();
  hq3bar_O_mu_30->Write();
  hq3bar_H_mu_1->Write();
  hq3bar_O_mu_1->Write();
  
  hQ2bar_H_mu_30->Write();
  hQ2bar_O_mu_30->Write();
  hQ2bar_H_mu_1->Write();
  hQ2bar_O_mu_1->Write();

  hcosbar_H_mu_30->Write();
  hcosbar_O_mu_30->Write();
  hcosbar_H_mu_1->Write();
  hcosbar_O_mu_1->Write();

  hELepbar_H_mu_30->Write();
  hELepbar_O_mu_30->Write();
  hELepbar_H_mu_1->Write();
  hELepbar_O_mu_1->Write();

  hpLepbar_H_mu_30->Write();
  hpLepbar_O_mu_30->Write();
  hpLepbar_H_mu_1->Write();
  hpLepbar_O_mu_1->Write();

  outfile1D_new_flat->Close();

  TFile * outfile2D_new_flat = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "RECREATE");

  hq0q3_e_30->Write();
  hq0q3_e_1->Write();
  hq0q3_e_2->Write();
  hq0q3_e_11->Write();
  hq0q3_e_26->Write();

  hcosEnu_e_30->Write();
  hcosEnu_e_1->Write();
  hcosEnu_e_2->Write();
  hcosEnu_e_11->Write();
  hcosEnu_e_26->Write(); 

  hplepEnu_e_30->Write();
  hplepEnu_e_1->Write();
  hplepEnu_e_2->Write();
  hplepEnu_e_11->Write();
  hplepEnu_e_26->Write();  


  hq0q3_mu_30->Write();
  hq0q3_mu_1->Write();
  hq0q3_mu_2->Write();
  hq0q3_mu_11->Write();
  hq0q3_mu_26->Write();
  
  hcosEnu_mu_30->Write();
  hcosEnu_mu_1->Write();
  hcosEnu_mu_2->Write();
  hcosEnu_mu_11->Write();
  hcosEnu_mu_26->Write(); 

  hplepEnu_mu_30->Write();
  hplepEnu_mu_1->Write();
  hplepEnu_mu_2->Write();
  hplepEnu_mu_11->Write();
  hplepEnu_mu_26->Write(); 

  hcosQ2_evtsA->Write();
  hcosQ2_evtsB->Write();

  hcosQ2_1->Write();
  hcosQ2_1_zoom->Write();

  

  hq0q3bar_e_30->Write();
  hq0q3bar_e_1->Write();
  hq0q3bar_e_2->Write();
  hq0q3bar_e_11->Write();
  hq0q3bar_e_26->Write();

  hcosEnubar_e_30->Write();
  hcosEnubar_e_1->Write();
  hcosEnubar_e_2->Write();
  hcosEnubar_e_11->Write();
  hcosEnubar_e_26->Write(); 

  hplepEnubar_e_30->Write();
  hplepEnubar_e_1->Write();
  hplepEnubar_e_2->Write();
  hplepEnubar_e_11->Write();
  hplepEnubar_e_26->Write(); 
  

  hq0q3bar_mu_30->Write();
  hq0q3bar_mu_1->Write();
  hq0q3bar_mu_2->Write();
  hq0q3bar_mu_11->Write();
  hq0q3bar_mu_26->Write();

  hcosEnubar_mu_30->Write();
  hcosEnubar_mu_1->Write();
  hcosEnubar_mu_2->Write();
  hcosEnubar_mu_11->Write();
  hcosEnubar_mu_26->Write(); 

  hplepEnubar_mu_30->Write();
  hplepEnubar_mu_1->Write();
  hplepEnubar_mu_2->Write();
  hplepEnubar_mu_11->Write();
  hplepEnubar_mu_26->Write(); 

  hcosQ2_1_mubar -> Write();
  hcosQ2_1_zoom_mubar-> Write();
  hcosQ2_1_mubarH -> Write();
  hcosQ2_1_mubarO -> Write();

  outfile2D_new_flat->Close();
  
  
}



//plot et sauvegarde l'histogramme de Enu en enlevant les différences entre nue et numu 
//Ne pas utiliser si w1 != 1 dans new_Flat 
//Faire attention a vérifier si en mode nu ou nubar avec les fscale_factor
void AgatheAnalysis::plotnewTH1D_xsec_noDiff()
{
  
  int color = 1;

  std::vector<int> mods = {30, 1, 26, 11, 2};
  std::map<int, TH1D*> hExsec_e_;
  std::map<int, TH1D*> hExsec_mu_;
  
  hExsec_e_[30] = new TH1D("hExsec_e_30","histogramme Enu total xsec nue",95,0.1,2);
  hExsec_e_[1] = new TH1D("hExsec_e_1","histogramme Enu CCQE xsec nue ",95,0.1,2);
  hExsec_e_[2] = new TH1D("hExsec_e_2","histogramme Enu 2p2h xsec nue",95,0.1,2);
  hExsec_e_[11] = new TH1D("hExsec_e_11","histogramme Enu RES xsec nue",95,0.1,2);
  hExsec_e_[26] = new TH1D("hExsec_e_26","histogramme Enu DIS xsec nue",95,0.1,2);

  hExsec_mu_[30] = new TH1D("hExsec_mu_30","histogramme Enu total xsec numu",95,0.1,2);
  hExsec_mu_[1] = new TH1D("hExsec_mu_1","histogramme Enu CCQE xsec numu",95,0.1,2);
  hExsec_mu_[2] = new TH1D("hExsec_mu_2","histogramme Enu 2p2h xsec numu",95,0.1,2);
  hExsec_mu_[11] = new TH1D("hExsec_mu_11","histogramme Enu RES xsec numu",95,0.1,2);
  hExsec_mu_[26] = new TH1D("hExsec_mu_26","histogramme Enu DIS xsec numu",95,0.1,2);

  /*
  TH1D *hfactor_30 = new TH1D("hfactor_30","histogramme factor total xsec",95,0.1,2);
  TH1D *hfactor_1 = new TH1D("hfactor_1","histogramme factor QE xsec",95,0.1,2);
  TH1D *hfactor_2 = new TH1D("hfactor_2","histogramme factor 2p2h xsec",95,0.1,2);
  TH1D *hfactor_11 = new TH1D("hfactor_11","histogramme factor RES xsec",95,0.1,2);
  TH1D *hfactor_26 = new TH1D("hfactor_26","histogramme factor DIS xsec",95,0.1,2);
  */
  
  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");

  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");
  
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
 
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
  TCanvas *c1D_noDiff = new TCanvas("histogramme Enu noDiff");
  TLegend *leg1D_xsec = new TLegend(0.4,0.5,0.6,0.7);

  std::string outfilenew_noDiff = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_noDiff.pdf";
  
  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : mods) {

  if (color==5){
	  color++;
	}
      
    TH1D* hE_e = (TH1D*)(infile1D_sup->Get(Form("hEnu_e_%d", mod)));
    TH1D* hE_mu = (TH1D*)(infile1D_sup->Get(Form("hEnu_mu_%d", mod)));

    TH1D* hEbar_e = (TH1D*)(infile1D_sup->Get(Form("hEnubar_e_%d", mod)));
    TH1D* hEbar_mu = (TH1D*)(infile1D_sup->Get(Form("hEnubar_mu_%d", mod)));

    TH1D* hExsec_e = hExsec_e_[mod];
    TH1D* hExsec_mu = hExsec_mu_[mod];
    TH1D* hfactor = new TH1D("hfactor","histogramme factor xsec",95,0.1,2);
    TH1D* hfactorbar = new TH1D("hfactorbar","histogramme factor xsec nubar",95,0.1,2);
      
    double sigma_e = 0;
    double sigma_mu = 0;
    double factor = 0;
    double sigma_ebar = 0;
    double sigma_mubar = 0;
    double factorbar = 0;
   
    for (int j=1; j<=newbin; ++j){
      double heContent = hE_e->GetBinContent(j);
      double hmuContent = hE_mu->GetBinContent(j);

      double hebarContent = hEbar_e->GetBinContent(j);
      double hmubarContent = hEbar_mu->GetBinContent(j);
     
      sigma_e = heContent*scalefactor_e; 
      sigma_mu = hmuContent*scalefactor_mu;
      sigma_ebar = hebarContent*scalefactor_ebar; 
      sigma_mubar = hmubarContent*scalefactor_mubar;

      if (sigma_mu == 0){
        factor = sigma_e;
      }
      else {
        factor = sigma_e/sigma_mu;
      }

      if (sigma_mubar == 0){
        factorbar = sigma_ebar;
      }
      else {
        factorbar = sigma_ebar/sigma_mubar;
      }
     
      hExsec_e->SetBinContent(j, heContent*scalefactor_e*10*pow(10.0,38.0));
      hExsec_mu->SetBinContent(j, hmuContent*factor*scalefactor_mu*10*pow(10.0,38.0));

      hfactor->SetBinContent(j, factor);
      hfactorbar->SetBinContent(j, factorbar);
     
    }


/*
    for (int j=1; j<=newbin; ++j){
      double heContentnew = hExsec_e->GetBinContent(j);
      double hmuContentnew = hExsec_mu->GetBinContent(j);

      if(heContentnew != hmuContentnew){
        std::cout << "bin " << j << std::endl;
      }
     
    }
*/
      c1D_noDiff->cd();
      
      /*
      hExsec_e->SetLineColor(color);
      hExsec_e->SetLineWidth(2);
      hExsec_e->SetTitle("histogramme Enu cross section tous modes; E_{#nu} (GeV); #sigma(E) (cm^{2}/nucleon) 10^{-38}");
      //hExsec_e->Scale(scalefactor_e*10, "width");
      hExsec_e->Draw("HIST SAMES");
      std::cout << "max nue = " << hExsec_e->GetMaximum() << std::endl;
      
      c1D_noDiff->cd();
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetLineWidth(4);
      hExsec_mu->SetTitle("histogramme Enu cross section tous modes; E_{#nu} (GeV); #sigma(E) (cm^{2}/nucleon) 10^{-38}");
      //hExsec_mu->Scale(scalefactor_mu*10, "width");
      hExsec_mu->Draw("HIST SAMES");
      std::cout << "max numu = " << hExsec_mu->GetMaximum() << std::endl;
      */
      
     
      hfactor->SetLineColor(color);
      hfactor->SetLineWidth(2);
      hfactor->SetMaximum(140.0);
      hfactor->SetTitle("histogramme Enu cross section tous modes; E_{#nu} (GeV); #sigma(#nu_{e})/#sigma(#nu_{#mu}) ");
      hfactor->Draw("HIST SAMES");
      
     
    color++;
    TFile * outfile_factor = new TFile(Form("~/Code_agathe/NewFiles/histo_factor/histo_factor_%d.root",mod), "RECREATE");
    hfactor->Write();
    outfile_factor->Close();
    TFile * outfile_factorbar = new TFile(Form("~/Code_agathe/NewFiles/histo_factor/histo_factorbar_%d.root",mod), "RECREATE");
    hfactorbar->Write();
    outfile_factorbar->Close();
  }
  
  c1D_noDiff->SetGrid(1,1);
  /*
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

  leg1D_xsec->Draw();
  */

  c1D_noDiff->SaveAs(outfilenew_noDiff.c_str());




}



// Plot Enu separated by interactions and plot each interaction considered like RES or DIS 
void AgatheAnalysis::newgraph_xsec(){

  TH1D *hxsec_mu_30 = new TH1D("hxsec_mu_30","histogramme xsec total numu",200,0,2);
  TH1D *hxsec_mu_1 = new TH1D("hxsec_mu_1","histogramme xsec CCQE numu",200,0,2);
  TH1D *hxsec_mu_2 = new TH1D("hxsec_mu_2","histogramme xsec 2p2h numu",200,0,2);
  TH1D *hxsec_mu_RES = new TH1D("hxsec_mu_RES","histogramme xsec RES numu",200,0,2);
  TH1D *hxsec_mu_DIS = new TH1D("hxsec_mu_DIS","histogramme xsec DIS numu",200,0,2);
  
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

  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  std::string outfilenew_xsec = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_xsec.pdf";

  TFile * T2Kflux = new TFile("~/Code_agathe/OldFiles/simulations_OldFiles/T2KND_FHC_numu_C8H8_NEUT562_1M_0000_NUISFLAT.root", "OPEN");
  TH1D* fluxT2K = (TH1D*)(T2Kflux->Get("FlatTree_FLUX"));

  
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

  TFile * infile_flux = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TH1D* flux = (TH1D*)(infile_flux->Get("outputFlux"));

  float binX = 0;
  float w = 0;

  for(int i = 0; i < nentries_mu; i++){
    input_tree_mu->GetEntry(i);
    binX = flux->FindBin(Enu_true_mu);
    w = flux->GetBinContent(binX);

    if(Mode_mu<30){
      hxsec_mu_30->Fill(Enu_true_mu,1/w);
    }

    if(Mode_mu==1){
      hxsec_mu_1->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==2){
      hxsec_mu_2->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==11){
      hxsec_mu_11->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==12){
      hxsec_mu_12->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==13){
      hxsec_mu_13->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==15){
      hxsec_mu_15->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==16){
      hxsec_mu_16->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==17){
      hxsec_mu_17->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==21){
      hxsec_mu_21->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==22){
      hxsec_mu_22->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==23){
      hxsec_mu_23->Fill(Enu_true_mu,1/w);
    }
    if(Mode_mu==26){
      hxsec_mu_26->Fill(Enu_true_mu,1/w);
    }
    if((11<=Mode_mu)&&(Mode_mu<=17)){
      hxsec_mu_RES->Fill(Enu_true_mu,1/w);
    }
    if((Mode_mu==21)||(Mode_mu==22)||(Mode_mu==23)||(Mode_mu==26)){
      hxsec_mu_DIS->Fill(Enu_true_mu,1/w);
    }
  }


  /*
  TCanvas *cxsec_res = new TCanvas("histogramme xsec RES");
  TLegend *leg_res = new TLegend(0.15,0.5,0.4,0.9);

  gStyle->SetStatX(0);

  hxsec_mu_RES->Draw();
  hxsec_mu_RES->SetLineColor(1);
  hxsec_mu_RES->SetLineStyle(kDashed);
  hxsec_mu_RES->SetLineWidth(3);
  hxsec_mu_RES->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  hxsec_mu_RES->SetTitle(" ; E_{#nu} (GeV); #sigma(E) (cm^{2}/nucleon) 10^{-38}");
  
  hxsec_mu_11->Draw("SAME");
  hxsec_mu_11->SetLineColor(4);
  hxsec_mu_11->SetLineWidth(2);
  hxsec_mu_11->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  
  hxsec_mu_12->Draw("SAME");
  hxsec_mu_12->SetLineColor(7);
  hxsec_mu_12->SetLineWidth(2);
  hxsec_mu_12->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_13->Draw("SAME");
  hxsec_mu_13->SetLineColor(9);
  hxsec_mu_13->SetLineWidth(2);
  hxsec_mu_13->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_15->Draw("SAME");
  hxsec_mu_15->SetLineColor(34);
  hxsec_mu_15->SetLineWidth(2);
  hxsec_mu_15->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_16->Draw("SAME");
  hxsec_mu_16->SetLineColor(39);
  hxsec_mu_16->SetLineWidth(2);
  hxsec_mu_16->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_17->Draw("SAME");
  hxsec_mu_17->SetLineColor(49);
  hxsec_mu_17->SetLineWidth(2);
  hxsec_mu_17->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  cxsec_res->SetGrid(1,1);
  leg_res->AddEntry("hxsec_mu_RES", "All RES");
  leg_res->AddEntry("hxsec_mu_11", "1 #pi ^{+} 1p");
  leg_res->AddEntry("hxsec_mu_12", "1 #pi ^{0} 1p");
  leg_res->AddEntry("hxsec_mu_13", "1 #pi ^{+} 1n");
  leg_res->AddEntry("hxsec_mu_15", "1 #pi ^{+} 1p (diffractive)");
  leg_res->AddEntry("hxsec_mu_16", "^{A}X 1#pi^{+} (coherent)");
  leg_res->AddEntry("hxsec_mu_17", "#gamma");
  leg_res->Draw();

  cxsec_res->SaveAs(outfilenew_xsec.c_str());

  
  TCanvas *cxsec_dis = new TCanvas("histogramme xsec DIS");
  TLegend *leg_dis = new TLegend(0.15,0.5,0.4,0.9);

  gStyle->SetStatX(0);

  hxsec_mu_DIS->Draw();
  hxsec_mu_DIS->SetLineColor(1);
  hxsec_mu_DIS->SetLineStyle(kDashed);
  hxsec_mu_DIS->SetLineWidth(3);
  hxsec_mu_DIS->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  hxsec_mu_DIS->SetTitle(" ; E_{#nu} (GeV);#sigma(E) (cm^{2}/nucleon) 10^{-38}");
  
  hxsec_mu_21->Draw("SAME");
  hxsec_mu_21->SetLineColor(3);
  hxsec_mu_21->SetLineWidth(2);
  hxsec_mu_21->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_22->Draw("SAME");
  hxsec_mu_22->SetLineColor(8);
  hxsec_mu_22->SetLineWidth(2);
  hxsec_mu_22->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_23->Draw("SAME");
  hxsec_mu_23->SetLineColor(29);
  hxsec_mu_23->SetLineWidth(2);
  hxsec_mu_23->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_26->Draw("SAME");
  hxsec_mu_26->SetLineColor(35);
  hxsec_mu_26->SetLineWidth(2);
  hxsec_mu_26->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  cxsec_dis->SetGrid(1,1);
  leg_dis->AddEntry("hxsec_mu_DIS", "All DIS");
  leg_dis->AddEntry("hxsec_mu_21", "multi #pi");
  leg_dis->AddEntry("hxsec_mu_22", "#eta^{0} 1p");
  leg_dis->AddEntry("hxsec_mu_23", "1K^{+} 1#Lambda");
  leg_dis->AddEntry("hxsec_mu_26", "DIS");
  leg_dis->Draw();

  cxsec_dis->SaveAs(outfilenew_xsec.c_str());
  */
  

  TCanvas *cxsec = new TCanvas("histogramme xsec");
  TLegend *leg = new TLegend(0.1,0.6,0.3,0.9);

  gStyle->SetStatX(0);

  hxsec_mu_30->Draw();
  hxsec_mu_30->SetLineColor(1);
  hxsec_mu_30->SetLineStyle(kDashed);
  hxsec_mu_30->SetLineWidth(3);
  hxsec_mu_30->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  hxsec_mu_30->SetTitle(" ; E_{#nu} (GeV); #sigma(E) (cm^{2}/nucleon) 10^{-38}");
  
  hxsec_mu_1->Draw("SAME");
  hxsec_mu_1->SetLineColor(2);
  hxsec_mu_1->SetLineWidth(2);
  hxsec_mu_1->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  
  hxsec_mu_2->Draw("SAME");
  hxsec_mu_2->SetLineColor(6);
  hxsec_mu_2->SetLineWidth(2);
  hxsec_mu_2->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_RES->Draw("SAME");
  hxsec_mu_RES->SetLineColor(4);
  hxsec_mu_RES->SetLineWidth(2);
  hxsec_mu_RES->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  hxsec_mu_DIS->Draw("SAME");
  hxsec_mu_DIS->SetLineColor(3);
  hxsec_mu_DIS->SetLineWidth(2);
  hxsec_mu_DIS->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");

  fluxT2K->Scale(1.6*pow(10.0,-11.0)/17);
  fluxT2K->SetFillStyle(3001);
  fluxT2K->SetFillColor(11);
  fluxT2K->SetLineColor(11);
  fluxT2K->Draw("hist, SAME");

  cxsec->SetGrid(1,1);
  leg->AddEntry("hxsec_mu_30", "Total");
  leg->AddEntry("hxsec_mu_1", "CCQE");
  leg->AddEntry("hxsec_mu_2", "2p2h");
  leg->AddEntry("hxsec_mu_RES", "RES");
  leg->AddEntry("hxsec_mu_DIS", "DIS");
  leg->AddEntry("fluxT2K", "T2K Flux");
  leg->Draw();
  
  cxsec->SaveAs(outfilenew_xsec.c_str());
  

  

}





//Plot the histogram of the "var" variable with all CC modes and the 4 modes studied superposed
void AgatheAnalysis::plotnewTH1D_flat (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
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
  
  
  TFile * infile1D_flat = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_flat = new TCanvas(Form("histogramme %s flat", var.c_str()));
  TLegend *leg1D = new TLegend(0.4,0.5,0.6,0.7);

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
  for (int mod : {30, 1, 26, 11, 2}) {

    std::cout << mod << std::endl;
      
    TH1D* hist = (TH1D*)(infile1D_flat->Get(Form("h%s_%d", var.c_str(), mod)));

    for (int i = 1; i <= hist->GetNbinsX(); ++i) {
        double binContent = hist->GetBinContent(i);
        double binCenter = hist->GetBinCenter(i);
        double weightedContent = binContent / binCenter;
        hist->SetBinContent(i, weightedContent);
    }

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



//Plot the histogram of the "var" variable with all CC modes and the 4 modes studied superimposed for nue (solid lines) and numu (dashed lines)
void AgatheAnalysis::plotnewTH1D_superposes (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");

  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN");
    
  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s flat", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.9,0.3,0.7,0.9);
  std::string outfilenew_sup = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_sup.pdf";

  /*
  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));
  */
  
  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));

    for (int j=0; j<newbin;j++){
      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);
    }

    c1D_sup->cd();

    if (mod==30){
      //hist_e->Divide(flux);
      hist_e->Draw("same,hist,E1");
      hist_e->SetLineColor(color);
      hist_e->SetLineWidth(2);
      hist_e->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_e->Scale(scalefactor_e, "width");

      //gStyle->SetEndErrorSize(3);
      //gStyle->SetErrorX(1.);

      //hist_mu->Divide(flux);
      hist_mu->Draw("same,hist,E1");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetLineWidth(2);
      hist_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hist_mu->Scale(scalefactor_mu, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      //hist_e->Divide(flux);
      hist_e->Draw("same,hist,E1");
      hist_e->SetLineColor(color);
      hist_e->SetMarkerSize(0);
      hist_e->SetLineWidth(2);
      hist_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hist_e->SetMinimum(0.0);
      //hist_e->Scale(scalefactor_e, "width");

      //hist_mu->Divide(flux);
      hist_mu->Draw("same,hist,E1");
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
  leg1D_sup->AddEntry(Form("h%s_O_mu_30",var.c_str()), "#nu_{#mu} Total sur O");
  leg1D_sup->AddEntry(Form("h%s_O_e_30",var.c_str()), "#nu_{e} Total sur O");
  */
  leg1D_sup->Draw();

  c1D_sup->SaveAs(outfilenew_sup.c_str());

}


//Plot the histogram of the "var" variable (must be with anti-neutrino) with QE mode separated by O interaction or H interaction, superimposed for nue (solid lines) and numu (dashed lines)
void AgatheAnalysis::plotnewTH1D_superposes_QE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_sup = new TCanvas(Form("histogramme %s sup QE", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.9,0.5,0.65,0.9);  //(0.1,0.55,0.35,0.9)

  std::string outfilenew_H2O = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_H2O.pdf";

  TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_1", var.c_str())));

  TH1D* hist_H_ebar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_H_e_1", var.c_str())));
  TH1D* hist_H_mubar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_H_mu_1", var.c_str())));

  TH1D* hist_O_ebar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_O_e_1", var.c_str())));
  TH1D* hist_O_mubar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_O_mu_1", var.c_str())));
      
  TH1D* hist_ebar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_e_1", var.c_str())));
  TH1D* hist_mubar = (TH1D*)(infile1D_sup->Get(Form("h%sbar_mu_1", var.c_str())));

  gStyle->SetStatX(0);
  //gPad->SetLogy();

  hist_e->SetLineColor(2);
  hist_e->SetMarkerSize(0);
  hist_e->SetLineWidth(2);
  hist_e->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist_e->Scale(scalefactor_e*10*pow(10.0,38.0)/30, "width");
  //hist_e->SetMinimum(0);
  //hist_e->GetXaxis()->SetRangeUser(0.5,1);
  //hist_e->GetYaxis()->SetRangeUser(0,0.5);
  hist_e->Draw("hist,E1");
      
  hist_mu->SetLineColor(2);
  hist_mu->SetLineStyle(kDashed);
  hist_mu->SetMarkerSize(0);
  hist_mu->SetLineWidth(2);
  hist_mu->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
  //hist_mu->GetXaxis()->SetRangeUser(0,0.3);
  //hist_mu->SetMaximum(0.2);
  hist_mu->Draw("same,hist,E1");

  hist_ebar->SetLineColor(1);
  hist_ebar->SetMarkerSize(0);
  hist_ebar->SetLineWidth(2);
  hist_ebar->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist_ebar->Scale(scalefactor_ebar*10*pow(10.0,38.0)/30, "width");
  //hist_ebar->SetMinimum(0);
  //hist_ebar->GetXaxis()->SetRangeUser(0.5,1);
  //hist_ebar->GetYaxis()->SetRangeUser(0,0.5);
  hist_ebar->Draw("hist,E1");
      
  hist_mubar->SetLineColor(1);
  hist_mubar->SetLineStyle(kDashed);
  hist_mubar->SetMarkerSize(0);
  hist_mubar->SetLineWidth(2);
  hist_mubar->Scale(scalefactor_mubar*10*pow(10.0,38.0)/30, "width");
  //hist_mubar->GetXaxis()->SetRangeUser(0,0.3);
  //hist_mubar->SetMaximum(0.2);
  hist_mubar->Draw("same,hist,E1");
  
  hist_H_ebar->SetLineColor(7);
  hist_H_ebar->SetLineWidth(2);
  hist_H_ebar->Scale(scalefactor_ebar*10*pow(10.0,38.0)/30, "width");
  //hist_H_ebar->GetXaxis()->SetRangeUser(0,0.8);
  //hist_H_ebar->SetMaximum(0.2);
  hist_H_ebar->Draw("same,hist,E1");

  hist_H_mubar->SetLineColor(7);
  hist_H_mubar->SetLineStyle(kDashed);
  hist_H_mubar->SetLineWidth(2);
  hist_H_mubar->Scale(scalefactor_mubar*10*pow(10.0,38.0)/30, "width");
  //hist_H_mubar->GetXaxis()->SetRangeUser(0,0.8);
  //hist_H_mubar->SetMaximum(0.2);
  hist_H_mubar->Draw("same,hist,E1");

  hist_O_ebar->SetLineColor(28);
  hist_O_ebar->SetLineWidth(2);
  hist_O_ebar->Scale(scalefactor_ebar*10*pow(10.0,38.0)/30, "width");
  //hist_O_ebar->GetXaxis()->SetRangeUser(0,0.8);
  //hist_O_ebar->SetMaximum(0.2);
  hist_O_ebar->Draw("same,hist,E1");

  hist_O_mubar->SetLineColor(28);
  hist_O_mubar->SetLineStyle(kDashed);
  hist_O_mubar->SetLineWidth(2);
  hist_O_mubar->Scale(scalefactor_mubar*10*pow(10.0,38.0)/30, "width");
  //hist_O_mubar->GetXaxis()->SetRangeUser(0,0.8);
  //hist_O_mubar->SetMaximum(0.2);
  hist_O_mubar->Draw("same,hist,E1");
  
  
  c1D_sup->SetGrid(1,1);
  leg1D_sup->AddEntry(hist_e, "#nu_{e} QE");
  leg1D_sup->AddEntry(hist_mu, "#nu_{#mu} QE");
  leg1D_sup->AddEntry(hist_ebar, "#bar{#nu}_{e} QE");
  leg1D_sup->AddEntry(hist_mubar, "#bar{#nu}_{#mu} QE");
 
  leg1D_sup->AddEntry(hist_H_mubar, "#bar{#nu}_{#mu} QE sur H");
  leg1D_sup->AddEntry(hist_H_ebar, "#bar{#nu}_{e} QE sur H");
  leg1D_sup->AddEntry(hist_O_mubar, "#bar{#nu}_{#mu} QE sur O");
  leg1D_sup->AddEntry(hist_O_ebar, "#bar{#nu}_{e} QE sur O");
  
  leg1D_sup->Draw();

  c1D_sup->SaveAs(outfilenew_H2O.c_str()); 


}


//Plot the histogram of the "var" variable with all CC modes and the 4 studied modes superimposed for nue (solid lines) and numu (dashed lines) with the correct normalisation
// CORRIGER LA NORMALISATION POUR QUELLE CORRESPONDE À CE QU'ON FAIT AV NORMALISE
void AgatheAnalysis::plotnewTH1D_xsec (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  std::vector<int> mods = {30, 1, 26, 11, 2};
  std::map<int, TH1D*> hExsec_e_;
  std::map<int, TH1D*> hExsec_mu_;
  
  hExsec_e_[30] = new TH1D("hExsec_e_30","histogramme Enu total xsec nue",newbin,0,2);
  hExsec_e_[1] = new TH1D("hExsec_e_1","histogramme Enu CCQE xsec nue ",newbin,0,2);
  hExsec_e_[2] = new TH1D("hExsec_e_2","histogramme Enu 2p2h xsec nue",newbin,0,2);
  hExsec_e_[11] = new TH1D("hExsec_e_11","histogramme Enu RES xsec nue",newbin,0,2);
  hExsec_e_[26] = new TH1D("hExsec_e_26","histogramme Enu DIS xsec nue",newbin,0,2);

  hExsec_mu_[30] = new TH1D("hExsec_mu_30","histogramme Enu total xsec numu",newbin,0,2);
  hExsec_mu_[1] = new TH1D("hExsec_mu_1","histogramme Enu CCQE xsec numu",newbin,0,2);
  hExsec_mu_[2] = new TH1D("hExsec_mu_2","histogramme Enu 2p2h xsec numu",newbin,0,2);
  hExsec_mu_[11] = new TH1D("hExsec_mu_11","histogramme Enu RES xsec numu",newbin,0,2);
  hExsec_mu_[26] = new TH1D("hExsec_mu_26","histogramme Enu DIS xsec numu",newbin,0,2);
  
  
  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");

  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");
    
    double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
    double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
    double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
    double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");  
 
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsec = new TCanvas(Form("histogramme %s cross section", var.c_str()));

  TLegend *leg1D_xsec = new TLegend(0.4,0.5,0.6,0.7);

  std::string outfilenew_xsec = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_xsec.pdf";
  /*
  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));

  TH1D *hExsec_O_e = new TH1D("hExsec_e_O","histogramme Enu O xsec nue",95,0.1,2);
  TH1D *hExsec_H_e = new TH1D("hEnu_hExsec_e_H","histogramme Enu H xsec nue",95,0.1,2);
  TH1D *hExsec_O_mu = new TH1D("hExsec_mu_O","histogramme Enu O xsec numu",95,0.1,2);
  TH1D *hExsec_H_mu = new TH1D("hEnu_hExsec_mu_H","histogramme Enu H xsec numu",95,0.1,2);
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
   
    for (int j=1; j<=95; ++j){

      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);
      //double fluxContent = flux->GetBinContent(j);
      /*
      double he_O_Content = hist_O_e->GetBinContent(j);
      double hmu_O_Content = hist_O_mu->GetBinContent(j);
      double he_H_Content = hist_H_e->GetBinContent(j);
      double hmu_H_Content = hist_H_mu->GetBinContent(j);
      */
      sigma_e = heContent*scalefactor_ebar*10*pow(10.0,38.0); 
      sigma_mu = hmuContent*scalefactor_mubar*10*pow(10.0,38.0);
      /*
      sigma_O_e = he_O_Content*scalefactor_ebar*10*pow(10.0,38.0);  
      sigma_O_mu= hmu_O_Content*scalefactor_mubar*10*pow(10.0,38.0);
      sigma_H_e = he_H_Content*scalefactor_ebar*10*pow(10.0,38.0);  /
      sigma_H_mu = hmu_H_Content*scalefactor_mubar*10*pow(10.0,38.0);
      */
      hExsec_e->SetBinContent(j, sigma_e);
      hExsec_mu->SetBinContent(j, sigma_mu);
      /*
      hExsec_O_e->SetBinContent(j, sigma_O_e/fluxContent);
      hExsec_O_mu->SetBinContent(j, sigma_O_mu/fluxContent);
      hExsec_H_e->SetBinContent(j, sigma_H_e/fluxContent);
      hExsec_H_mu->SetBinContent(j, sigma_H_mu/fluxContent);
      */
    }

    std::cout << "xsec nue = " << sigma_e << " xsec numu = " << sigma_mu << std::endl;


    if (mod==30){
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetLineWidth(3);
      hExsec_e->SetTitle(Form("histogramme %s cross section tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hExsec_e->Scale(scalefactor_e*10, "width");
      std::cout << "xsec std::max = " << hExsec_e->GetMaximum() << std::endl;
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetLineWidth(3);
      hExsec_mu->SetTitle(Form("histogramme %s cross section tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      //hExsec_mu->Scale(scalefactor_mu*10, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hExsec_e->Draw("same,hist");
      hExsec_e->SetLineColor(color);
      hExsec_e->SetMarkerSize(0);
      hExsec_e->SetLineWidth(2);
      hExsec_e->SetTitle(Form("histogramme %s cross section mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hExsec_e->Scale(scalefactor_e*10, "width");
      
      hExsec_mu->Draw("same,hist");
      hExsec_mu->SetLineColor(color);
      hExsec_mu->SetLineStyle(kDashed);
      hExsec_mu->SetMarkerSize(0);
      hExsec_mu->SetLineWidth(2);
      hExsec_mu->SetTitle(Form("histogramme %s cross section mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      //hExsec_mu->Scale(scalefactor_mu*10, "width");
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
  leg1D_xsec->AddEntry("hExsec_H_mu", "#nu_{#mu} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_H_e", "#nu_{e} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_O_mu", "#nu_{#mu} CCQE sur O");
  leg1D_xsec->AddEntry("hExsec_O_e", "#nu_{e} CCQE sur O");
  */
  leg1D_xsec->Draw();

  c1D_xsec->SaveAs(outfilenew_xsec.c_str()); 


}




void AgatheAnalysis::plotnewTH1D_xsec_overE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  std::vector<int> mods = {30, 1, 26, 11, 2};  
  std::map<int, TH1D*> hxsecE_e_;
  std::map<int, TH1D*> hxsecE_mu_;
  
  hxsecE_e_[30] = new TH1D("hxsecE_e_30","histogramme xsec over E total nue",newbin,0,2);
  hxsecE_e_[1] = new TH1D("hxsecE_e_1","histogramme xsec over E CCQE nue ",newbin,0,2);
  hxsecE_e_[2] = new TH1D("hxsecE_e_2","histogramme xsec over E 2p2h nue",newbin,0,2);
  hxsecE_e_[11] = new TH1D("hxsecE_e_11","histogramme xsec overE RES nue",newbin,0,2);
  hxsecE_e_[26] = new TH1D("hxsecE_e_26","histogramme xsec over E DIS nue",newbin,0,2);

  hxsecE_mu_[30] = new TH1D("hxsecE_mu_30","histogramme xsec over E total numu",newbin,0,2);
  hxsecE_mu_[1] = new TH1D("hxsecE_mu_1","histogramme xsec over E CCQE numu",newbin,0,2);
  hxsecE_mu_[2] = new TH1D("hxsecE_mu_2","histogramme xsec over E 2p2h numu",newbin,0,2);
  hxsecE_mu_[11] = new TH1D("hxsecE_mu_11","histogramme xsec over E RES numu",newbin,0,2);
  hxsecE_mu_[26] = new TH1D("hxsecE_mu_26","histogramme xsec over E DIS numu",newbin,0,2);
  
  
  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
 

  //TFile * infile_flux = new TFile("one_over_2GeV_flux_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile1D_test = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsec_ovE_test = new TCanvas(Form("histogramme %s cross section over E test", var.c_str()));

  TLegend *leg1D_xsec = new TLegend(0.9,0.43,0.76,0.75);
  std::string outfilenew_xsecE = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_xsecE.pdf";

  
  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
  for (int mod : mods) {
      
    TH1D* hist_e = (TH1D*)(infile1D_test->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_test->Get(Form("h%s_mu_%d", var.c_str(), mod)));
    //TH1D* flux = (TH1D*)(infile_flux->Get("outputFlux"));

    TH1D* hxsecE_e = hxsecE_e_[mod];
    TH1D* hxsecE_mu = hxsecE_mu_[mod];
    
  
    double sigma_e = 0;
    double sigma_mu = 0;
    double sigma_O_e = 0;
    double sigma_O_mu = 0;
    double sigma_H_e = 0;
    double sigma_H_mu = 0;
   
    for (int j=1; j<=newbin; ++j){

      double heContent = hist_e->GetBinContent(j);
      double hmuContent = hist_mu->GetBinContent(j);
      //double fluxContent = flux->GetBinContent(j);

      double heCenter = hist_e->GetBinCenter(j);
      double hmuCenter = hist_mu->GetBinCenter(j);
    
      hxsecE_e->SetBinContent(j, (heContent/heCenter));
      hxsecE_mu->SetBinContent(j, (hmuContent/hmuCenter));
   
    }


    if (mod==30){
      hxsecE_e->SetLineColor(color);
      hxsecE_e->SetLineWidth(3);
      hxsecE_e->SetTitle(Form("histogramme %s cross section over E tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hxsecE_e->Scale(scalefactor_e*10*pow(10.0,38.0)/30, "width");
      hxsecE_e->SetMinimum(0.0);
      hxsecE_e->GetXaxis()->SetRangeUser(0.1,2.0);
      //hxsecE_e->SetMaximum(0.1);
      hxsecE_e->Draw("hist");

      std::cout << "xsec std::max = " << hxsecE_e->GetMaximum() << std::endl;
      
      hxsecE_mu->SetLineColor(color);
      hxsecE_mu->SetLineStyle(kDashed);
      hxsecE_mu->SetLineWidth(3);
      hxsecE_mu->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hxsecE_mu->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
      hxsecE_mu->SetMinimum(0.0);
      hxsecE_mu->GetXaxis()->SetRangeUser(0.1,2.0);
      //hxsecE_mu->SetMaximum(0.1);
      hxsecE_mu->Draw("same,hist");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hxsecE_e->SetLineColor(color);
      hxsecE_e->SetMarkerSize(0);
      hxsecE_e->SetLineWidth(2);
      hxsecE_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hxsecE_e->Scale(scalefactor_e*10*pow(10.0,38.0)/30, "width");
      hxsecE_e->SetMinimum(0.0);
      hxsecE_e->GetXaxis()->SetRangeUser(0.1,2.0);
      //hxsecE_e->SetMaximum(0.1);
      hxsecE_e->Draw("same,hist");

      gStyle->SetStatX(0);
      
      hxsecE_mu->SetLineColor(color);
      hxsecE_mu->SetLineStyle(kDashed);
      hxsecE_mu->SetMarkerSize(0);
      hxsecE_mu->SetLineWidth(2);
      hxsecE_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hxsecE_mu->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
      hxsecE_mu->SetMinimum(0.0);
      hxsecE_mu->GetXaxis()->SetRangeUser(0.1,2.0);
      //hxsecE_mu->SetMaximum(0.1);
      hxsecE_mu->Draw("same,hist");
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
  c1D_xsec_ovE_test->SaveAs(outfilenew_xsecE.c_str());  

}




void AgatheAnalysis::plotnewTH1D_xsec_QE (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 2;

  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_xsecQE = new TCanvas(Form("histogramme %s cross section QE", var.c_str()));

  TLegend *leg1D_xsec = new TLegend(0.4,0.5,0.6,0.7);

  TH1D* hist_H_e = (TH1D*)(infile1D_sup->Get(Form("h%s_H_e_30", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_H_mu_30", var.c_str())));

  TH1D* hist_O_e = (TH1D*)(infile1D_sup->Get(Form("h%s_O_e_30", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_O_mu_30", var.c_str())));

  TH1D *hExsec_O_e = new TH1D("hExsec_e_O","histogramme Enu O xsec nue",20,0,2);
  TH1D *hExsec_H_e = new TH1D("hEnu_hExsec_e_H","histogramme Enu H xsec nue",20,0,2);
  TH1D *hExsec_O_mu = new TH1D("hExsec_mu_O","histogramme Enu O xsec numu",20,0,2);
  TH1D *hExsec_H_mu = new TH1D("hEnu_hExsec_mu_H","histogramme Enu H xsec numu",20,0,2);

  TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_1", var.c_str())));

  TH1D *hExsec_e = new TH1D("hEnu_hExsec_e","histogramme Enu QE xsec nue",20,0,2);
  TH1D *hExsec_mu = new TH1D("hExsec_mu","histogramme Enu QE xsec numu",20,0,2);
  
  double sigma_e = 0;
  double sigma_mu = 0;
  double sigma_O_e = 0;
  double sigma_O_mu = 0;
  double sigma_H_e = 0;
  double sigma_H_mu = 0;
   
  for (int j=1; j<=20; ++j){

    double heContent = hist_e->GetBinContent(j);
    double hmuContent = hist_mu->GetBinContent(j);
    double he_O_Content = hist_O_e->GetBinContent(j);
    double hmu_O_Content = hist_O_mu->GetBinContent(j);
    double he_H_Content = hist_H_e->GetBinContent(j);
    double hmu_H_Content = hist_H_mu->GetBinContent(j);
    
    sigma_e += heContent*scalefactor_ebar*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
    sigma_mu += hmuContent*scalefactor_mubar*10*0.1*pow(10.0,38.0);
    sigma_O_e += he_O_Content*scalefactor_ebar*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
    sigma_O_mu += hmu_O_Content*scalefactor_mubar*10*0.1*pow(10.0,38.0);
    sigma_H_e += he_H_Content*scalefactor_ebar*10*0.1*pow(10.0,38.0);  //dsigma/dEj * Delta_Ej * 10^(38)
    sigma_H_mu += hmu_H_Content*scalefactor_mubar*10*0.1*pow(10.0,38.0);
    
    hExsec_e->SetBinContent(j, sigma_e);
    hExsec_mu->SetBinContent(j, sigma_mu);
    hExsec_O_e->SetBinContent(j, sigma_O_e);
    hExsec_O_mu->SetBinContent(j, sigma_O_mu);
    hExsec_H_e->SetBinContent(j, sigma_H_e);
    hExsec_H_mu->SetBinContent(j, sigma_H_mu);
  }

  std::cout << "xsec nue = " << sigma_e << " xsec numu = " << sigma_mu << std::endl;
      
  hExsec_e->Draw("same,hist");
  hExsec_e->SetLineColor(color);
  hExsec_e->SetMarkerSize(0);
  hExsec_e->SetLineWidth(2);
  hExsec_e->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_e->SetMinimum(0.0);
  //hist_e->Scale(scalefactor_ebar, "width");
  
  hExsec_mu->Draw("same,hist");
  hExsec_mu->SetLineColor(color);
  hExsec_mu->SetLineStyle(kDashed);
  hExsec_mu->SetMarkerSize(0);
  hExsec_mu->SetLineWidth(2);
  hExsec_mu->SetTitle(Form("histogramme %s mode QE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  //hist_mu->Scale(scalefactor_mubar, "width");
 

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
  
  c1D_xsecQE->SetGrid(1,1);
  leg1D_xsec->AddEntry("hExsec_e", "#nu_{e} CCQE");
 
  leg1D_xsec->AddEntry("hExsec_mu", "#nu_{#mu} CCQE");

  leg1D_xsec->AddEntry("hExsec_H_mu", "#nu_{#mu} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_H_e", "#nu_{e} CCQE sur H");
  leg1D_xsec->AddEntry("hExsec_O_mu", "#nu_{#mu} CCQE sur O");
  leg1D_xsec->AddEntry("hExsec_O_e", "#nu_{e} CCQE sur O");

  leg1D_xsec->Draw();


}


void AgatheAnalysis::plotnewTH1D_normalise (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  
  TFile * infile1D_sup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
  TCanvas *c1D_norm = new TCanvas(Form("histogramme %s normalise", var.c_str()));
  TLegend *leg1D_sup = new TLegend(0.15,0.4,0.35,0.9);

  std::string outfilenew_norm = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_norm.pdf";
  TFile * outfile_factor = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo_Enu.root", "RECREATE");

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
  for (int mod : {30, 1, 26, 11, 2}) { //{30, 1, 26, 11, 2}
      
    TH1D* hist_e = (TH1D*)(infile1D_sup->Get(Form("h%s_e_%d", var.c_str(), mod)));
    TH1D* hist_mu = (TH1D*)(infile1D_sup->Get(Form("h%s_mu_%d", var.c_str(), mod)));

    if (mod==30){
      hist_e->Draw("same,hist,E");
      hist_e->SetLineColor(color);
      hist_e->SetLineWidth(3);
      hist_e->SetTitle(Form(" ; %s; %s", xaxis.c_str(), yaxis.c_str())); //histogramme %s tous modes
      hist_e->Scale(scalefactor_e*10*pow(10.0,38.0)/30, "width");
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetLineWidth(3);
      hist_mu->SetTitle(Form(" ; %s; %s", xaxis.c_str(), yaxis.c_str())); //histogramme %s tous modes
      hist_mu->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hist_e->SetLineColor(color);
      hist_e->SetMarkerSize(0);
      hist_e->SetLineWidth(2);
      //hist_e->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hist_e->Scale(scalefactor_e*10*pow(10.0,38.0)/30, "width");
      //hist_e->GetXaxis()->SetRangeUser(0,0.4);
      //hist_e->SetMinimum(0.0);
      hist_e->Draw("same,hist,E");

      gStyle->SetStatX(0); 
      
      hist_mu->Draw("same,hist,E");
      hist_mu->SetLineColor(color);
      hist_mu->SetLineStyle(kDashed);
      hist_mu->SetMarkerSize(0);
      hist_mu->SetLineWidth(2);
      //hist_mu->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hist_mu->Scale(scalefactor_mu*10*pow(10.0,38.0)/30, "width");
    }

    color++;
    hist_e->Write();
    hist_mu->Write();
    
  }

  outfile_factor->Close();

  c1D_norm->SetGrid(1,1);
  
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

  leg1D_sup->Draw();

  c1D_norm->SaveAs(outfilenew_norm.c_str());

}



//Trace un histogramme 1D du rapport nu(bar)_e sur nu(bar)_mu la variable var avec les 4 modes étudiés sur un canvas et le total sur un autre canvas
void AgatheAnalysis::plotnewTH1D_divide(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 0;
  
 TFile * infile1D_div = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
 TCanvas *c1Dnew_div = new TCanvas(Form("histogramme %s_e sur %s_mu", var.c_str(), var.c_str()));
 c1Dnew_div->Divide(2,2,0.01,0.01);

 std::string outfilenew_divide = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_divide.pdf";
 std::string outfilenew_divide_tot = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_divide_tot.pdf";

 std::vector<int> mods = {30, 1, 26, 11, 2};
 std::map<int, TH1D*> hdivMap;

 float xmin = 0.0;
 float xmax = 2.0;
 if ((var == "cos")||(var == "cosbar")){
   xmin = -1;
   xmax = 1;
 }

 TLine *L1 = new TLine(xmin,1,xmax,1);

 hdivMap[30] = new TH1D("hdiv_30", "histogramme du ratio nue numu tot", newbin,xmin, xmax);
 hdivMap[1] = new TH1D("hdiv_1", "histogramme du ratio nue numu ccqe", newbin,xmin, xmax);
 hdivMap[2] = new TH1D("hdiv_2", "histogramme du ratio nue numu 2p2h", newbin,xmin, xmax);
 hdivMap[11] = new TH1D("hdiv_11", "histogramme du ratio nue numu res", newbin,xmin, xmax);
 hdivMap[26] = new TH1D("hdiv_26", "histogramme du ratio nue numu dis", newbin,xmin, xmax);

 // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
 for (int mod : mods) {
   
   TH1D* hist_e = (TH1D*)(infile1D_div->Get(Form("h%s_e_%d", var.c_str(), mod)));
   TH1D* hist_mu = (TH1D*)(infile1D_div->Get(Form("h%s_mu_%d", var.c_str(), mod)));
   TH1D* hdiv = hdivMap[mod];

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=newbin; ++bin) {
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
      TCanvas *c1Dnew_tot = new TCanvas(Form("histogramme %s divide total", var.c_str()));

      hdiv->Draw("same,hist,E1");
      hdiv->SetLineColor(color);
      hdiv->SetLineWidth(2);
      hdiv->SetMinimum(0.6);
      hdiv->SetMaximum(1.4);
      hdiv->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
      c1Dnew_tot->SetGrid(1,1);

      c1Dnew_tot->SaveAs(outfilenew_divide_tot.c_str());
    }

    
    else {
      if (color==5){
	color++;
	  }
      c1Dnew_div->cd(cpt);
      c1Dnew_div->cd(cpt)->SetGrid(1,1);
    
      hdiv->Draw("same,hist,E1");
      hdiv->SetLineColor(color);
      hdiv->SetLineWidth(2);
      hdiv->SetMinimum(0.6);
      hdiv->SetMaximum(1.4);
      hdiv->SetTitle(Form("histogramme ratio %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
    
    }
    cpt++;
    color++;
  }

  c1Dnew_div->SetGrid(1,1);
  c1Dnew_div->SaveAs(outfilenew_divide.c_str());
  
}



void AgatheAnalysis::plotnewTH1D_divide_H2O(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 0;

 TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");

 float xmin = 0.0;
 float xmax = 2.0;
 if ((var == "cos")||(var == "cosbar")){
   xmin = -1;
   xmax = 1;
 }
  
 TFile * infile1D_div = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 

  TH1D* hist_e = (TH1D*)(infile1D_div->Get(Form("h%s_e_1", var.c_str())));
  TH1D* hist_mu = (TH1D*)(infile1D_div->Get(Form("h%s_mu_1", var.c_str())));

  TH1D* hist_H_e = (TH1D*)(infile1D_div->Get(Form("h%sbar_H_e_1", var.c_str())));
  TH1D* hist_H_mu = (TH1D*)(infile1D_div->Get(Form("h%sbar_H_mu_1", var.c_str())));
  TH1D* hist_O_e = (TH1D*)(infile1D_div->Get(Form("h%sbar_O_e_1", var.c_str())));
  TH1D* hist_O_mu = (TH1D*)(infile1D_div->Get(Form("h%sbar_O_mu_1", var.c_str())));
  TH1D* hist_ebar = (TH1D*)(infile1D_div->Get(Form("h%sbar_e_1", var.c_str())));
  TH1D* hist_mubar = (TH1D*)(infile1D_div->Get(Form("h%sbar_mu_1", var.c_str())));

  TH1D* hdiv_H = new TH1D("hdiv_H", "histogramme du ratio nue numu QE sur H", newbin,xmin, xmax);
  TH1D* hdiv_O = new TH1D("hdiv_O", "histogramme du ratio nue numu QE sur O", newbin,xmin, xmax);
  TH1D* hdivbar = new TH1D("hdivbar", "histogramme du ratio nue numu QE", newbin,xmin, xmax);
  TH1D* hdiv = new TH1D("hdiv", "histogramme du ratio nue numu QE", newbin,xmin, xmax);

  TH1D* hdiv_var1 = new TH1D("hdiv_var1", "histogramme du ratio nue numu QE binvar1", 11,-1, -0.12);
  TH1D* hdiv_var1_H = new TH1D("hdiv_var1_H", "histogramme du ratio nue numu QE binvar1 sur H", 11,-1, -0.12);
  TH1D* hdiv_var1_O = new TH1D("hdiv_var1_O", "histogramme du ratio nue numu QE binvar1 sur O", 11,-1, -0.12);
  TH1D* hdiv_var2 = new TH1D("hdiv_var2", "histogramme du ratio nue numu QE binvar2", 55,-0.2, 1);

 TCanvas *c1Dnew_div = new TCanvas(Form("histogramme %s_e sur %s_mu", var.c_str(), var.c_str()));
 c1Dnew_div->Divide(2,2,0.01,0.01);
 TLegend *leg1D_divsupQE = new TLegend(0.9,0.7,0.7,0.9);

 std::string outfilenew_divideH2O = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_divideH2O.pdf";

 TLine *L1 = new TLine(xmin,1,xmax,1);

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=newbin; ++bin) {
     //std::cout << bin << std::endl;
    double hdiv_H_Content = 0;
    double hdiv_H_Error_prop = 0;
    double hdiv_O_Content = 0;
    double hdiv_O_Error_prop = 0;
    double hdivContent = 0;
    double hdivError_prop = 0;
    double hdivbarContent = 0;
    double hdivbarError_prop = 0;

     double heContent = (hist_e->GetBinContent(bin))*scalefactor_e*10*pow(10.0, 38.0);
     double heError = (hist_e->GetBinError(bin))*scalefactor_e*10*pow(10.0, 38.0);
     double hmuContent = (hist_mu->GetBinContent(bin))*scalefactor_mu*10*pow(10.0, 38.0);
     double hmuError = (hist_mu->GetBinError(bin))*scalefactor_mu*10*pow(10.0, 38.0);

     double he_H_Content = (hist_H_e->GetBinContent(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double he_H_Error = (hist_H_e->GetBinError(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hmu_H_Content = (hist_H_mu->GetBinContent(bin))*scalefactor_mubar*10*pow(10.0, 38.0);
     double hmu_H_Error = (hist_H_mu->GetBinError(bin))*scalefactor_mubar*10*pow(10.0, 38.0); 

     double he_O_Content = (hist_O_e->GetBinContent(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double he_O_Error = (hist_O_e->GetBinError(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hmu_O_Content = (hist_O_mu->GetBinContent(bin))*scalefactor_mubar*10*pow(10.0, 38.0);
     double hmu_O_Error = (hist_O_mu->GetBinError(bin))*scalefactor_mubar*10*pow(10.0, 38.0); 

     double hebarContent = (hist_ebar->GetBinContent(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hebarError = (hist_ebar->GetBinError(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hmubarContent = (hist_mubar->GetBinContent(bin))*scalefactor_mubar*10*pow(10.0, 38.0);
     double hmubarError = (hist_mubar->GetBinError(bin))*scalefactor_mubar*10*pow(10.0, 38.0);

     if (hmuContent != 0){
       double hdivContent = heContent/hmuContent;
       double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );

       hdiv->SetBinContent(bin, hdivContent);
       hdiv->SetBinError(bin, hdivError_prop);
     }

     else {
       hdiv->SetBinContent(bin, -0.5);
       hdiv->SetBinError(bin, 0);
     }

    if (hmu_H_Content != 0){
       double hdiv_H_Content = he_H_Content/hmu_H_Content;
       double hdiv_H_Error_prop = sqrt( (he_H_Error/hmu_H_Content)*(he_H_Error/hmu_H_Content) + ((hmu_H_Error*he_H_Content)/(hmu_H_Content*hmu_H_Content))*((hmu_H_Error*he_H_Content)/(hmu_H_Content*hmu_H_Content)) );

       hdiv_H->SetBinContent(bin, hdiv_H_Content);
       hdiv_H->SetBinError(bin, hdiv_H_Error_prop);
     }

     else {
       hdiv_H->SetBinContent(bin, -0.5);
       hdiv_H->SetBinError(bin, 0);
     }

    if (hmu_O_Content != 0){
       double hdiv_O_Content = he_O_Content/hmu_O_Content;
       double hdiv_O_Error_prop = sqrt( (he_O_Error/hmu_O_Content)*(he_O_Error/hmu_O_Content) + ((hmu_O_Error*he_O_Content)/(hmu_O_Content*hmu_O_Content))*((hmu_O_Error*he_O_Content)/(hmu_O_Content*hmu_O_Content)) );

       hdiv_O->SetBinContent(bin, hdiv_O_Content);
       hdiv_O->SetBinError(bin, hdiv_O_Error_prop);
     }

     else {
       hdiv_O->SetBinContent(bin, -0.5);
       hdiv_O->SetBinError(bin, 0);
     }


     if (hmubarContent != 0){
       double hdivbarContent = hebarContent/hmubarContent;
       double hdivbarError_prop = sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );

       hdivbar->SetBinContent(bin, hdivbarContent);
       hdivbar->SetBinError(bin, hdivbarError_prop);
     }

     else {
       hdivbar->SetBinContent(bin, -0.5);
       hdivbar->SetBinError(bin, 0);
     }
  }

/*
  int j = 0;
  int bin_var = 1;

  double hdivContent_var = 0;
  double hdivError_prop_var = 0;
  for (int bin = 1; bin<= newbin; bin++){
    
    double hdivContent = hdiv->GetBinContent(bin);
    if (bin<=45){
      //std::cout << j << " " << bin_var << std::endl;
      hdivContent_var += hdivContent;
      j++;

      if (j==3) {
        hdiv_var->SetBinContent(bin_var, hdivContent_var);  
        bin_var++;
        hdivContent_var = 0;
        hdivError_prop_var = 0;
        j = 0;
      }
      //std::cout << j << std::endl;
      std::cout << j << " " << bin_var << std::endl;
      
    }
    else{
      if (j!=0){
        std::cout << "coucou" << std::endl;
      }
      //std::cout << bin << " " << bin_var << std::endl;
      hdiv_var->SetBinContent(bin_var, hdivContent); 
      bin_var++;
    }

    
  }
  
*/

/*
    double hdivContent_var = 0;
    double hdivError_prop_var = 0;
    double hdivContent_H_var = 0;
    double hdivError_prop_H_var = 0;
    double hdivContent_O_var = 0;
    double hdivError_prop_O_var = 0;
    int j = 0;
    int bin_var = 1;    

    // Handle the first 45 bins
    for (int bin = 1; bin <= 44; bin++) {
        double hdivContent = hdiv->GetBinContent(bin);
        double hdivError = hdiv->GetBinError(bin);
        double hdivContent_H = hdiv_H->GetBinContent(bin);
        double hdivError_H = hdiv_H->GetBinError(bin);
        double hdivContent_O = hdiv_O->GetBinContent(bin);
        double hdivError_O = hdiv_O->GetBinError(bin);

        hdivContent_var += hdivContent;
        hdivError_prop_var += hdivError;
        hdivContent_H_var += hdivContent_H;
        hdivError_prop_H_var += hdivError_H;
        hdivContent_O_var += hdivContent_O;
        hdivError_prop_O_var += hdivError_O;
        j++;

        if (j == 4) {
            hdiv_var1->SetBinContent(bin_var, hdivContent_var/4);
            hdiv_var1->SetBinError(bin_var, sqrt(hdivError_prop_var)/4);
            hdiv_var1_H->SetBinContent(bin_var, hdivContent_H_var/4);
            hdiv_var1_H->SetBinError(bin_var, sqrt(hdivError_prop_H_var)/4);
            hdiv_var1_O->SetBinContent(bin_var, hdivContent_O_var/4);
            hdiv_var1_O->SetBinError(bin_var, sqrt(hdivError_prop_O_var)/4);
            bin_var++;
            hdivContent_var = 0; 
            hdivError_prop_var = 0;  
            hdivContent_H_var = 0; 
            hdivError_prop_H_var = 0; 
            hdivContent_O_var = 0; 
            hdivError_prop_O_var = 0;  
            j = 0;
        }
    }

    int bin_var2 = 1;
    for (int bin = 46; bin <= 100; bin++) {
        double hdivContent = hdiv->GetBinContent(bin);
        double hdivError = hdiv->GetBinError(bin);
        hdiv_var2->SetBinContent(bin_var2, hdivContent);
        hdiv_var2->SetBinError(bin_var2, hdivError);
        bin_var2++;
    }

    */


  /*
  hdivbar->SetLineColorAlpha(2, 0.5);
  hdivbar->SetLineWidth(2);
  //hdivbar->GetYaxis()->SetRangeUser(0.9,1.3);
  //hdivbar->GetXaxis()->SetRangeUser(0,0.8);
  hdivbar->SetTitle(Form("histogramme  %s_nue/%s_numu QE; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hdivbar->SetLineStyle(kDashed);
  hdivbar->Draw("hist,E1");
  */

 gStyle->SetStatX(0);
 /*
  hdiv_var1->SetLineColor(2);
  hdiv_var1->SetLineWidth(2);
  hdiv_var1->GetYaxis()->SetRangeUser(0.95,1.35);
  //hdiv_var1->GetXaxis()->SetRangeUser(-1,1);
  hdiv_var1->SetTitle(Form("histogramme  %s_nue/%s_numu QE; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hdiv_var1->Draw("hist,E1");
  hdiv_var1_H->SetLineColor(7);
  hdiv_var1_H->SetLineWidth(2);
  hdiv_var1_H->Draw("same,hist,E1");
  hdiv_var1_O->SetLineColor(28);
  hdiv_var1_O->SetLineWidth(2);
  hdiv_var1_O->Draw("same,hist,E1");
  L1->SetLineStyle(kDashed);
  L1->SetLineColor(1);
  L1->SetLineWidth(3);
  L1->Draw();
  //hdiv_var2->Draw("same,hist");
  */
  
  
  
  hdiv->SetLineColor(2);
  hdiv->SetLineWidth(2);
  hdiv->GetXaxis()->SetRangeUser(0,0.8);
  hdiv->GetYaxis()->SetRangeUser(0.9,1.3);
  //hdiv->SetTitle(Form("histogramme  %s_nue/%s_numu QE; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hdiv->Draw("hist,E1");
  L1->SetLineStyle(kDashed);
  L1->SetLineColor(1);
  L1->SetLineWidth(3);
  L1->Draw();
  
  gStyle->SetStatX(0);

  hdiv_H->SetLineColor(7);
  hdiv_H->SetLineWidth(2);
  //hdiv_H->GetYaxis()->SetRangeUser(0.9,1.3);
  //hdiv_H->GetXaxis()->SetRangeUser(0,0.8);
  hdiv_H->SetLineStyle(kDashed);
  hdiv_H->Draw("same,hist,E1");

  hdiv_O->SetLineColor(28);
  hdiv_O->SetLineWidth(2);
  //hdiv_O->GetYaxis()->SetRangeUser(0.9,1.3);
  //hdiv_O->GetXaxis()->SetRangeUser(0,0.8);
  hdiv_O->SetLineStyle(kDashed);
  hdiv_O->Draw("same,hist,E1");

  leg1D_divsupQE->AddEntry(hdiv, "#nu_{e}/#nu_{#mu}");
  //leg1D_divsupQE->AddEntry(hdivbar, "#bar{#nu}_{e}/#bar{#nu}_{#mu}");
  leg1D_divsupQE->AddEntry(hdiv_H, "#bar{#nu}_{e}/#bar{#nu}_{#mu} sur H");
  leg1D_divsupQE->AddEntry(hdiv_O, "#bar{#nu}_{e}/#bar{#nu}_{#mu} sur O");
  leg1D_divsupQE->Draw();
  

  c1Dnew_div->SetGrid(1,1);

  c1Dnew_div->SaveAs(outfilenew_divideH2O.c_str());
  
}






//Trace un histogramme 1D du rapport nu_e sur nu_mu et nu_ebar sur nu_mubar la variable var avec les 4 modes étudiés sur un canvas et le total sur un autre canvas
void AgatheAnalysis::plotnewTH1D_divide_superposés(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 0;

 TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  
 TFile * infile1D_divsup = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
 TCanvas *c1Dnew_divsup = new TCanvas(Form("histogramme %s_e sur %s_mu nu et nubar", var.c_str(), var.c_str()));
 c1Dnew_divsup->Divide(2,2,0.01,0.01);

 std::string outfilenew_divide_sup = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_divide_sup.pdf";
 std::string outfilenew_divide_sup_tot = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_divide_sup_tot.pdf";

 TLegend *leg1D_divsuptot = new TLegend(0.9,0.7,0.7,0.9);

 std::vector<int> mods = {30, 1, 26, 11, 2};
 std::map<int, TH1D*> hdivsup;
 std::map<int, TH1D*> hdivsupbar;

 double xmin = 0.0;
 double xmax = 2;
 if (var == "cos"){
   xmin = -1;
   xmax = 1;
 }

 TLine *L1 = new TLine(xmin,1,xmax,1);

 hdivsup[30] = new TH1D("hdivsup_30", "histogramme du ratio nue numu tot sup", newbin,xmin, xmax);
 hdivsup[1] = new TH1D("hdivsup_1", "histogramme du ratio nue numu ccqe sup", newbin,xmin, xmax);
 hdivsup[2] = new TH1D("hdivsup_2", "histogramme du ratio nue numu 2p2h sup", newbin,xmin, xmax);
 hdivsup[11] = new TH1D("hdivsup_11", "histogramme du ratio nue numu res sup", newbin,xmin, xmax);
 hdivsup[26] = new TH1D("hdivsup_26", "histogramme du ratio nue numu dis sup", newbin,xmin, xmax);

 hdivsupbar[30] = new TH1D("hdivsupbar_30", "histogramme du ratio nue numu bar tot sup", newbin,xmin, xmax);
 hdivsupbar[1] = new TH1D("hdivsupbar_1", "histogramme du ratio nue numu bar ccqe sup", newbin,xmin, xmax);
 hdivsupbar[2] = new TH1D("hdivsupbar_2", "histogramme du ratio nue numu bar 2p2h sup", newbin,xmin, xmax);
 hdivsupbar[11] = new TH1D("hdivsupbar_11", "histogramme du ratio nue numu bar res sup", newbin,xmin, xmax);
 hdivsupbar[26] = new TH1D("hdivsupbar_26", "histogramme du ratio nue numu bar dis sup", newbin,xmin, xmax);

 // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26
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
   for (int bin = 1; bin <= newbin; ++bin) {
    
     //std::cout << bin << std::endl;
     double hdivContent = 0;
    double hdivError_prop = 0;
    double hdivbarContent = 0;
    double hdivbarError_prop = 0;
     double heContent = (hist_e->GetBinContent(bin))*scalefactor_e*10*pow(10.0, 38.0);
     double heError = (hist_e->GetBinError(bin))*scalefactor_e*10*pow(10.0, 38.0);
     double hmuContent = (hist_mu->GetBinContent(bin))*scalefactor_mu*10*pow(10.0, 38.0);
     double hmuError = (hist_mu->GetBinError(bin))*scalefactor_mu*10*pow(10.0, 38.0);
     double hebarContent = (hist_ebar->GetBinContent(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hebarError = (hist_ebar->GetBinError(bin))*scalefactor_ebar*10*pow(10.0, 38.0);
     double hmubarContent = (hist_mubar->GetBinContent(bin))*scalefactor_mubar*10*pow(10.0, 38.0);
     double hmubarError = (hist_mubar->GetBinError(bin))*scalefactor_mubar*10*pow(10.0, 38.0);

    /*
    if (mod == 30){
      if (abs(hmuContent- heContent) < pow(10.0, -12.0)){
        std::cout << " bin " << bin << " " << heContent << " " <<  hmuContent  << std::endl;
      } 
    }
    */
  

     if (hmuContent != 0){
       double hdivContent = heContent/hmuContent;
       double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );

       h->SetBinContent(bin, hdivContent);
       h->SetBinError(bin, hdivError_prop);
     }

     else {
       h->SetBinContent(bin, -1);
       h->SetBinError(bin, 0);
     }

    maxY = std::max(maxY, hdivContent + hdivError_prop);

    if (hmubarContent != 0){
       double hdivbarContent = hebarContent/hmubarContent;
       double hdivbarError_prop = sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );

       hbar->SetBinContent(bin, hdivbarContent);
       hbar->SetBinError(bin, hdivbarError_prop);
     }

     else {
       hbar->SetBinContent(bin, -1);
       hbar->SetBinError(bin, 0);
     }

    maxYbar = std::max(maxYbar, hdivbarContent + hdivbarError_prop);

     if (maxY>maxYbar){
       maxtot = maxY;
     }
     else {
       maxtot = maxYbar;
     }

     if ((bin == 11)&&(mod==11)){
      std::cout << " bin " << bin << " " << hebarContent << " " <<  hmubarContent << " " << hdivbarContent << std::endl;
      //std::cout << " bin " << bin << " " << heError << " " <<  hmuError << " " << hdivError_prop << std::endl;
    }

   }
   //std::cout << "max : "<< maxY << " " << maxYbar << " " << mod << std::endl;

   
   
    if (mod==30){
      TCanvas *c1Dnew_totsup = new TCanvas(Form("histogramme %s total nu et nubar", var.c_str()));

      gStyle->SetStatX(0);

      hbar->SetLineColor(15);
      //hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      //hbar->GetYaxis()->SetRangeUser(0.8,1.4);
      //hbar->SetMinimum(-1);
      hbar->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hbar->Draw("hist,E1");

      h->SetLineColor(color);
      //h->SetLineWidth(2);
      //h->GetYaxis()->SetRangeUser(0.6,1.4);
      h->Draw("same,hist,E1");
      
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
      c1Dnew_totsup->SetGrid(1,1);
      //gStyle->SetStatX(0);

      leg1D_divsuptot->AddEntry(h, "#nu_{e}/#nu_{#mu}");
      leg1D_divsuptot->AddEntry(hbar, "#bar{#nu}_{e}/#bar{#nu}_{#mu}");
      leg1D_divsuptot->Draw();

      c1Dnew_totsup->SaveAs(outfilenew_divide_sup_tot.c_str());
    }

    
    else {
      if (color==5){
	color++;
	  }
      TLegend *leg1D_divsup = new TLegend(0.9,0.7,0.7,0.9);
      c1Dnew_divsup->cd(cpt);
      c1Dnew_divsup->cd(cpt)->SetGrid(1,1);

      hbar->SetLineColor(1);
      //hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      //hbar->SetMaximum(maxtot*1.1);
      /*
      if ((mod==11)){
        hbar->GetXaxis()->SetRangeUser(0.2,0.6);
      }
      if ((mod==1)){
        hbar->GetXaxis()->SetRangeUser(0,0.4);
      }
      */

      //hbar->GetYaxis()->SetRangeUser(0.8,1.4);
      //hbar->SetMinimum(-1);
      hbar->SetTitle(Form("histogramme ratio %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
      hbar->Draw("hist,E1");
    
      h->SetLineColor(color);
      //h->SetLineWidth(2);
      //h->GetYaxis()->SetRangeUser(0.6,1.4);
      //h->SetMaximum(maxtot*1.1);
      h->Draw("same,hist,E1");

      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      leg1D_divsup->AddEntry(h, "#nu_{e}/#nu_{#mu}");
      leg1D_divsup->AddEntry(hbar, "#bar{#nu}_{e}/#bar{#nu}_{#mu}");
      leg1D_divsup->Draw();
    
    }
    cpt++;
    color++;
  }

  c1Dnew_divsup->SetGrid(1,1);
  c1Dnew_divsup->SaveAs(outfilenew_divide_sup.c_str());

  
}



//Trace un histogramme 1D du rapport nu_e sur nu_mu de la variable var avec le mode CCQE (nu et nubar) et le total (nu et nubar) sur un canvas
void AgatheAnalysis::plotnewTH1D_tot_CCQE(std::string var, std::string xaxis, std::string yaxis)
{

 int color = 1;
 int cpt = 1;

 TFile * infile_e = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mu = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_ebar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  TFile * infile_mubar = new TFile("~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root", "OPEN");
  
  TTree * input_tree_e = (TTree*) infile_e->Get("tree");
  TTree * input_tree_mu = (TTree*) infile_mu->Get("tree");
  TTree * input_tree_ebar = (TTree*) infile_ebar->Get("tree");
  TTree * input_tree_mubar = (TTree*) infile_mubar->Get("tree");

  double scalefactor_ebar = input_tree_ebar->GetMaximum("fScaleFactor");
  double scalefactor_mubar = input_tree_mubar->GetMaximum("fScaleFactor");
  double scalefactor_e = input_tree_e->GetMaximum("fScaleFactor");
  double scalefactor_mu = input_tree_mu->GetMaximum("fScaleFactor");
  
 TFile * infile1D_tot_CCQE = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
 TCanvas *c1D_tot_CCQE = new TCanvas(Form("histogramme %s_e sur %s_mu nu et nubar pour tot et CCQE", var.c_str(), var.c_str()));
 std::string outfilenew_tot_QE = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_tot_QE.pdf";

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

 hdivsup[30] = new TH1D("hdivsup_30", "histogramme du ratio nue numu tot", newbin,xmin, xmax);
 hdivsup[1] = new TH1D("hdivsup_1", "histogramme du ratio nue numu ccqe", newbin,xmin, xmax);
 hdivsupbar[30] = new TH1D("hdivsupbar_30", "histogramme du ratio nue numu bar tot", newbin,xmin, xmax);
 hdivsupbar[1] = new TH1D("hdivsupbar_1", "histogramme du ratio nue numu bar ccqe", newbin,xmin, xmax);

 for (int mod : mods) {
   
   TH1D* hist_e = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%s_e_%d", var.c_str(), mod)));
   TH1D* hist_mu = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%s_mu_%d", var.c_str(), mod)));
   TH1D* h = hdivsup[mod];
   TH1D* hist_ebar = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%sbar_e_%d", var.c_str(), mod)));
   TH1D* hist_mubar = (TH1D*)(infile1D_tot_CCQE->Get(Form("h%sbar_mu_%d", var.c_str(), mod)));
   TH1D* hbar = hdivsupbar[mod];

   //Pour propager les erreurs correctement à la main
   for (int bin = 1; bin <=newbin; ++bin) {
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
      //double hdivContent = heContent/hmuContent;
      //double hdivError_prop = sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );
      double hdivContent = (heContent*scalefactor_e)/(hmuContent*scalefactor_mu);
      double hdivError_prop = (scalefactor_e/scalefactor_mu)*sqrt( (heError/hmuContent)*(heError/hmuContent) + ((hmuError*heContent)/(hmuContent*hmuContent))*((hmuError*heContent)/(hmuContent*hmuContent)) );

       h->SetBinContent(bin, hdivContent);
       h->SetBinError(bin, hdivError_prop);
     }

     else {
       h->SetBinContent(bin, 0);
       h->SetBinError(bin, 0);
     }

     if (hmuContent != 0){
      //double hdivbarContent = hebarContent/hmubarContent;
      //double hdivbarError_prop = sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );
      double hdivbarContent = (hebarContent*scalefactor_ebar)/(hmubarContent*scalefactor_mubar);
      double hdivbarError_prop = (scalefactor_ebar/scalefactor_mubar)*sqrt( (hebarError/hmubarContent)*(hebarError/hmubarContent) + ((hmubarError*hebarContent)/(hmubarContent*hmubarContent))*((hmubarError*hebarContent)/(hmubarContent*hmubarContent)) );

       hbar->SetBinContent(bin, hdivbarContent);
       hbar->SetBinError(bin, hdivbarError_prop);

     }

     else {
       hbar->SetBinContent(bin, 0);
       hbar->SetBinError(bin, 0);
     }
  }


    if (mod==30){

      c1D_tot_CCQE->SetGrid(1,1);
      h->Draw("hist,E1");
      h->SetLineColor(color);
      h->SetLineWidth(2);
      h->SetMinimum(0.6);
      h->SetMaximum(1.4);
      h->SetTitle(Form("histogramme  %s_nue/%s_numu tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      c1D_tot_CCQE->SaveAs((outfilenew_tot_QE + "(").c_str());
      c1D_tot_CCQE->Clear();

      c1D_tot_CCQE->SetGrid(1,1);
      hbar->Draw("hist,E1");
      hbar->SetLineColor(color);
      hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      hbar->SetMinimum(0.6);
      hbar->SetMaximum(1.4);
      hbar->SetTitle(Form("histogramme  %s_nuebar/%s_numubar tous modes; %s; %s", var.c_str(),var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();
      c1D_tot_CCQE->SaveAs(outfilenew_tot_QE.c_str());
      c1D_tot_CCQE->Clear();


    }

    
    else {
      if (color==5){
	color++;
	  }
      c1D_tot_CCQE->SetGrid(1,1);
    
      h->SetLineColor(color);
      h->SetLineWidth(2);
      h->SetMinimum(0.6);
      h->SetMaximum(1.4);
      h->Draw("hist,E1");
      h->SetTitle(Form("histogramme %s_nue/%s_numu mode CCQE; %s; %s", var.c_str(), var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      c1D_tot_CCQE->SaveAs(outfilenew_tot_QE.c_str());
      c1D_tot_CCQE->Clear();

      c1D_tot_CCQE->SetGrid(1,1);
      
      hbar->SetLineColor(color);
      hbar->SetLineWidth(2);
      hbar->SetLineStyle(kDashed);
      hbar->SetMinimum(0.6);
      hbar->SetMaximum(1.4);
      hbar->Draw("hist,E1");
      hbar->SetTitle(Form("histogramme %s_nuebar/%s_numubar mode CCQE; %s; %s", var.c_str(), var.c_str(), xaxis.c_str(), yaxis.c_str()));
      L1->SetLineStyle(kDashed);
      L1->SetLineColor(1);
      L1->SetLineWidth(3);
      L1->Draw();

      c1D_tot_CCQE->SaveAs((outfilenew_tot_QE + ")").c_str());
    
    }

    cpt=cpt+2;
    color++;
  }
  
}




void AgatheAnalysis::plotnewTH1D_divide_tot(std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile1D_div_tot = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN"); 
    
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



void AgatheAnalysis::plotnewTH1D_divide2_bar(std::string var, std::string var_bar, std::string xaxis, std::string yaxis)
{
  
  TFile * infile1D_div_tot = new TFile("histo1D_new_flat.root", "OPEN"); 
    
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


void AgatheAnalysis::plotnewTH2D_comp_tot (std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "OPEN"); 
    
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


void AgatheAnalysis::plotnewTH2D_tot (std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "OPEN"); 
    
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

void AgatheAnalysis::plotnewTH2D(std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "OPEN"); 

  std::string outfilenew_cosQ2 = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_cosQ2.pdf";
    
  TCanvas *c2Dtot = new TCanvas("histogramme cosQ2 total");      
  TH2D* hist2D = (TH2D*)(infile2Dtot->Get(Form("%s", var.c_str())));

  hist2D->SetTitle(Form("histogramme %s mode CCQE; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  hist2D->Draw("COLZ");

  gStyle->SetStatX(0);

  c2Dtot->SetGrid(1,1);
  c2Dtot->SetLogz();

  c2Dtot->SaveAs(outfilenew_cosQ2.c_str());


}



void AgatheAnalysis::plotnewTH2D_int(){

  TFile * infile2Dint = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "OPEN"); 
          
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


void AgatheAnalysis::plot_new_evts(){
  
  TFile * infile_evt = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo2D_new_flat.root", "OPEN");
  //TFile * infile_evt = new TFile("histo2D.root", "OPEN");
  TH2D* hcosQ2_CCQE = (TH2D*)(infile_evt->Get("hcosQ2_1"));
  TH2D* hcosQ2_CCQE_zoom = (TH2D*)(infile_evt->Get("hcosQ2_1_zoom"));
  TH2D* hcosQ2_A = (TH2D*)(infile_evt->Get("hcosQ2_evtsA"));
  TH2D* hcosQ2_B = (TH2D*)(infile_evt->Get("hcosQ2_evtsB"));
  
  TFile * infile1D_evt = new TFile("~/Code_agathe/NewFiles/histograms_NewFiles/histo1D_new_flat.root", "OPEN");  
  //TFile * infile1D_evt = new TFile("histo1D.root", "OPEN");        
  TH1D* hEnu_A = (TH1D*)(infile1D_evt->Get("hEnu_evtsA"));
  TH1D* hEnu_B = (TH1D*)(infile1D_evt->Get("hEnu_evtsB"));
  TH1D* hq0_A = (TH1D*)(infile1D_evt->Get("hq0_evtsA"));
  TH1D* hq0_B = (TH1D*)(infile1D_evt->Get("hq0_evtsB"));
  TH1D* hq3_A = (TH1D*)(infile1D_evt->Get("hq3_evtsA"));
  TH1D* hq3_B = (TH1D*)(infile1D_evt->Get("hq3_evtsB"));
  TH1D* hQ2_A = (TH1D*)(infile1D_evt->Get("hQ2_evtsA"));
  TH1D* hQ2_B = (TH1D*)(infile1D_evt->Get("hQ2_evtsB"));

  TH1D *hEnuA_norm = new TH1D("hEnuA_norm","histogramme Enu de ces evts A CCQE normalise", 100,0,2);
  TH1D *hEnuB_norm = new TH1D("hEnuB_norm","histogramme Enu de ces evts B CCQE normalise", 100,0,2);
  TH1D *hq0A_norm = new TH1D("hq0A_norm","histogramme q0 de ces evts A CCQE normalise", 100,0,2);
  TH1D *hq0B_norm = new TH1D("hq0B_norm","histogramme q0 de ces evts B CCQE normalise", 100,0,2);
  TH1D *hq3A_norm = new TH1D("hq3A_norm","histogramme q3 de ces evts A CCQE normalise", 100,0,2);
  TH1D *hq3B_norm = new TH1D("hq3B_norm","histogramme q3 de ces evts B CCQE normalise", 100,0,2);
  TH1D *hQ2A_norm = new TH1D("hQ2A_norm","histogramme Q2 de ces evts A CCQE normalise", 100,0,2);
  TH1D *hQ2B_norm = new TH1D("hQ2B_norm","histogramme Q2 de ces evts B CCQE normalise", 100,0,2);

  double int_EnuA = hEnu_A->Integral();
  double int_EnuB = hEnu_B->Integral();

  double int_q0A = hq0_A->Integral();
  double int_q0B = hq0_B->Integral();
  double int_q3A = hq3_A->Integral();
  double int_q3B = hq3_B->Integral();
  double int_Q2A = hQ2_A->Integral();
  double int_Q2B = hQ2_B->Integral();

  for (int i = 0;i<100; i++){
    double contentEnu_A = hEnu_A->GetBinContent(i);
    double contentEnu_B = hEnu_B->GetBinContent(i);
    double contentQ2_A = hQ2_A->GetBinContent(i);
    double contentQ2_B = hQ2_B->GetBinContent(i);
    double contentq0_A = hq0_A->GetBinContent(i);
    double contentq0_B = hq0_B->GetBinContent(i);
    double contentq3_A = hq3_A->GetBinContent(i);
    double contentq3_B = hq3_B->GetBinContent(i);

    hEnuA_norm->SetBinContent(i,contentEnu_A/int_EnuA);
    hEnuB_norm->SetBinContent(i,contentEnu_B/int_EnuB);
    hq0A_norm->SetBinContent(i,contentq0_A/int_q0A);
    hq0B_norm->SetBinContent(i,contentq0_B/int_q0B);
    hq3A_norm->SetBinContent(i,contentq3_A/int_q3A);
    hq3B_norm->SetBinContent(i,contentq3_B/int_q3B);
    hQ2A_norm->SetBinContent(i,contentQ2_A/int_Q2A);
    hQ2B_norm->SetBinContent(i,contentQ2_B/int_Q2B);
  }

 

  TF1 * droite = new TF1("droite", "-0.27*x+0.99", 0, 0.5);
  TLegend *leg2Dtot = new TLegend(0.9,0.7,0.6,0.9);

  std::string outfilenew_pops = "~/Code_agathe/NewFiles/output_NewFiles/outputnew_pops.pdf";

  TCanvas *ccosQ2_CCQE = new TCanvas("histogramme coslep en fonction de Q2 pour CCQE");
  hcosQ2_CCQE->Draw("COLZ");
  hcosQ2_CCQE->SetTitle("cos en fonction de Q2; Q^{2}; cos(#theta)");
  droite->Draw("SAME");
  ccosQ2_CCQE->SetGrid(1,1);

  gStyle->SetStatX(0);

  ccosQ2_CCQE->SaveAs((outfilenew_pops + "(").c_str());

  TCanvas *ccosQ2_CCQE_zoom = new TCanvas("histogramme coslep en fonction de Q2 pour CCQE zoom");
  hcosQ2_CCQE_zoom->Draw("COLZ");
  hcosQ2_CCQE_zoom->SetTitle("cos en fonction de Q2; Q^{2}; cos(#theta)");
  droite->Draw("SAME");
  ccosQ2_CCQE_zoom->SetGrid(1,1);

  gStyle->SetStatX(0);

  ccosQ2_CCQE_zoom->SaveAs((outfilenew_pops.c_str()));

  TCanvas *ccosQ2A = new TCanvas("histogramme coslep en fonction de Q2 pour evts A");
  hcosQ2_A->Draw("COLZ");

  ccosQ2A->SaveAs(outfilenew_pops.c_str());

  TCanvas *ccosQ2B = new TCanvas("histogramme coslep en fonction de Q2 pour evts B");
  hcosQ2_B->Draw("COLZ");

  ccosQ2B->SaveAs(outfilenew_pops.c_str());

  TCanvas *cEnu = new TCanvas("histogramme Enu pour evts A et B");
  hEnuA_norm->SetLineWidth(2);
  hEnuA_norm->SetLineColor(1);
  hEnuA_norm->SetTitle(" histogramme Enu pour evts A et B; E_{#nu} (GeV); ");
  hEnuA_norm->Draw();
  hEnuB_norm->SetLineWidth(2);
  hEnuB_norm->SetLineColor(2);
  hEnuB_norm->Draw("SAME");

  cEnu->SetGrid();

  leg2Dtot->AddEntry(hEnuA_norm, "cut at E_{#nu} < 0.3 GeV");
  leg2Dtot->AddEntry(hEnuB_norm, "cut at E_{#nu} > 0.3 GeV");
  leg2Dtot->Draw();


  cEnu->SaveAs(outfilenew_pops.c_str());

  TCanvas *cq0 = new TCanvas("histogramme q0 pour evts A et B");
  TLegend *leg2Dq0 = new TLegend(0.9,0.7,0.6,0.9);
  hq0A_norm->SetLineWidth(2);
  hq0A_norm->SetLineColor(1);
  hq0A_norm->SetTitle(" histogramme q0 pour evts A et B; q_{0} (GeV); ");
  hq0A_norm->Draw();
  hq0B_norm->SetLineWidth(2);
  hq0B_norm->SetLineColor(2);
  hq0B_norm->Draw("SAME");

  cq0->SetGrid();

  leg2Dq0->AddEntry(hq0A_norm, "cut at E_{#nu} < 0.3 GeV");
  leg2Dq0->AddEntry(hq0B_norm, "cut at E_{#nu} > 0.3 GeV");
  leg2Dq0->Draw();

  cq0->SaveAs(outfilenew_pops.c_str());

  TCanvas *cq3 = new TCanvas("histogramme q3 pour evts A et B");
  TLegend *leg2Dq3 = new TLegend(0.9,0.7,0.6,0.9);
  hq3A_norm->SetLineWidth(2);
  hq3A_norm->SetLineColor(1);
  hq3A_norm->SetTitle(" histogramme q3 pour evts A et B; q_{3} (GeV); ");
  hq3A_norm->Draw();
  hq3B_norm->SetLineWidth(2);
  hq3B_norm->SetLineColor(2);
  hq3B_norm->Draw("SAME");

  cq3->SetGrid();

  leg2Dq3->AddEntry(hq3A_norm, "cut at E_{#nu} < 0.3 GeV");
  leg2Dq3->AddEntry(hq3B_norm, "cut at E_{#nu} > 0.3 GeV");
  leg2Dq3->Draw();

  cq3->SaveAs(outfilenew_pops.c_str());
  

  TCanvas *cQ2 = new TCanvas("histogramme Q2 pour evts A et B");
  TLegend *leg2DQ2 = new TLegend(0.9,0.7,0.6,0.9);
  hQ2A_norm->SetLineWidth(2);
  hQ2A_norm->SetLineColor(1);
  hQ2A_norm->SetTitle(" histogramme Q2 pour evts A et B; Q^{2} (GeV); ");
  hQ2A_norm->Draw();
  hQ2B_norm->SetLineWidth(2);
  hQ2B_norm->SetLineColor(2);
  hQ2B_norm->Draw("SAME");

  cQ2->SetGrid();

  leg2DQ2->AddEntry(hQ2A_norm, "cut at E_{#nu} < 0.3 GeV");
  leg2DQ2->AddEntry(hQ2B_norm, "cut at E_{#nu} > 0.3 GeV");
  leg2DQ2->Draw();

  cQ2->SaveAs((outfilenew_pops + ")").c_str());

  
  
}







void AgatheAnalysis::PlotnewAll_flav()
{
 
  //plotnewTH1D_divide_H2O("pLep", "p_lepton (GeV)", " ");
  newgraph_xsec();
  //plot_new_evts();

  //plotnewTH1D_normalise("Enu", "E_{#nu} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38}");
  //plotnewTH1D_tot_CCQE("q0", "q_{0} (GeV)", " ");

  //plotnewTH1D_superposes ("Enu", "E_{#nu} (GeV)", "bin");
  //plotnewTH1D_xsec("Enubar", "E_{#nu} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38}");
  //plotnewTH1D_xsec_overE("Enu", "E_{#nu} (GeV)", "#sigma(E_{#nu})/E_{#nu} (cm^{2}/GeV/nucleon)  10^{-38}");

  //plotnewTH2D("hcosEnu_mu_1", "E_{#nu} (GeV)", "cos(#theta)");
  
  //plotnewTH1D_divide_superposés("cos", "cos(#theta)", " ");

  //plotnewTH1D_superposes_QE("Enu", "E_{#nu} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38}");

  //plotnewTH1D_xsec_noDiff();
  //plotnewTH1D_normalise ("cos", "cos(#theta)", " ");

  //plotnewTH1D_divide_superposés("cos", "cos(#theta)", " ");
  
  //plotnewTH1D_superposes ("q0bar", "q_{0} (GeV)", "bin");
  //plotnewTH1D_superposes ("q3bar", "q_{3} (GeV)", "bin");
  //plotnewTH1D_normalise ("Q2bar", "Q^{2} (GeV)", "bin");
  
  //plotnewTH1D_xsec("q0", "q_{0} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38}");
  
  //plotnewTH1D_xsec_QE ("Enubar", "E_{#nu} (GeV)", "#sigma(E) (cm^{2}/nucleon) 10^{-38}");

  /*
 
  plotnewTH1D_superposes ("ELep", "E_lepton (GeV)", " ");
  plotnewTH1D_superposes ("pLep", "p_lepton (GeV)", " ");
  plotnewTH1D_divide("pLep", "p_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotnewTH1D_superposes ("cos", "cos(#theta)", " ");
  
  
  plotnewTH1D_tot_CCQE ("q0", "q_{0} (GeV)", " ");
  plotnewTH1D_tot_CCQE ("q3", "q_{3} (GeV)", " ");
  plotnewTH1D_tot_CCQE ("Q2", "Q^{2} (GeV)", " ");
  */

  //plotnewTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");

  /*
  plotnewTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");
  plotnewTH2D_tot("cosEnu", "E_{#nu} (GeV)", "cos(#theta)");
  plotnewTH2D_tot("plepEnu", "E_{#nu} (GeV)", "p_{lepton} (GeV)");
  */

  /*
  plotnewTH1D_superposes ("cos", "cos(#theta)", " ");
  plotnewTH1D_divide("cos", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  //plotnewTH1D_superposes ("cosbar", "cos(#theta)", " ");
  //plotnewTH1D_divide("cosbar", "cos(#theta)", "#nu_{e}/#nu_{#mu}");
  */
  
  /*
  plotnewTH1D_superposes ("ELep", "E_lepton (GeV)", " ");
  plotnewTH1D_divide("ELep", "E_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  plotnewTH1D_superposes ("ELepbar", "E_lepton (GeV)", " ");
  plotnewTH1D_divide("ELepbar", "E_lepton (GeV)", "#nu_{e}/#nu_{#mu} ");
  */
  
  //plotnewTH1D_divide_tot("Enu", "E_{#nu} (GeV)", "#nu_{e}/#nu_{#mu} ");
  //plotnewTH1D_divide_tot("Enubar", "E_{#nu} (GeV)", "#bar{#nu_{e}}/#bar{#nu_{#mu}} ");

  //plotnewTH1D_divide2_bar("Enu", "Enubar", "E_{#nu} (GeV)", "(#bar{#nu_{e}}/#bar{#nu_{#mu}})/(#nu_{e}/#nu_{#mu}) ");


}
