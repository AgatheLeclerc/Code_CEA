#include "Flat_nu_e_nu_mu.h"


void AgatheAnalysis::combine_newfiles_flatnue(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nue_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and tree
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
     if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }
    TTree* outputTree = new TTree("tree", "Combined tree");
    
    int Mode_e;
    float q0_e;
    float q3_e;
    float Q2_e;
    float coslep_e;
    float ELep_e;
    float Q2_QE_e;
    float Enu_true_e;
    float Enu_QE_e;
    double fScaleFactor_e;

    const int nmax = 25;
    int nfsp_e;
    float E_e[nmax];
    float px_e[nmax];
    float py_e[nmax];
    float pz_e[nmax];
    int pdg_e[nmax];    
    
    outputTree->Branch("Mode",&Mode_e,"Mode/I");
    outputTree->Branch("q0",&q0_e,"q0/F"); //Definit les variables du Tree
    outputTree->Branch("q3",&q3_e,"q3/F");
    outputTree->Branch("Q2",&Q2_e,"Q2/F");
    outputTree->Branch("CosLep",&coslep_e,"CosLep/F");
    outputTree->Branch("ELep",&ELep_e,"ELep/F");
    outputTree->Branch("Q2_QE",&Q2_QE_e,"Q2_QE/F");
    outputTree->Branch("Enu_QE",&Enu_QE_e,"Enu_QE/F");
    outputTree->Branch("Enu_true",&Enu_true_e, "Enu_true/F");
    outputTree->Branch("fScaleFactor", &fScaleFactor_e, "fScaleFactor/D");

    outputTree->Branch("nfsp",&nfsp_e, "nfsp/I");
    outputTree->Branch("E", E_e, "E[nfsp]/F");
    outputTree->Branch("px", px_e, "px[nfsp]/F");
    outputTree->Branch("py", py_e, "py[nfsp]/F");
    outputTree->Branch("pz", pz_e, "pz[nfsp]/F");
    outputTree->Branch("pdg", pdg_e, "pdg[nfsp]/I");
        
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }

	std::cout << "File n° " << i << std::endl;

        // Get the tree from the input file
        TTree* inputTree = (TTree*)inputFile->Get("FlatTree_VARS"); 
        if (!inputTree) {
            std::cerr << "Error getting tree from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

        // Set the branch address 
        float inputEnu;
	int inputMode;
	float inputq0;
	float inputq3;
	float inputQ2;
	float inputcoslep;
	float inputELep;
	float inputQ2_QE;
	float inputEnu_QE;
	double inputfScaleFactor;

	int inputnfsp;
	
	float inputE[nmax];
	float inputpx[nmax];
	float inputpy[nmax];
	float inputpz[nmax];
	int inputpdg[nmax];
	
  inputTree->SetBranchAddress("Enu_true", &inputEnu);
	inputTree->SetBranchAddress("Mode",&inputMode);
	inputTree->SetBranchAddress("q0",&inputq0); //Definit les variables du Tree
	inputTree->SetBranchAddress("q3",&inputq3);
	inputTree->SetBranchAddress("Q2",&inputQ2);
	inputTree->SetBranchAddress("CosLep",&inputcoslep);
	inputTree->SetBranchAddress("ELep",&inputELep);
	inputTree->SetBranchAddress("Q2_QE",&inputQ2_QE);
	inputTree->SetBranchAddress("Enu_QE",&inputEnu_QE);
	inputTree->SetBranchAddress("fScaleFactor",&inputfScaleFactor);
	
	inputTree->SetBranchAddress("E",&inputE);
	inputTree->SetBranchAddress("px",&inputpx);
	inputTree->SetBranchAddress("py",&inputpy);
	inputTree->SetBranchAddress("pz",&inputpz);
	inputTree->SetBranchAddress("pdg",&inputpdg);
	inputTree->SetBranchAddress("nfsp",&inputnfsp);
	
        // Copy the entries from the input tree to the output tree
        Long64_t nEntries = inputTree->GetEntries();
        for (Long64_t j = 0; j < nEntries; ++j) {
            inputTree->GetEntry(j);

	    Enu_true_e = inputEnu;
	    Mode_e = inputMode;
	    q0_e = inputq0;
	    q3_e = inputq3;
	    Q2_e = inputQ2;
	    coslep_e = inputcoslep;
	    ELep_e = inputELep;
	    Q2_QE_e = inputQ2_QE;
	    Enu_QE_e = inputEnu_QE;
	    fScaleFactor_e = inputfScaleFactor;
	    
	    nfsp_e = inputnfsp;
	    
	    for (int k = 0; k<inputnfsp; ++k){
	      
	      E_e[k] = inputE[k];
	      px_e[k] = inputpx[k];
	      py_e[k] = inputpy[k];
	      pz_e[k] = inputpz[k];
	      pdg_e[k] = inputpdg[k];
	    }	      
	    outputTree->Fill();
	    
	    
        }

	

        // Close the input file
        inputFile->Close();
    }


    
    // Ensure the output file is the current directory before writing the tree
    outputFile->cd();
    // Write the output tree to the file
    outputTree->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}


