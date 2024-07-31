#include "Flat_nu_e_nu_mu.h"


void AgatheAnalysis::T2KFlux_nu_mu()
{
   
  //définit l'histogramme

  TH1D *hEnu_30 = new TH1D("hEnu_30","histogramme Enu total",100,0,2);
  TH1D *hEnu_1 = new TH1D("hEnu_1","histogramme Enu CCQE",100,0,2);
  TH1D *hEnu_2 = new TH1D("hEnu_2","histogramme Enu 2p2h",100,0,2);
  TH1D *hEnu_11 = new TH1D("hEnu_11","histogramme Enu RES",100,0,2);
  TH1D *hEnu_26 = new TH1D("hEnu_26","histogramme Enu DIS",100,0,2);
  TH1D *hEnu_0 = new TH1D("hEnu_0","histogramme Enu Others",100,0,2);
  
  TH1D *hq0_30 = new TH1D("hq0_30","histogramme q0 total",100,0,2);
  TH1D *hq0_1 = new TH1D("hq0_1","histogramme q0 CCQE",100,0,2);
  TH1D *hq0_2 = new TH1D("hq0_2","histogramme q0 2p2h",100,0,2);
  TH1D *hq0_11 = new TH1D("hq0_11","histogramme q0 RES",100,0,2);
  TH1D *hq0_26 = new TH1D("hq0_26","histogramme q0 DIS",100,0,2);
  TH1D *hq0_0 = new TH1D("hq0_0","histogramme q0 Others",100,0,2);

  TH1D *hq3_30 = new TH1D("hq3_30","histogramme q3 total",100,0,2);
  TH1D *hq3_1 = new TH1D("hq3_1","histogramme q3 CCQE",100,0,2);
  TH1D *hq3_2 = new TH1D("hq3_2","histogramme q3 2p2h",100,0,2);
  TH1D *hq3_11 = new TH1D("hq3_11","histogramme q3 RES",100,0,2);
  TH1D *hq3_26 = new TH1D("hq3_26","histogramme q3 DIS",100,0,2);
  TH1D *hq3_0 = new TH1D("hq3_0","histogramme q3 Others",100,0,2);

  TH1D *hQ2_30 = new TH1D("hQ2_30","histogramme Q2 total",100,0,2);
  TH1D *hQ2_1 = new TH1D("hQ2_1","histogramme Q2 CCQE",100,0,2);
  TH1D *hQ2_2 = new TH1D("hQ2_2","histogramme Q2 2p2h",100,0,2);
  TH1D *hQ2_11 = new TH1D("hQ2_11","histogramme Q2 RES",100,0,2);
  TH1D *hQ2_26 = new TH1D("hQ2_26","histogramme Q2 DIS",100,0,2);
  TH1D *hQ2_0 = new TH1D("hQ2_0","histogramme Q2 Others",100,0,2);

  TH1D *hQ2comp_30 = new TH1D("hQ2comp_30","histogramme Q2-Q2QE tot",100,-1.5,1.5);
  TH1D *hQ2comp_1 = new TH1D("hQ2comp_1","histogramme Q2-Q2QE CCQE",100,-1.5,1.5);
  TH1D *hQ2comp_2 = new TH1D("hQ2comp_2","histogramme Q2-Q2QE 2p2h",100,-1.5,1.5);
  TH1D *hQ2comp_11 = new TH1D("hQ2comp_11","histogramme Q2-Q2QE RES",100,-1.5,1.5);
  TH1D *hQ2comp_26 = new TH1D("hQ2comp_26","histogramme Q2-Q2QE DIS",100,-1.5,1.5);
  TH1D *hQ2comp_0 = new TH1D("hQ2comp_0","histogramme Q2-Q2QE Others",100,-1.5,1.5);

  TH1D *hEnucomp_30 = new TH1D("hEnucomp_30","histogramme Enu-EnuQE tot",100,-3.5,3.5);
  TH1D *hEnucomp_1 = new TH1D("hEnucomp_1","histogramme Enu-EnuQE CCQE",100,-3.5,3.5);
  TH1D *hEnucomp_2 = new TH1D("hEnucomp_2","histogramme Enu-EnuQE 2p2h",100,-3.5,3.5);
  TH1D *hEnucomp_11 = new TH1D("hEnucomp_11","histogramme Enu-EnuQE RES",100,-3.5,3.5);
  TH1D *hEnucomp_26 = new TH1D("hEnucomp_26","histogramme Enu-EnuQE DIS",100,-3.5,3.5);
  TH1D *hEnucomp_0 = new TH1D("hEnucomp_0","histogramme Enu-EnuQE Others",100,-3.5,3.5);

  TH1D *hcos_30 = new TH1D("hcos_30","histogramme coslep tot",100,-1,1);
  TH1D *hcos_1 = new TH1D("hcos_1","histogramme coslep CCQE",100,-1,1);
  TH1D *hcos_2 = new TH1D("hcos_2","histogramme coslep 2p2h",100,-1,1);
  TH1D *hcos_11 = new TH1D("hcos_11","histogramme coslep RES",100,-1,1);
  TH1D *hcos_26 = new TH1D("hcos_26","histogramme coslep DIS",100,-1,1);
  TH1D *hcos_0 = new TH1D("hcos_0","histogramme coslep Others",100,-1,1);

  TH1D *hELep_30 = new TH1D("hELep_30","histogramme ELep total",100,0,2);
  TH1D *hELep_1 = new TH1D("hELep_1","histogramme ELep CCQE",100,0,2);
  TH1D *hELep_2 = new TH1D("hELep_2","histogramme ELep 2p2h",100,0,2);
  TH1D *hELep_11 = new TH1D("hELep_11","histogramme ELep RES",100,0,2);
  TH1D *hELep_26 = new TH1D("hELep_26","histogramme ELep DIS",100,0,2);
  TH1D *hELep_0 = new TH1D("hELep_0","histogramme ELep Others",100,0,2);

  TH2D *hcosQ2_30 = new TH2D("hcosQ2_30","histogramme CosLep en fonction de Q2 tot", 100,0,5,100,-1,1);
  TH2D *hcosQ2_1 = new TH2D("hcosQ2_1","histogramme CosLep en fonction de Q2 CCQE", 100,0,0.5,100,0.5,1);
  TH2D *hcosQ2_2 = new TH2D("hcosQ2_2","histogramme CosLep en fonction de Q2 2p2h", 100,0,5,100,-1,1);
  TH2D *hcosQ2_11 = new TH2D("hcosQ2_11","histogramme CosLep en fonction de Q2 RES", 100,0,5,100,-1,1);
  TH2D *hcosQ2_26 = new TH2D("hcosQ2_26","histogramme CosLep en fonction de Q2 DIS", 100,0,5,100,-1,1);
  TH2D *hcosQ2_0 = new TH2D("hcosQ2_0","histogramme CosLep en fonction de Q2 Others", 100,0,5,100,-1,1);

  TH2D *hcosq0_30 = new TH2D("hcosq0_30","histogramme CosLep en fonction de q0 tot", 500,0,5,500,-1,1);
  TH2D *hcosq0_1 = new TH2D("hcosq0_1","histogramme CosLep en fonction de q0 CCQE", 500,0,5,500,-1,1);
  TH2D *hcosq0_2 = new TH2D("hcosq0_2","histogramme CosLep en fonction de q0 2p2h", 500,0,5,500,-1,1);
  TH2D *hcosq0_11 = new TH2D("hcosq0_11","histogramme CosLep en fonction de q0 RES", 500,0,5,500,-1,1);
  TH2D *hcosq0_26 = new TH2D("hcosq0_26","histogramme CosLep en fonction de q0 DIS", 500,0,5,500,-1,1);
  TH2D *hcosq0_0 = new TH2D("hcosq0_0","histogramme CosLep en fonction de q0 Others", 500,0,5,500,-1,1);

  TH2D *hcosEnu_30 = new TH2D("hcosEnu_30","histogramme CosLep en fonction de Enu_true tot", 500,0,5,500,-1,1);
  TH2D *hcosEnu_1 = new TH2D("hcosEnu_1","histogramme CosLep en fonction de Enu_true CCQE", 500,0,5,500,-1,1);
  TH2D *hcosEnu_2 = new TH2D("hcosEnu_2","histogramme CosLep en fonction de Enu_true 2p2h", 500,0,5,500,-1,1);
  TH2D *hcosEnu_11 = new TH2D("hcosEnu_11","histogramme CosLep en fonction de Enu_true RES", 500,0,5,500,-1,1);
  TH2D *hcosEnu_26 = new TH2D("hcosEnu_26","histogramme CosLep en fonction de Enu_true DIS", 500,0,5,500,-1,1);
  TH2D *hcosEnu_0 = new TH2D("hcosEnu_0","histogramme CosLep en fonction de Enu_true Others", 500,0,5,500,-1,1);

  TH2D *hEnuQE_30 = new TH2D("hEnuQE_30","histogramme Enu_true en fonction de Enu_QE tot", 500,0,5,500,0,5);
  TH2D *hEnuQE_1 = new TH2D("hEnuQE_1","histogramme Enu_true en fonction de Enu_QE CCQE", 500,0,5,500,0,5);
  TH2D *hEnuQE_2 = new TH2D("hEnuQE_2","histogramme Enu_true en fonction de Enu_QE 2p2h", 500,0,5,500,0,5);
  TH2D *hEnuQE_11 = new TH2D("hEnuQE_11","histogramme Enu_true en fonction de Enu_QE RES", 500,0,5,500,0,5);
  TH2D *hEnuQE_26 = new TH2D("hEnuQE_26","histogramme Enu_true en fonction de Enu_QE DIS", 500,0,5,500,0,5);
  TH2D *hEnuQE_0 = new TH2D("hEnuQE_0","histogramme Enu_true en fonction de Enu_QE Others", 500,0,5,500,0,5);

  TH2D *hQ2QE_30 = new TH2D("hQ2QE_30","histogramme Q2 en fonction de Q2_QE tot", 500,0,5,500,0,5);
  TH2D *hQ2QE_1 = new TH2D("hQ2QE_1","histogramme Q2 en fonction de Q2_QE CCQE", 500,0,5,500,0,5);
  TH2D *hQ2QE_2 = new TH2D("hQ2QE_2","histogramme Q2 en fonction de Q2_QE 2p2h", 500,0,5,500,0,5);
  TH2D *hQ2QE_11 = new TH2D("hQ2QE_11","histogramme Q2 en fonction de Q2_QE 2p2h", 500,0,5,500,0,5);
  TH2D *hQ2QE_26 = new TH2D("hQ2QE_26","histogramme Q2 en fonction de Q2_QE DIS", 500,0,5,500,0,5);
  TH2D *hQ2QE_0 = new TH2D("hQ2QE_0","histogramme Q2 en fonction de Q2_QE Others", 500,0,5,500,0,5);

  TH2D *hq0q3_30 = new TH2D("hq0q3_30","histogramme q0 en fonction de q3 tot", 500,0,5,500,0,5);
  TH2D *hq0q3_1 = new TH2D("hq0q3_1","histogramme q0 en fonction de q3 CCQE", 500,0,5,500,0,5);
  TH2D *hq0q3_2 = new TH2D("hq0q3_2","histogramme q0 en fonction de q3 2p2h", 500,0,5,500,0,5);
  TH2D *hq0q3_11 = new TH2D("hq0q3_11","histogramme q0 en fonction de q3 2p2h", 500,0,5,500,0,5);
  TH2D *hq0q3_26 = new TH2D("hq0q3_26","histogramme q0 en fonction de q3 DIS", 500,0,5,500,0,5);
  TH2D *hq0q3_0 = new TH2D("hq0q3_0","histogramme q0 en fonction de q3 Others", 500,0,5,500,0,5);
  

  TH2D *hcosQ2_evtsA = new TH2D("hcosQ2_evtsA","histogramme CosLep en fonction de Q2 pour evts particuliers A CCQE", 100,0,0.5,100,0.5,1);
  TH3D *hcosQ2Enu_evtsA = new TH3D("hcosQ2Enu_evtsA","histogramme Enu en fonction de CosLep en fonction de Q2 pour evts particuliers A CCQE", 100,0,0.5,100,0.5,1,100,0,5);
  TH1D *hEnu_evtsA = new TH1D("hEnu_evtsA","histogramme Enu de ces evts A CCQE", 100,0,5);
  TH1D *hq0_evtsA = new TH1D("hq0_evtsA","histogramme q0 de ces evts A CCQE", 100,0,5);
  TH1D *hq3_evtsA = new TH1D("hq3_evtsA","histogramme q3 de ces evts A CCQE", 100,0,5);
  TH1D *hQ2_evtsA = new TH1D("hQ2_evtsA","histogramme Q2 de ces evts A CCQE", 100,0,5);
  
  TH2D *hcosQ2_evtsB = new TH2D("hcosQ2_evtsB","histogramme CosLep en fonction de Q2 pour evts particuliers B CCQE", 100,0,0.5,100,0.5,1);
  TH3D *hcosQ2Enu_evtsB = new TH3D("hcosQ2Enu_evtsB","histogramme Enu en fonction de CosLep en fonction de Q2 pour evts particuliers B CCQE", 100,0,0.5,100,0.5,1,100,0,5);
  TH1D *hEnu_evtsB = new TH1D("hEnu_evtsB","histogramme Enu de ces evts B CCQE", 100,0,5);
  TH1D *hq0_evtsB = new TH1D("hq0_evtsB","histogramme q0 de ces evts B CCQE", 100,0,5);
  TH1D *hq3_evtsB = new TH1D("hq3_evtsB","histogramme q3 de ces evts B CCQE", 100,0,5);
  TH1D *hQ2_evtsB = new TH1D("hQ2_evtsB","histogramme Q2 de ces evts B CCQE", 100,0,5);


  //Pour ouvrir le fichier et acceder aux variables
  TFile * infile = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/T2KND_FHC_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  //TFile * infile = new TFile("T2KND_FHC_numu_C8H8_NEUT562_1M_0000_NUISFLAT.root", "OPEN");
  //TFile * infile = new TFile("flat_0-10GeV_nue_C8H8_NEUT562_1M_0000_NUISFLAT.root", "OPEN");
  TTree * input_tree = (TTree*) infile->Get("tree");

  int nModesCC = 30;
  int nentries;
  int Mode;
  float q0;
  float q3;
  float Q2;
  float coslep;
  float ELep;
  float Q2_QE;
  float Enu_true;
  float Enu_QE;

  input_tree->SetBranchAddress("Mode",&Mode);
  input_tree->SetBranchAddress("q0",&q0); //Definit les variables du Tree
  input_tree->SetBranchAddress("q3",&q3);
  input_tree->SetBranchAddress("Q2",&Q2);
  input_tree->SetBranchAddress("CosLep",&coslep);
  input_tree->SetBranchAddress("ELep",&ELep);
  input_tree->SetBranchAddress("Q2_QE",&Q2_QE);
  input_tree->SetBranchAddress("Enu_true",&Enu_true);
  input_tree->SetBranchAddress("Enu_QE",&Enu_QE);
 
  nentries = input_tree->GetEntries(); //Pour avoir la taille de tes variables

  std::cout << nentries << std::endl;
  
  float E_tot = 0;
  float E_CCQE = 0;
  float E_2p2h = 0;
  float E_RES = 0;
  float E_DIS = 0;
  float E_oth = 0;
  
  for(int i = 0; i < nentries; i++){
   input_tree->GetEntry(i);

   if (Mode < 30){
     hEnu_30->Fill(Enu_true);
     hq0_30->Fill(q0);
     hq3_30->Fill(q3);
     hQ2_30->Fill(Q2);
     hQ2comp_30 -> Fill(Q2-Q2_QE);
     hEnucomp_30 -> Fill(Enu_true-Enu_QE);
     hcosQ2_30 -> Fill(Q2, coslep);
     hcosq0_30 -> Fill(q0, coslep);
     hcos_30 -> Fill(coslep);
     hELep_30->Fill(ELep);
     hcosEnu_30 -> Fill(Enu_true, coslep);
     hEnuQE_30 -> Fill(Enu_QE, Enu_true);
     hQ2QE_30 -> Fill(Q2_QE, Q2);
     hq0q3_30 -> Fill(q3, q0);
     
     E_tot++;
   }
   
   if(Mode==1){
     hEnu_1->Fill(Enu_true);
     hq0_1 -> Fill(q0);
     hq3_1 -> Fill(q3);
     hQ2_1 -> Fill(Q2);
     hQ2comp_1 -> Fill(Q2-Q2_QE);
     hEnucomp_1 -> Fill(Enu_true-Enu_QE);
     hcosQ2_1 -> Fill(Q2, coslep);
     hcosq0_1 -> Fill(q0, coslep);
     hcos_1 -> Fill(coslep);
     hELep_1->Fill(ELep);
     hcosEnu_1 -> Fill(Enu_true, coslep);
     hEnuQE_1 -> Fill(Enu_QE, Enu_true);
     hQ2QE_1 -> Fill(Q2_QE, Q2);
     hq0q3_1 -> Fill(q3, q0);

     E_CCQE++;

   }
   
   if(Mode==2){
     hEnu_2->Fill(Enu_true);
     hq0_2 -> Fill(q0);
     hq3_2 -> Fill(q3);
     hQ2_2 -> Fill(Q2);
     hQ2comp_2 -> Fill(Q2-Q2_QE);
     hEnucomp_2 -> Fill(Enu_true-Enu_QE);
     hcosQ2_2 -> Fill(Q2, coslep);
     hcosq0_2 -> Fill(q0, coslep);
     hcos_2 -> Fill(coslep);
     hELep_2->Fill(ELep);
     hcosEnu_2 -> Fill(Enu_true, coslep);
     hEnuQE_2 -> Fill(Enu_QE, Enu_true);
     hQ2QE_2 -> Fill(Q2_QE, Q2);
     hq0q3_2 -> Fill(q3, q0);

     E_2p2h++;
   }
    
   if((11<=Mode)&&(Mode<=17)){
     hEnu_11->Fill(Enu_true);
     hq0_11 -> Fill(q0);
     hq3_11 -> Fill(q3);
     hQ2_11 -> Fill(Q2);
     hQ2comp_11 -> Fill(Q2-Q2_QE);
     hEnucomp_11 -> Fill(Enu_true-Enu_QE);
     hcosQ2_11 -> Fill(Q2, coslep);
     hcosq0_11 -> Fill(q0, coslep);
     hcos_11 -> Fill(coslep);
     hELep_11->Fill(ELep);
     hcosEnu_11 -> Fill(Enu_true, coslep);
     hEnuQE_11 -> Fill(Enu_QE, Enu_true);
     hQ2QE_11 -> Fill(Q2_QE, Q2);
     hq0q3_11 -> Fill(q3, q0);

     E_RES++;
   }
    
   if((Mode==21)||(Mode==22)||(Mode==23)||(Mode==26)){
      hEnu_26->Fill(Enu_true);
      hq0_26 -> Fill(q0);
      hq3_26 -> Fill(q3);
      hQ2_26 -> Fill(Q2);
      hQ2comp_26 -> Fill(Q2-Q2_QE);
      hEnucomp_26 -> Fill(Enu_true-Enu_QE);
      hcosQ2_26 -> Fill(Q2, coslep);
      hcosq0_26 -> Fill(q0, coslep);
      hcos_26 -> Fill(coslep);
      hELep_26->Fill(ELep);
      hcosEnu_26 -> Fill(Enu_true, coslep);
      hEnuQE_26 -> Fill(Enu_QE, Enu_true);
      hQ2QE_26 -> Fill(Q2_QE, Q2);
      hq0q3_26 -> Fill(q3, q0);

      E_DIS++;
    }
   if ((Mode>=18)&&(Mode<=20)) {
      hEnu_0->Fill(Enu_true);
      hq0_0->Fill(q0);
      hq3_0->Fill(q3);
      hQ2_0->Fill(q3);
      hQ2comp_0 -> Fill(Q2-Q2_QE);
      hEnucomp_0 -> Fill(Enu_true-Enu_QE);
      hcosQ2_0 -> Fill(Q2, coslep);
      hcosq0_0 -> Fill(q0, coslep);
      hcos_0 -> Fill(coslep);
      hELep_0->Fill(ELep);
      hcosEnu_0 -> Fill(Enu_true, coslep);
      hEnuQE_0 -> Fill(Enu_QE, Enu_true);
      hQ2QE_0 -> Fill(Q2_QE, Q2);
      hq0q3_0 -> Fill(q3, q0);

      E_oth++;
    }

   if ((Mode==1)&&(-0.27*Q2+0.99>coslep)&&(coslep>0.5)&&(Q2<0.5)&&(Q2>0.1)){
     hcosQ2_evtsA->Fill(Q2, coslep);
     hcosQ2Enu_evtsA->Fill(Q2, coslep, Enu_true);
     hEnu_evtsA->Fill(Enu_true);
     hq0_evtsA->Fill(q0);
     hq3_evtsA->Fill(q3);
     hQ2_evtsA->Fill(Q2);
    
   }
   if ((Mode==1)&&(-0.27*Q2+0.99<coslep)&&(coslep>0.5)&&(Q2<0.5)&&(Q2>0.1)){
     hcosQ2_evtsB->Fill(Q2, coslep);
     hcosQ2Enu_evtsB->Fill(Q2, coslep, Enu_true);
     hEnu_evtsB->Fill(Enu_true);
     hq0_evtsB->Fill(q0);
     hq3_evtsB->Fill(q3);
     hQ2_evtsB->Fill(Q2);
     
   }
   

  }

  
  std::cout << "Etot " << E_tot << std::endl;
  std::cout << "CCQE " << E_CCQE << " prop " << (E_CCQE/E_tot)*100 << "%" <<std::endl;
  std::cout << "2p2h " << E_2p2h << " prop " << (E_2p2h/E_tot)*100 << "%" <<std::endl;
  std::cout << "RES " << E_RES << " prop " << (E_RES/E_tot)*100 << "%" <<std::endl;
  std::cout << "DIS " << E_DIS << " prop " << (E_DIS/E_tot)*100 << "%" <<std::endl;
  std::cout << "other " << E_oth << " prop " << (E_oth/E_tot)*100 << "%" <<std::endl;
  
  TFile * outfile1D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D.root", "RECREATE");

  hEnu_30->Write();
  hEnu_1->Write();
  hEnu_2->Write();
  hEnu_11->Write();
  hEnu_26->Write();
  hEnu_0->Write();
  
  hq0_30->Write();
  hq0_1->Write();
  hq0_2->Write();
  hq0_11->Write();
  hq0_26->Write();
  hq0_0->Write();

  hq3_30->Write();
  hq3_1->Write();
  hq3_2->Write();
  hq3_11->Write();
  hq3_26->Write();
  hq3_0->Write();
  
  hQ2_30->Write();
  hQ2_1->Write();
  hQ2_2->Write();
  hQ2_11->Write();
  hQ2_26->Write();
  hQ2_0->Write();

  hQ2comp_30->Write();
  hQ2comp_1->Write();
  hQ2comp_2->Write();
  hQ2comp_11->Write();
  hQ2comp_26->Write();
  hQ2comp_0->Write();

  hEnucomp_30->Write();
  hEnucomp_1->Write();
  hEnucomp_2->Write();
  hEnucomp_11->Write();
  hEnucomp_26->Write();
  hEnucomp_0->Write();

  hcos_30->Write();
  hcos_1->Write();
  hcos_2->Write();
  hcos_11->Write();
  hcos_26->Write(); 
  hcos_0->Write();

  hELep_30->Write();
  hELep_1->Write();
  hELep_2->Write();
  hELep_11->Write();
  hELep_26->Write();
  hELep_0->Write();

  hEnu_evtsA->Write();
  hEnu_evtsB->Write();

  hq0_evtsA->Write();
  hq0_evtsB->Write();
  
  hq3_evtsA->Write();
  hq3_evtsB->Write();

  hQ2_evtsA->Write();
  hQ2_evtsB->Write();

  outfile1D->Close();

  TFile * outfile2D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "RECREATE");

  hcosQ2_30->Write();
  hcosQ2_1->Write();
  hcosQ2_2->Write();
  hcosQ2_11->Write();
  hcosQ2_26->Write();
  hcosQ2_0->Write();

  hcosq0_30->Write();
  hcosq0_1->Write();
  hcosq0_2->Write();
  hcosq0_11->Write();
  hcosq0_26->Write();
  hcosq0_0->Write();

  hcosEnu_30->Write();
  hcosEnu_1->Write();
  hcosEnu_2->Write();
  hcosEnu_11->Write();
  hcosEnu_26->Write();
  hcosEnu_0->Write();

  hEnuQE_30->Write();
  hEnuQE_1->Write();
  hEnuQE_2->Write();
  hEnuQE_11->Write();
  hEnuQE_26->Write();
  hEnuQE_0->Write();

  hQ2QE_30->Write();
  hQ2QE_1->Write();
  hQ2QE_2->Write();
  hQ2QE_11->Write();
  hQ2QE_26->Write();
  hQ2QE_0->Write();

  hq0q3_30->Write();
  hq0q3_1->Write();
  hq0q3_2->Write();
  hq0q3_11->Write();
  hq0q3_26->Write();
  hq0q3_0->Write();

  hcosQ2_evtsA->Write();
  hcosQ2_evtsB->Write();

  outfile2D->Close();
  // rajouter outfile.Write() et outfile.Close() pour les 2 pour pas avoir de pb de mémoire ?

  TFile * outfile3D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo3D.root", "RECREATE");
  hcosQ2Enu_evtsA->Write();
  hcosQ2Enu_evtsB->Write();
  outfile3D->Close();
  
}


