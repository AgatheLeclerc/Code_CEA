# Code_Stage

This is the code I wrote during my M1 internship at CEA, to study the neutrino-nucleus simulations with the NEUT simulation files

## Disclaimer
* I am a beginner in ROOT C++ so there is probably some mistakes in the code 
* The code is not optimised, there are a lot of void function that are slight variation of each other
* The files used in the code are to heavy to be put in the Github

## Explanations of how the code is stored 
*  The src folder contains all the code that is used to produce the plots
*  To execute the code, you have to de-comment the function you want in the Analysis.cxx file and then write ./run.sh in the terminal
*  To add a new function/new .cxx file, you need to add it to the Flat_nu_e_nu_mu.h file. This file also contains all the headers

## ROOT Files
* The "old files" an be found here : https://portal.nersc.gov/project/nuisance/IOP_review_2023/old/NEUT562/  (they have the 0-10 GeV flat flux and the T2K flux)
* This explains how to use the simulations files : https://indico.fnal.gov/event/59963/contributions/288526/attachments/176701/240281/HowTo_FlatTree.pdf
* The "new files" can be found with this command : scp lxplus.cern.ch:/eos/project/n/neutrino-generators/generatorOutput/NEUT/IOPMC/one_over_2GeV_nue_H2O_NEUT562_1M_000*_NUISFLAT.root

## Code
* The combine_files.cxx code is used to combine the 11 old files (flat flux and T2K flux) into one file with 11M entries
* The combine_new_files.cxx code is used to combine the 10 new files (one_over_E flux) into one file with 10M entries and the flux histograms
* The T2KFLux_nu_mu.cxx code uses the T2K flux files in numu
* The Flat_nu_e_nu_mu.cxx code uses the flat flux files (0-10GeV with a cut at 2 GeV when combining the files)
* The new_Flat_nu_e_nu_mu.cxx code uses the one_over_E flux files, reweighted with the flux when filling the histograms to simulate a flat flux (0-2GeV)