void AgatheAnalysis::combine_newflux_flatnue(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nue_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_nue_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and flux
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
     if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }

     TH1D* outputFlux = new TH1D("outputFlux", "Combined flux", 95, 0.1,2);
    
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }

	std::cout << "File n° " << i << std::endl;

        // Get the flux from the input file
        TH1D* inputFlux = (TH1D*)inputFile->Get("FlatTree_FLUX"); 
        if (!inputFlux) {
            std::cerr << "Error getting flux from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

/*
	    float Integrale = inputFlux -> Integral();
      std::cout << "integral = " << Integrale << std::endl;
      TH1D* hflux_norm = new TH1D("hflux_norm", "histo flux normalise", 95, 0.1,2);

      for (int j=1; j<=95; j++){
        double hfluxContent = inputFlux->GetBinContent(j);
        hflux_norm->SetBinContent(j, hfluxContent/(10*Integrale));
      }
      std::cout << "integral norm = " << hflux_norm->Integral() << std::endl;
*/

	outputFlux->Add(inputFlux);
	//outputFlux->Scale(1/Integrale);
	//std::cout << "integral = " << Integrale << std::endl;

        // Close the input file
        inputFile->Close();
    }


    
    // Ensure the output file is the current directory before writing the flux
    outputFile->cd();
    // Write the output flux to the file
    outputFlux->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}