void AgatheAnalysis::RMS (std::string var)
{

  TFile * infileRMS = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D.root", "OPEN");

  for (int mod : {30, 1, 2, 11, 26, 0}) {
      
    TH1D* hRMS = (TH1D*)(infileRMS->Get(Form("h%s_%d", var.c_str(), mod)));
    
    std::cout << Form("RMS %s %d numérique ", var.c_str(), mod) << hRMS->GetRMS() << std::endl;
    std::cout << Form("RMS %s %d analytique ", var.c_str(), mod) << sqrt ( hRMS->GetMean()*hRMS->GetMean() + hRMS->GetRMS()*hRMS->GetRMS()) << std::endl;

  }

}




// Pour une variable donnée je plot les 4 modes qui nous intéressent + le total
void AgatheAnalysis::plotTH1D (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 1;

  TFile * infile = new TFile("~/Code_agathe/OldFiles/combined_OldFiles/T2KND_FHC_numu_C8H8_NEUT562_11M_NUISFLAT.root", "OPEN");
  TTree * input_tree = (TTree*) infile->Get("tree");
  double scalefactor = input_tree->GetMaximum("fScaleFactor");
  
  TFile * infile1D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D.root", "OPEN"); 
  std::string outfile_numu = "~/Code_agathe/OldFiles/output_OldFiles/output_numu.pdf";
    
  TCanvas *c1D = new TCanvas(Form("histogramme %s", var.c_str()));
  TLegend *leg1D = new TLegend(0.12,0.58,0.27,0.9);

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH1D* hist = (TH1D*)(infile1D->Get(Form("h%s_%d", var.c_str(), mod)));
    gStyle->SetStatX(0);

    if (mod==30){
      hist->Draw("same,hist");
      hist->SetLineColor(color);
      hist->SetLineStyle(kDashed);
      hist->SetLineWidth(3);
      hist->SetTitle(Form(" ; %s; %s", xaxis.c_str(), yaxis.c_str()));
      hist->Scale(scalefactor*pow(10.0,38.0));
    }
    
    else {
      if (color==5){
	color++;
	  }
      
      hist->Draw("same,hist");
      hist->SetLineColor(color);
      hist->SetMarkerSize(0);
      hist->SetLineWidth(2);
      hist->Scale(scalefactor*pow(10.0,38.0));
     
    }

    color++;
  }

  c1D->SetGrid(1,1);
  leg1D->AddEntry(Form("h%s_30",var.c_str()), "Total");
  leg1D->AddEntry(Form("h%s_1",var.c_str()), "CCQE");
  leg1D->AddEntry(Form("h%s_2",var.c_str()), "2p2h");
  leg1D->AddEntry(Form("h%s_11",var.c_str()), "RES");
  leg1D->AddEntry(Form("h%s_26",var.c_str()), "DIS");
  leg1D->Draw();

  c1D->SaveAs(outfile_numu.c_str()); 


}

