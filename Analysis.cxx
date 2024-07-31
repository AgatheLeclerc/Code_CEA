#include <iostream>
#include <iomanip>

#include "Flat_nu_e_nu_mu.h"

//This is where you choose which function you want to execute 

int main(int argc, char *argv[])
{
	AgatheAnalysis CurrentAnalysis;
    
    //CurrentAnalysis.Flat_nu_e_nu_mu();
    //CurrentAnalysis.PlotAll_flav();

    //CurrentAnalysis.new_Flat_nu_e_nu_mu();
    CurrentAnalysis.PlotnewAll_flav();

    //CurrentAnalysis.T2KFlux_nu_mu();
    //CurrentAnalysis.plotAll();

    //CurrentAnalysis.combine_files_flatnue();
    //CurrentAnalysis.combine_files_flatnumu();
    //CurrentAnalysis.combine_files_T2Knumu();
    //CurrentAnalysis.combine_files_flatnuebar();
    //CurrentAnalysis.combine_files_flatnumubar();

    //CurrentAnalysis.combine_newfiles();

    return 0;
}