void AgatheAnalysis::combine_newfiles_flatnumu(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numu_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and tree
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
    if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }
    TTree* outputTree = new TTree("tree", "Combined tree");

    int Mode_mu;
    float q0_mu;
    float q3_mu;
    float Q2_mu;
    float coslep_mu;
    float ELep_mu;
    float Q2_QE_mu;
    float Enu_true_mu;
    float Enu_QE_mu;
    double fScaleFactor_mu;

    const int nmax = 25;
    int nfsp_mu;
    float E_mu[nmax];
    float px_mu[nmax];
    float py_mu[nmax];
    float pz_mu[nmax];
    int pdg_mu[nmax];    
    
    outputTree->Branch("Mode",&Mode_mu,"Mode/I");
    outputTree->Branch("q0",&q0_mu,"q0/F"); //Definit les variables du Tree
    outputTree->Branch("q3",&q3_mu,"q3/F");
    outputTree->Branch("Q2",&Q2_mu,"Q2/F");
    outputTree->Branch("CosLep",&coslep_mu,"CosLep/F");
    outputTree->Branch("ELep",&ELep_mu,"ELep/F");
    outputTree->Branch("Q2_QE",&Q2_QE_mu,"Q2_QE/F");
    outputTree->Branch("Enu_QE",&Enu_QE_mu,"Enu_QE/F");
    outputTree->Branch("Enu_true",&Enu_true_mu, "Enu_true/F");
    outputTree->Branch("fScaleFactor", &fScaleFactor_mu, "fScaleFactor/D");

    outputTree->Branch("nfsp",&nfsp_mu, "nfsp/I");
    outputTree->Branch("E", E_mu, "E[nfsp]/F");
    outputTree->Branch("px", px_mu, "px[nfsp]/F");
    outputTree->Branch("py", py_mu, "py[nfsp]/F");
    outputTree->Branch("pz", pz_mu, "pz[nfsp]/F");
    outputTree->Branch("pdg", pdg_mu, "pdg[nfsp]/I");
  
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }
	std::cout << "File n° " << i << std::endl;

        // Get the tree from the input file
        TTree* inputTree = (TTree*)inputFile->Get("FlatTree_VARS"); 
        if (!inputTree) {
            std::cerr << "Error getting tree from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

        // Set the branch address for Enu
	
        float inputEnu;
	int inputMode;
	float inputq0;
	float inputq3;
	float inputQ2;
	float inputcoslep;
	float inputELep;
	float inputQ2_QE;
	float inputEnu_QE;
	double inputfScaleFactor;

	int inputnfsp;
	
	float inputE[nmax];
	float inputpx[nmax];
	float inputpy[nmax];
	float inputpz[nmax];
	int inputpdg[nmax];
	
        inputTree->SetBranchAddress("Enu_true", &inputEnu);
	inputTree->SetBranchAddress("Mode",&inputMode);
	inputTree->SetBranchAddress("q0",&inputq0); //Definit les variables du Tree
	inputTree->SetBranchAddress("q3",&inputq3);
	inputTree->SetBranchAddress("Q2",&inputQ2);
	inputTree->SetBranchAddress("CosLep",&inputcoslep);
	inputTree->SetBranchAddress("ELep",&inputELep);
	inputTree->SetBranchAddress("Q2_QE",&inputQ2_QE);
	inputTree->SetBranchAddress("Enu_QE",&inputEnu_QE);
	inputTree->SetBranchAddress("fScaleFactor", &inputfScaleFactor);

	inputTree->SetBranchAddress("E",&inputE);
	inputTree->SetBranchAddress("px",&inputpx);
	inputTree->SetBranchAddress("py",&inputpy);
	inputTree->SetBranchAddress("pz",&inputpz);
	inputTree->SetBranchAddress("pdg",&inputpdg);
	inputTree->SetBranchAddress("nfsp",&inputnfsp);
	
        // Copy the entries from the input tree to the output tree
        Long64_t nEntries = inputTree->GetEntries();
        for (Long64_t j = 0; j < nEntries; ++j) {
            inputTree->GetEntry(j);

	    if (inputEnu < 2){
	      Enu_true_mu = inputEnu;
	      Mode_mu = inputMode;
	      q0_mu = inputq0;
	      q3_mu= inputq3;
	      Q2_mu = inputQ2;
	      coslep_mu = inputcoslep;
	      ELep_mu = inputELep;
	      Q2_QE_mu = inputQ2_QE;
	      Enu_QE_mu = inputEnu_QE;
	      fScaleFactor_mu = inputfScaleFactor;

	      nfsp_mu = inputnfsp;
	    
	    for (int k = 0; k<inputnfsp; ++k){
	      
	      E_mu[k] = inputE[k];
	      px_mu[k] = inputpx[k];
	      py_mu[k] = inputpy[k];
	      pz_mu[k] = inputpz[k];
	      pdg_mu[k] = inputpdg[k];
	    }	      
	    
	      outputTree->Fill();
	    }
        }

        // Close the input file
        inputFile->Close();
    }

    // Ensure the output file is the current directory before writing the tree
    outputFile->cd();
    // Write the output tree to the file
    outputTree->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}