void AgatheAnalysis::plotTH1DAdd (std::string var, std::string xaxis, std::string yaxis)
{
  
  int color = 2;
  
  TFile * infile1D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D.root", "OPEN"); 
    
  TCanvas *c1DAdd = new TCanvas(Form("histogramme de %s", var.c_str()));
  TLegend *leg1D = new TLegend(0.4,0.5,0.6,0.7);

  THStack *hs = new THStack("hs", Form("histogramme %s", var.c_str()));

  TH1D* histAdd_30 = (TH1D*)(infile1D->Get(Form("h%s_30", var.c_str())));
  TH1D* histAdd_1 = (TH1D*)(infile1D->Get(Form("h%s_1", var.c_str())));
  TH1D* histAdd_2 = (TH1D*)(infile1D->Get(Form("h%s_2", var.c_str())));
  TH1D* histAdd_11 = (TH1D*)(infile1D->Get(Form("h%s_11", var.c_str())));
  TH1D* histAdd_26 = (TH1D*)(infile1D->Get(Form("h%s_26", var.c_str())));

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0

  hs->Add(histAdd_2);
  histAdd_2->SetFillColor(6);
  histAdd_2->SetLineWidth(1);
  
  hs->Add(histAdd_26);
  histAdd_26->SetFillColor(3);
  histAdd_26->SetLineWidth(1);
  
  hs->Add(histAdd_11);
  histAdd_11->SetFillColor(4);
  histAdd_11->SetLineWidth(1);

  hs->Add(histAdd_1);
  histAdd_1->SetFillColor(2);
  histAdd_1->SetLineWidth(1);

  c1DAdd->SetGrid(1,1);
  hs->Draw();

  histAdd_30->Draw("SAME");
  histAdd_30->SetLineColor(1);
  histAdd_30->SetLineWidth(3);
  histAdd_30->SetLineStyle(kDashed);
  
  hs->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
  leg1D->AddEntry(histAdd_30, "Total");
  leg1D->AddEntry(histAdd_1, "CCQE");
  leg1D->AddEntry(histAdd_2, "2p2h");
  leg1D->AddEntry(histAdd_11, "RES");
  leg1D->AddEntry(histAdd_26, "DIS");
  leg1D->Draw();


}


