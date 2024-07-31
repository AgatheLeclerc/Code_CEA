#ifndef ANALYSIS_H
#define ANALYSIS_H

//Classes Cpp 
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <string>

#include <cmath>
#include <algorithm>
#include <iterator>
#include <map>
#include <vector>
#include <utility>      // For std::swap
#include <type_traits>  // For std::is_move_constructible, std::is_move_assignable


//Classes Root
#include "TFile.h"
#include "TTree.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "THStack.h"
#include "TAxis.h"
#include <TLatex.h>
#include "TStyle.h"
#include "TLine.h"

class AgatheAnalysis{
    public:
        AgatheAnalysis();
        virtual ~AgatheAnalysis();


    //Functions for the T2K flux (old files) //
        void T2KFlux_nu_mu();
        void RMS (std::string var);
        void plotTH1D (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1DAdd (std::string var, std::string xaxis, std::string yaxis);
        void plotTH2D (std::string var, std::string xaxis, std::string yaxis);
        void plotTH2D_total (std::string var, std::string xaxis, std::string yaxis);
        void plotTH2D_tot_modif ();
        void plotTH2D_evt();
        void plot_evts();
        void plotAll();

    // Functions for the old files //

        //Creating, filling and writing the histograms
        void Flat_nu_e_nu_mu();
        //tracing the cross section and separetly each interaction considered in RES and DIS
        void graph_xsec();
        //Tracing the "var" variable of the chosen flavor with all interactions
        void plotTH1D_flat (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable of the mu and e flavor superimposed with all interactions
        void plotTH1D_superposes (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable (must be antineutrino) of the mu and e flavor superimposed for QE, with interactions on H and C separated 
        void plotTH1D_superposes_QE (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_superposes_QE_oldnew (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_superposes_oldnew (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_xsec (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_xsec_overE (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_xsec_overE_test (std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_xsec_QE (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable of the mu and e flavor superimposed with all interactions, with the correct normalisation
        void plotTH1D_normalise (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the ratio nue/numu of the "var" variable 
        void plotTH1D_divide(std::string var, std::string xaxis, std::string yaxis);
        //Tracing the ratio nue/numu "var" variable, for neutrinos and anti-neutrinos
        void plotTH1D_divide_superposés(std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_tot_CCQE(std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_divide_tot(std::string var, std::string xaxis, std::string yaxis);
        void plotTH1D_divide2_bar(std::string var, std::string var_bar, std::string xaxis, std::string yaxis);
        void plotTH2D_comp_tot (std::string var, std::string xaxis, std::string yaxis);
        void plotTH2D_tot (std::string var, std::string xaxis, std::string yaxis);
        void plotTH2D_int();
        void PlotAll_flav();


    // Functions for the new files //

        //Creating, filling and writing the histograms
        void new_Flat_nu_e_nu_mu();
        void plotnewTH1D_xsec_noDiff();
        //tracing the cross section and separetly each interaction considered in RES and DIS
        void newgraph_xsec();
        //Tracing the "var" variable of the chosen flavor with all interactions
        void plotnewTH1D_flat (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable of the mu and e flavor superimposed with all interactions
        void plotnewTH1D_superposes (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable (must be antineutrino) of the mu and e flavor superimposed for QE, with interactions on H and O separated 
        void plotnewTH1D_superposes_QE (std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_xsec (std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_xsec_overE (std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_xsec_QE (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the "var" variable of the mu and e flavor superimposed with all interactions, with the correct normalisation
        void plotnewTH1D_normalise (std::string var, std::string xaxis, std::string yaxis);
        //Tracing the ratio nue/numu of the "var" variable 
        void plotnewTH1D_divide(std::string var, std::string xaxis, std::string yaxis);
        //Tracing the ratio nue/numu of the "var" variable, for QE neutrinos and QE anti-neutrinos, with interactions on H and O separated
        void plotnewTH1D_divide_H2O(std::string var, std::string xaxis, std::string yaxis);
        //Tracing the ratio nue/numu of the "var" variable, for neutrinos and anti-neutrinos
        void plotnewTH1D_divide_superposés(std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_tot_CCQE(std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_divide_tot(std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH1D_divide2_bar(std::string var, std::string var_bar, std::string xaxis, std::string yaxis);
        void plotnewTH2D_comp_tot (std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH2D_tot (std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH2D(std::string var, std::string xaxis, std::string yaxis);
        void plotnewTH2D_int();
        //Tracing the variables corresponding to the differents populations of the graph cos over Q2
        void plot_new_evts();
        void PlotnewAll_flav();


    // Functions for combining the 10 old files in one //
        void combine_files_flatnue();
        void combine_files_flatnumu();
        void combine_files_T2Knumu();
        void combine_files_flatnuebar();
        void combine_files_flatnumubar();


    // Functions for combining the 10 new files in one //
        void combine_newfiles_flatnue();
        void combine_newflux_flatnue();
        void combine_newfiles_flatnumu();
        void combine_newflux_flatnumu();
        void combine_newfiles_flatnuebar();
        void combine_newflux_flatnuebar();
        void combine_newfiles_flatnumubar();
        void combine_newflux_flatnumubar();
        //To execute all the functions above 
        void combine_newfiles();



    private:
        const int nbinq0q3 = 50;
        const int nbinEnu = 100;
        const int nbin = 100;
        const int newbin = 100;

};

#endif