void AgatheAnalysis::combine_newflux_flatnumu(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numu_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_numu_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and flux
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
     if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }

     TH1D* outputFlux = new TH1D("outputFlux", "Combined flux", 95, 0.1,2);
    
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }

	std::cout << "File n° " << i << std::endl;

        // Get the flux from the input file
        TH1D* inputFlux = (TH1D*)inputFile->Get("FlatTree_FLUX"); 
        if (!inputFlux) {
            std::cerr << "Error getting flux from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

	float Integrale = inputFlux -> Integral();

	outputFlux->Add(inputFlux);
	outputFlux->Scale(1/Integrale);
	std::cout << "integral = " << Integrale << std::endl;

        // Close the input file
        inputFile->Close();
    }


    
    // Ensure the output file is the current directory before writing the flux
    outputFile->cd();
    // Write the output flux to the file
    outputFlux->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}



void AgatheAnalysis::combine_newfiles_flatnuebar(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and tree
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
    if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }
    TTree* outputTree = new TTree("tree", "Combined tree");
  
    float Enu_true_ebar;
    int Mode_ebar;
    float q0_ebar;
    float q3_ebar;
    float Q2_ebar;
    float coslep_ebar;
    float ELep_ebar;
    float Q2_QE_ebar;
    float Enu_QE_ebar;
    double fScaleFactor_ebar;

    const int nmax = 25;
    int nfsp_ebar;
    float E_ebar[nmax];
    float px_ebar[nmax];
    float py_ebar[nmax];
    float pz_ebar[nmax];
    int pdg_ebar[nmax];    

    
    outputTree->Branch("Mode",&Mode_ebar,"Mode/I");
    outputTree->Branch("q0",&q0_ebar,"q0/F"); //Definit les variables du Tree
    outputTree->Branch("q3",&q3_ebar,"q3/F");
    outputTree->Branch("Q2",&Q2_ebar,"Q2/F");
    outputTree->Branch("CosLep",&coslep_ebar,"CosLep/F");
    outputTree->Branch("ELep",&ELep_ebar,"ELep/F");
    outputTree->Branch("Q2_QE",&Q2_QE_ebar,"Q2_QE/F");
    outputTree->Branch("Enu_QE",&Enu_QE_ebar,"Enu_QE/F");
    outputTree->Branch("Enu_true",&Enu_true_ebar, "Enu_true/F");
    outputTree->Branch("fScaleFactor", &fScaleFactor_ebar, "fScaleFactor/D");

    outputTree->Branch("nfsp",&nfsp_ebar, "nfsp/I");
    outputTree->Branch("E", E_ebar, "E[nfsp]/F");
    outputTree->Branch("px", px_ebar, "px[nfsp]/F");
    outputTree->Branch("py", py_ebar, "py[nfsp]/F");
    outputTree->Branch("pz", pz_ebar, "pz[nfsp]/F");
    outputTree->Branch("pdg", pdg_ebar, "pdg[nfsp]/I");
      
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }
	std::cout << "File n° " << i << std::endl;

        // Get the tree from the input file
        TTree* inputTree = (TTree*)inputFile->Get("FlatTree_VARS"); 
        if (!inputTree) {
            std::cerr << "Error getting tree from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

        // Set the branch address for Enu
        float inputEnu;
	int inputMode;
	float inputq0;
	float inputq3;
	float inputQ2;
	float inputcoslep;
	float inputELep;
	float inputQ2_QE;
	float inputEnu_QE;
	double inputfScaleFactor;

	int inputnfsp;
	
	float inputE[nmax];
	float inputpx[nmax];
	float inputpy[nmax];
	float inputpz[nmax];
	int inputpdg[nmax];
	
        inputTree->SetBranchAddress("Enu_true", &inputEnu);
	inputTree->SetBranchAddress("Mode",&inputMode);
	inputTree->SetBranchAddress("q0",&inputq0); //Definit les variables du Tree
	inputTree->SetBranchAddress("q3",&inputq3);
	inputTree->SetBranchAddress("Q2",&inputQ2);
	inputTree->SetBranchAddress("CosLep",&inputcoslep);
	inputTree->SetBranchAddress("ELep",&inputELep);
	inputTree->SetBranchAddress("Q2_QE",&inputQ2_QE);
	inputTree->SetBranchAddress("Enu_QE",&inputEnu_QE);
	inputTree->SetBranchAddress("fScaleFactor", &inputfScaleFactor);

	inputTree->SetBranchAddress("E",&inputE);
	inputTree->SetBranchAddress("px",&inputpx);
	inputTree->SetBranchAddress("py",&inputpy);
	inputTree->SetBranchAddress("pz",&inputpz);
	inputTree->SetBranchAddress("pdg",&inputpdg);
	inputTree->SetBranchAddress("nfsp",&inputnfsp);
	
        // Copy the entries from the input tree to the output tree
        Long64_t nEntries = inputTree->GetEntries();
        for (Long64_t j = 0; j < nEntries; ++j) {
            inputTree->GetEntry(j);

	    if (inputEnu < 2){
	      Enu_true_ebar = inputEnu;
	      Mode_ebar = inputMode;
	      q0_ebar = inputq0;
	      q3_ebar = inputq3;
	      Q2_ebar = inputQ2;
	      coslep_ebar = inputcoslep;
	      ELep_ebar = inputELep;
	      Q2_QE_ebar = inputQ2_QE;
	      Enu_QE_ebar = inputEnu_QE;
	      fScaleFactor_ebar = inputfScaleFactor;

	      nfsp_ebar = inputnfsp;
	    
	      for (int k = 0; k<inputnfsp; ++k){
	      
		E_ebar[k] = inputE[k];
		px_ebar[k] = inputpx[k];
		py_ebar[k] = inputpy[k];
		pz_ebar[k] = inputpz[k];
		pdg_ebar[k] = inputpdg[k];
	      }	      
	      
	      outputTree->Fill();
	    }
        }

        // Close the input file
        inputFile->Close();
    }

    // Ensure the output file is the current directory before writing the tree
    outputFile->cd();
    // Write the output tree to the file
    outputTree->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}