//Pour une variable donnée, la fonction ressort un canvas avec les 4 modes étudiés et un autre canvas avec tous les modes
void AgatheAnalysis::plotTH2D (std::string var, std::string xaxis, std::string yaxis)
{
  
  TFile * infile2D = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "OPEN");
  int cpt=0;
    
  TCanvas *c2D = new TCanvas(Form("histogramme %s", var.c_str()));
  c2D->Divide(2,2,0.01,0.01);

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH2D* hist2D = (TH2D*)(infile2D->Get(Form("h%s_%d", var.c_str(), mod)));

    if (mod==30){
      TCanvas *c2D_tot = new TCanvas(Form("histogramme %s mode %d", var.c_str(),mod));
      hist2D->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
      hist2D->Draw("COLZ");

    }

    else {
      c2D->cd(cpt);
      c2D-> cd(cpt)->SetGrid(1,1);
      hist2D->Draw("COLZ");
      //hist2D->SetTitle(Form("histogramme %s mode %d", var.c_str(),mod));
      hist2D->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
    }
    cpt++;
      
 
    }
  c2D->SetGrid(1,1);


}


// Pour une variable donnée je plot les 4 modes qui nous intéressent + le total sur un canvas
void AgatheAnalysis::plotTH2D_total (std::string var, std::string xaxis, std::string yaxis)
{

  int color = 1;
  
  TFile * infile2Dtot = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "OPEN"); 
    
  TCanvas *c2Dtot = new TCanvas(Form("histogramme %s tot", var.c_str()));
  TLegend *leg2Dtot = new TLegend(0.4,0.5,0.6,0.7);

  // tot = 30, CCQE = 1, 2p2h = 2, RES = 11, DIS = 26, Others = 0
  for (int mod : {30, 1, 26, 11, 2}) {
      
    TH2D* hist2Dtot = (TH2D*)(infile2Dtot->Get(Form("h%s_%d", var.c_str(), mod)));
    
    if(mod==30){
      hist2Dtot->Draw("COLZ");
      hist2Dtot->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
	}
    else {

      if (color==5){
	color++;
	  }
    
    hist2Dtot->Draw("SAME,CONT2");
    hist2Dtot->SetTitle(Form("histogramme %s mode %d; %s; %s", var.c_str(), mod, xaxis.c_str(), yaxis.c_str()));
    hist2Dtot->SetLineColor(color);
 
    }

    //hist->Write();

    color++;
  }
  c2Dtot->SetGrid(1,1);
  leg2Dtot->AddEntry(Form("h%s_30",var.c_str()), "Total");
  leg2Dtot->AddEntry(Form("h%s_1",var.c_str()), "CCQE");
  leg2Dtot->AddEntry(Form("h%s_2",var.c_str()), "2p2h");
  leg2Dtot->AddEntry(Form("h%s_11",var.c_str()), "RES");
  leg2Dtot->AddEntry(Form("h%s_26",var.c_str()), "DIS");
  leg2Dtot->Draw();


}


void AgatheAnalysis::plotTH2D_tot_modif ()
{

  TFile * infile2Dtot_modif = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "OPEN"); 
    
  TCanvas *c2Dtot_modif = new TCanvas("histogramme q0q3 tot");
  //TLegend *leg2Dtot_modif = new TLegend(0.4,0.5,0.6,0.7);
  
  TH2D* hist2Dtot_tot = (TH2D*)(infile2Dtot_modif->Get("hq0q3_30"));
  TH2D* hist2Dtot_ccqe = (TH2D*)(infile2Dtot_modif->Get("hq0q3_1"));
  TH2D* hist2Dtot_2p2h = (TH2D*)(infile2Dtot_modif->Get("hq0q3_2"));
  TH2D* hist2Dtot_DIS = (TH2D*)(infile2Dtot_modif->Get("hq0q3_26"));
  TH2D* hist2Dtot_RES = (TH2D*)(infile2Dtot_modif->Get("hq0q3_11"));
							      

  hist2Dtot_tot->Draw("COLZ");
  hist2Dtot_tot->SetTitle("histogramme q0q3 tous modes; q_{3} (GeV); q_{0} (GeV)");
  //hist2Dtot_tot->SetTitle(Form("histogramme %s tous modes; %s; %s", var.c_str(), xaxis.c_str(), yaxis.c_str()));
    
  hist2Dtot_ccqe->Draw("SAME,CONT2");
  hist2Dtot_ccqe->SetLineColor(16);

  
  hist2Dtot_RES->Draw("SAME,CONT2");
  hist2Dtot_RES->SetLineColor(16);

  
  
  hist2Dtot_2p2h->Draw("SAME,CONT2");
  hist2Dtot_2p2h->SetLineColor(16);

  
  
  hist2Dtot_DIS->Draw("SAME,CONT2");
  hist2Dtot_DIS->SetLineColor(3);
  

  c2Dtot_modif->SetGrid(1,1);
  /*
  leg2Dtot->AddEntry(Form("h%s_30",var.c_str()), "Total");
  leg2Dtot->AddEntry(Form("h%s_1",var.c_str()), "CCQE");
  leg2Dtot->AddEntry(Form("h%s_2",var.c_str()), "2p2h");
  leg2Dtot->AddEntry(Form("h%s_11",var.c_str()), "RES");
  leg2Dtot->AddEntry(Form("h%s_26",var.c_str()), "DIS");
  leg2Dtot->AddEntry(Form("h%s_0",var.c_str()), "Other");
  leg2Dtot->Draw();
  */


}