void AgatheAnalysis::combine_newflux_flatnuebar(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_nuebar_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_nuebar_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and flux
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
     if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }

     TH1D* outputFlux = new TH1D("outputFlux", "Combined flux", 95, 0.1,2);
    
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }

	std::cout << "File n° " << i << std::endl;

        // Get the flux from the input file
        TH1D* inputFlux = (TH1D*)inputFile->Get("FlatTree_FLUX"); 
        if (!inputFlux) {
            std::cerr << "Error getting flux from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

	float Integrale = inputFlux -> Integral();

	outputFlux->Add(inputFlux);
	outputFlux->Scale(1/Integrale);
	std::cout << "integral = " << Integrale << std::endl;

        // Close the input file
        inputFile->Close();
    }


    
    // Ensure the output file is the current directory before writing the flux
    outputFile->cd();
    // Write the output flux to the file
    outputFlux->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}




void AgatheAnalysis::combine_newfiles_flatnumubar(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and tree
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
    if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }
    TTree* outputTree = new TTree("tree", "Combined tree");
  
    float Enu_true_mubar;
    int Mode_mubar;
    float q0_mubar;
    float q3_mubar;
    float Q2_mubar;
    float coslep_mubar;
    float ELep_mubar;
    float Q2_QE_mubar;
    float Enu_QE_mubar;
    double fScaleFactor_mubar;

    const int nmax = 25;
    int nfsp_mubar;
    float E_mubar[nmax];
    float px_mubar[nmax];
    float py_mubar[nmax];
    float pz_mubar[nmax];
    int pdg_mubar[nmax];    

    
    outputTree->Branch("Mode",&Mode_mubar,"Mode/I");
    outputTree->Branch("q0",&q0_mubar,"q0/F"); //Definit les variables du Tree
    outputTree->Branch("q3",&q3_mubar,"q3/F");
    outputTree->Branch("Q2",&Q2_mubar,"Q2/F");
    outputTree->Branch("CosLep",&coslep_mubar,"CosLep/F");
    outputTree->Branch("ELep",&ELep_mubar,"ELep/F");
    outputTree->Branch("Q2_QE",&Q2_QE_mubar,"Q2_QE/F");
    outputTree->Branch("Enu_QE",&Enu_QE_mubar,"Enu_QE/F");
    outputTree->Branch("Enu_true",&Enu_true_mubar, "Enu_true/F");
    outputTree->Branch("fScaleFactor", &fScaleFactor_mubar, "fScaleFactor/D");

    outputTree->Branch("nfsp",&nfsp_mubar, "nfsp/I");
    outputTree->Branch("E", E_mubar, "E[nfsp]/F");
    outputTree->Branch("px", px_mubar, "px[nfsp]/F");
    outputTree->Branch("py", py_mubar, "py[nfsp]/F");
    outputTree->Branch("pz", pz_mubar, "pz[nfsp]/F");
    outputTree->Branch("pdg", pdg_mubar, "pdg[nfsp]/I");

    //TH1D* combinedHist = nullptr;
      
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
      
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }
	std::cout << "File n° " << i << std::endl;

        // Get the tree from the input file
        TTree* inputTree = (TTree*)inputFile->Get("FlatTree_VARS"); 
        if (!inputTree) {
            std::cerr << "Error getting tree from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

        // Set the branch address for Enu
        float inputEnu;
	int inputMode;
	float inputq0;
	float inputq3;
	float inputQ2;
	float inputcoslep;
	float inputELep;
	float inputQ2_QE;
	float inputEnu_QE;
	double inputfScaleFactor;

	int inputnfsp;
	
	float inputE[nmax];
	float inputpx[nmax];
	float inputpy[nmax];
	float inputpz[nmax];
	int inputpdg[nmax];
	
  inputTree->SetBranchAddress("Enu_true", &inputEnu);
	inputTree->SetBranchAddress("Mode",&inputMode);
	inputTree->SetBranchAddress("q0",&inputq0); //Definit les variables du Tree
	inputTree->SetBranchAddress("q3",&inputq3);
	inputTree->SetBranchAddress("Q2",&inputQ2);
	inputTree->SetBranchAddress("CosLep",&inputcoslep);
	inputTree->SetBranchAddress("ELep",&inputELep);
	inputTree->SetBranchAddress("Q2_QE",&inputQ2_QE);
	inputTree->SetBranchAddress("Enu_QE",&inputEnu_QE);
	inputTree->SetBranchAddress("fScaleFactor",&inputfScaleFactor);

	inputTree->SetBranchAddress("E",&inputE);
	inputTree->SetBranchAddress("px",&inputpx);
	inputTree->SetBranchAddress("py",&inputpy);
	inputTree->SetBranchAddress("pz",&inputpz);
	inputTree->SetBranchAddress("pdg",&inputpdg);
	inputTree->SetBranchAddress("nfsp",&inputnfsp);
	
        // Copy the entries from the input tree to the output tree
        Long64_t nEntries = inputTree->GetEntries();
        for (Long64_t j = 0; j < nEntries; ++j) {
            inputTree->GetEntry(j);

	    if (inputEnu < 2){
	      Enu_true_mubar = inputEnu;
	      Mode_mubar = inputMode;
	      q0_mubar = inputq0;
	      q3_mubar = inputq3;
	      Q2_mubar = inputQ2;
	      coslep_mubar = inputcoslep;
	      ELep_mubar = inputELep;
	      Q2_QE_mubar = inputQ2_QE;
	      Enu_QE_mubar = inputEnu_QE;
	      fScaleFactor_mubar = inputfScaleFactor;

	      nfsp_mubar = inputnfsp;
	    
	    for (int k = 0; k<inputnfsp; ++k){
	      
	      E_mubar[k] = inputE[k];
	      px_mubar[k] = inputpx[k];
	      py_mubar[k] = inputpy[k];
	      pz_mubar[k] = inputpz[k];
	      pdg_mubar[k] = inputpdg[k];
	    }
	    
	      outputTree->Fill();
	    }
        }

	/*
	TH1D* hist = (TH1D*)inputFile->Get("FlatTree_FLUX"); 
        if (!hist) {
            std::std::cerr << "Error getting histogram from file: " << inputFilenames[i] << std::std::endl;
            inputFile->Close();
            continue;
        }

	
        // If combinedHist has not been created yet, clone the structure
        if (!combinedHist) {
            combinedHist = (TH1D*)hist->Clone("combinedHist");
	    if (!combinedHist) {
                std::std::cerr << "Error cloning histogram from file: " << inputFilenames[i] << std::std::endl;
                inputFile->Close();
                continue;
	    }
            //combinedHist->Reset(); // Reset the histogram contents
        } else {

        // Add the current histogram to the combined histogram
	  combinedHist->Add(hist);
	}
	*/

        // Close the input file
        inputFile->Close();
    }

    // Ensure the output file is the current directory before writing the tree
    outputFile->cd();
    // Write the output tree to the file
    outputTree->Write();

    /*
    if (combinedHist) {
        combinedHist->Write();
        std::cout << "Histogram written successfully." << std::endl;
    } else {
        std::cerr << "No histograms were combined." << std::endl;
    }
    */
    
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}