void AgatheAnalysis::plotTH2D_evt(){

  TFile * infile2Devt = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "OPEN");        
  TH2D* hint = (TH2D*)(infile2Devt->Get("hcosQ2_1"));
  
  TCanvas *c2Dint = new TCanvas("histogramme cosQ2 total");

    // Draw the histogram
    hint->Draw("COLZ");

    // Create a copy of the histogram to draw the contour
    TH2D* histForContour = (TH2D*)hint->Clone();

    // Set the contour levels
    histForContour->SetContour(2);
    double levels[2] = {200, 700};
    histForContour->SetContour(2, levels);

    // Draw the contour
    histForContour->Draw("CONT3 SAME");  

}


void AgatheAnalysis::plot_evts(){
  
  TFile * infile_evt = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo2D.root", "OPEN");
  TH2D* hcosQ2_CCQE = (TH2D*)(infile_evt->Get("hcosQ2_1"));
  TH2D* hcosQ2_A = (TH2D*)(infile_evt->Get("hcosQ2_evtsA"));
  TH2D* hcosQ2_B = (TH2D*)(infile_evt->Get("hcosQ2_evtsB"));

  TFile * infile3D_evt = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo3D.root", "OPEN");        
  TH2D* hcosQ2Enu_A = (TH2D*)(infile3D_evt->Get("hcosQ2Enu_evtsA"));
  TH2D* hcosQ2Enu_B = (TH2D*)(infile3D_evt->Get("hcosQ2Enu_evtsB"));
  
  TFile * infile1D_evt = new TFile("~/Code_agathe/OldFiles/histograms_OldFiles/histo1D.root", "OPEN");        
  TH1D* hEnu_A = (TH1D*)(infile1D_evt->Get("hEnu_evtsA"));
  TH1D* hEnu_B = (TH1D*)(infile1D_evt->Get("hEnu_evtsB"));
  TH1D* hq0_A = (TH1D*)(infile1D_evt->Get("hq0_evtsA"));
  TH1D* hq0_B = (TH1D*)(infile1D_evt->Get("hq0_evtsB"));
  TH1D* hq3_A = (TH1D*)(infile1D_evt->Get("hq3_evtsA"));
  TH1D* hq3_B = (TH1D*)(infile1D_evt->Get("hq3_evtsB"));
  TH1D* hQ2_A = (TH1D*)(infile1D_evt->Get("hQ2_evtsA"));
  TH1D* hQ2_B = (TH1D*)(infile1D_evt->Get("hQ2_evtsB"));

  TH1D *hEnuA_norm = new TH1D("hEnuA_norm","histogramme Enu de ces evts A CCQE normalise", 100,0,5);
  TH1D *hEnuB_norm = new TH1D("hEnuB_norm","histogramme Enu de ces evts B CCQE normalise", 100,0,5);
  TH1D *hq0A_norm = new TH1D("hq0A_norm","histogramme q0 de ces evts A CCQE normalise", 100,0,5);
  TH1D *hq0B_norm = new TH1D("hq0B_norm","histogramme q0 de ces evts B CCQE normalise", 100,0,5);
  TH1D *hq3A_norm = new TH1D("hq3A_norm","histogramme q3 de ces evts A CCQE normalise", 100,0,5);
  TH1D *hq3B_norm = new TH1D("hq3B_norm","histogramme q3 de ces evts B CCQE normalise", 100,0,5);
  TH1D *hQ2A_norm = new TH1D("hQ2A_norm","histogramme Q2 de ces evts A CCQE normalise", 100,0,5);
  TH1D *hQ2B_norm = new TH1D("hQ2B_norm","histogramme Q2 de ces evts B CCQE normalise", 100,0,5);

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

    /*
    if (abs(contentEnu_A - contentEnu_B)<pow(10.0,-6.0)){
      std::cout << i << std::endl;
      std::cout << "Enu =  " << contentEnu_A << std::endl;
      std::cout <<"Pop A : " << " q0 = " << hq0_A->GetBinContent(i) << " q3 = " << hq3_A->GetBinContent(i) <<std::endl;
      std::cout <<"Pop B : " << " q0 = " << hq0_B->GetBinContent(i) << " q3 = " << hq3_B->GetBinContent(i) <<std::endl;
     }
    if (abs(contentQ2_A - contentQ2_B)<pow(10.0,-6.0)){
      std::cout << "Q2 =  " << contentQ2_A << std::endl;
      std::cout <<"Pop A : " << " q0 = " << hq0_A->GetBinContent(i) << " q3 = " << hq3_A->GetBinContent(i) <<std::endl;
      std::cout <<"Pop B : " << " q0 = " << hq0_B->GetBinContent(i) << " q3 = " << hq3_B->GetBinContent(i) <<std::endl;
     }
    */

    
    
  }

  std::cout << hEnuA_norm->Integral() << std::endl;
 

  TF1 * droite = new TF1("droite", "-0.27*x+0.99", 0, 0.5);

  TCanvas *ccosQ2_CCQE = new TCanvas("histogramme coslep en fonction de Q2 pour CCQE");
  //hcosQ2_CCQE->Draw("COLZ");
  //droite->Draw("SAME");
  ccosQ2_CCQE->SetGrid(1,1);

  TCanvas *ccosQ2A = new TCanvas("histogramme coslep en fonction de Q2 pour evts A");
  hcosQ2_A->Draw("COLZ");

  TCanvas *ccosQ2B = new TCanvas("histogramme coslep en fonction de Q2 pour evts B");
  hcosQ2_B->Draw("COLZ");

  TCanvas *ccosQ2Enu = new TCanvas("histogramme Enu en fonction de coslep en fonction de Q2 pour evts A et B");
  //hcosQ2Enu_A->Draw("LEGO2Z");
  //hcosQ2Enu_B->Draw("SAME,LEGO2Z");

  TCanvas *cEnu = new TCanvas("histogramme Enu pour evts A et B");
  hEnuA_norm->SetLineWidth(2);
  hEnuA_norm->SetLineColor(1);
  hEnuA_norm->Draw();
  hEnuB_norm->SetLineWidth(2);
  hEnuB_norm->SetLineColor(2);
  hEnuB_norm->Draw("SAME");

  TCanvas *cq0 = new TCanvas("histogramme q0 pour evts A et B");
  hq0A_norm->SetLineWidth(2);
  hq0A_norm->SetLineColor(1);
  hq0A_norm->Draw();
  hq0B_norm->SetLineWidth(2);
  hq0B_norm->SetLineColor(2);
  hq0B_norm->Draw("SAME");

  TCanvas *cq3 = new TCanvas("histogramme q3 pour evts A et B");
  hq3A_norm->SetLineWidth(2);
  hq3A_norm->SetLineColor(1);
  hq3A_norm->Draw();
  hq3B_norm->SetLineWidth(2);
  hq3B_norm->SetLineColor(2);
  hq3B_norm->Draw("SAME");

  TCanvas *cQ2 = new TCanvas("histogramme Q2 pour evts A et B");
  hQ2A_norm->SetLineWidth(2);
  hQ2A_norm->SetLineColor(1);
  hQ2A_norm->Draw();
  hQ2B_norm->SetLineWidth(2);
  hQ2B_norm->SetLineColor(2);
  hQ2B_norm->Draw("SAME");
  
  
}



    
void AgatheAnalysis::plotAll()
{
    
  plotTH1D("Enu", "E_{#nu} (GeV)", "number of #nu_{#mu} interactions ");

  /*
  plotTH1D("q0", "q_{0} (GeV)", " ");
  plotTH1D("q3", "q_{3} (GeV)", " ");
  plotTH1D("Q2", "Q^{2} (GeV)", " ");
  
 
  plotTH1DAdd("q0", "q_{0} (GeV)", " ");
  plotTH1DAdd("q3", "q_{3} (GeV)", " ");
  plotTH1DAdd("Q2", "Q^{2} (GeV)", " ");

  
  plotTH1D("cos", "cos(#theta)", "bin"); //histogramme 1D de l'angle du lepton par rapport à la direction du faisceau
  plotTH1D("ELep", "E_lepton (GeV)", "bin");
  plotTH1DAdd("cos", "cos(#theta)", "bin"); 
  plotTH1DAdd("ELep", "E_lepton (GeV)", "bin");
  */

  
  //plotTH2D("cosQ2", "Q^{2} (GeV)", "cos(#theta)"); //histogramme 2D de cos_lepton en fonction de Q2
  plot_evts();
  //plotTH2D_tot("cosQ2", "Q^{2} (GeV)", "cos(#theta)");

  //plotTH2D("Q2QE", "Q^{2}_{QE} (GeV)", "Q^{2} (GeV)");
  
  
  /*
  plotTH1D("Q2comp", "Q^{2} - Q^{2}_{QE} (GeV)", "bin"); //histogramme 1D de Q2 - Q2_QE
  plotTH1D("Enucomp", "E_{#nu}^{true} - E_{#nu}^{QE} (GeV)", "bin"); //histogramme 1D de Enu_true - Enu_QE
  plotTH2D("EnuQE", "E_{#nu}^{QE} (GeV)", "E_{#nu}^{true} (GeV)"); //histogramme 2D de Enu_true en fonction de Enu_QE
  plotTH2D_tot("EnuQE", "E_{#nu}^{QE} (GeV)", "E_{#nu}^{true} (GeV)");
  plotTH2D("Q2QE", "Q^{2}_{QE} (GeV)", "Q^{2} (GeV)"); //histogramme 2D de Q2 en fonction de Q2_QE
  */
  /*
  plotTH2D("cosEnu", "E_{#nu} (GeV)", "cos(#theta)"); //histogramme 2D de cos_lepton en fonction de Enu_true
  plotTH2D("cosQ2", "Q^{2} (GeV)", "cos(#theta)"); //histogramme 2D de cos_lepton en fonction de Q2
  plotTH2D_tot("cosQ2", "Q^{2} (GeV)", "cos(#theta)");
  plotTH2D("cosq0", "q_{0} (GeV)", "cos(#theta)");
  //plotTH2D("EnuQE", "Enu_QE (GeV)", "Enu_true (GeV)"); //histogramme 2D de Enu_true en fonction de Enu_QE
  //plotTH2D_tot("EnuQE", "Enu_QE (GeV)", "Enu_true (GeV)");
  //plotTH2D("Q2QE", "Q2_QE (GeV)", "Q2 (GeV)"); //histogramme 2D de Q2 en fonction de Q2_QE
  
  
  //plotTH2D("q0q3", "q_{3} (GeV)", "q_{0} (GeV)"); //histogramme 2D de q0 en fonction de q3
  //plotTH2D_tot("q0q3", "q_{3} (GeV)", "q_{0} (GeV)");
  */
 
}