void AgatheAnalysis::combine_newflux_flatnumubar(){

  // Names of the input files
    const char* inputFilenames[10] = {
      "~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0000_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0001_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0002_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0003_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0004_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0005_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0006_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0007_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0008_NUISFLAT.root","~/Code_agathe/NewFiles/simulations_NewFiles/one_over_2GeV_numubar_H2O_NEUT562_1M_0009_NUISFLAT.root"
    };

    // Name of the output file
    const char* outputFilename = "~/Code_agathe/NewFiles/combined_NewFiles/one_over_2GeV_flux_numubar_H2O_NEUT562_10M_NUISFLAT.root";

    // Create the output file and flux
    TFile* outputFile = new TFile(outputFilename, "RECREATE");
     if (!outputFile->IsOpen()) {
        std::cerr << "Error: Could not create output file " << outputFilename << std::endl;
        return;
     }

     TH1D* outputFlux = new TH1D("outputFlux", "Combined flux", 95, 0.1,2);
    
    // Loop over each input file
    for (int i = 0; i < 10; ++i) {
        // Open the input file
        TFile* inputFile = TFile::Open(inputFilenames[i]);
        if (!inputFile || inputFile->IsZombie()) {
            std::cerr << "Error opening file: " << inputFilenames[i] << std::endl;
            continue;
        }

	std::cout << "File n° " << i << std::endl;

        // Get the flux from the input file
        TH1D* inputFlux = (TH1D*)inputFile->Get("FlatTree_FLUX"); 
        if (!inputFlux) {
            std::cerr << "Error getting flux from file: " << inputFilenames[i] << std::endl;
            inputFile->Close();
            continue;
        }

	float Integrale = inputFlux -> Integral();

	outputFlux->Add(inputFlux);
	outputFlux->Scale(1/Integrale);
	std::cout << "integral = " << Integrale << std::endl;

        // Close the input file
        inputFile->Close();
    }


    
    // Ensure the output file is the current directory before writing the flux
    outputFile->cd();
    // Write the output flux to the file
    outputFlux->Write();
    // Close the output file
    outputFile->Close();

    std::cout << "All files combined into: " << outputFilename << std::endl;


}



void AgatheAnalysis::combine_newfiles(){

  combine_newfiles_flatnue();
  //combine_newflux_flatnue();
  //combine_newfiles_flatnumu();
  //combine_newflux_flatnumu();    
  //combine_newfiles_flatnuebar();
  //combine_newflux_flatnuebar();
  //combine_newfiles_flatnumubar();
  //combine_newflux_flatnumubar();

}

