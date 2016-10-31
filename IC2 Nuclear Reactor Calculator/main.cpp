#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

	char prompt = 'a';

	while (prompt != 'q') {

		double numReactors, aCircuits, generators, chambers, dLeadPlates;
		double leadPlates, circuits, insCop, copWire, ironPlates;
		double furnaces, machCase, cobble, batteries, tinCasing, insTin, tinWire;
		double tin, copper, lead, iron, redstone, lapis, glowdust, rubber;

		cout << "Enter the number of nuclear reactors you wish to build:" << endl;
		cin >> numReactors;

		//nuclear reactor breakdown
		aCircuits = numReactors;
		generators = numReactors;
		chambers = numReactors * 3;
		dLeadPlates = numReactors * 4;

			// Dense lead plate breakdown
			leadPlates = dLeadPlates * 9;
		
			// Advanced circuit breakdown
			redstone = aCircuits * 4;
			lapis = aCircuits * 2;
			glowdust = aCircuits * 2;
			circuits = aCircuits;

				//circuit breakdown
				insCop = circuits * 6;
				redstone = redstone + (circuits * 2);
				ironPlates = circuits;
				//insulated copper wire breakdown
				copper = insCop / 3;
				rubber = insCop;

			// Generator breakdown
			furnaces = generators;
			machCase = generators;
			batteries = generators;
				
				//furnace breakdown
				cobble = furnaces * 8;
				
				//battery breakdown
				redstone = redstone + (batteries * 2);
				tinCasing = batteries * 4;
				insTin = batteries;
					//insulated tin wire breakdown
					tin = (insTin / 3) + (tinCasing / 2);
					rubber = rubber + insTin;

			// reactor chamber breakdown
			leadPlates = leadPlates + (chambers * 4);
			machCase = machCase + chambers;

			//machine casing breakdown
			ironPlates = ironPlates + (machCase * 8);
			// plates to ingots conversion
			lead = leadPlates;
			iron = ironPlates;			

		//print breakdown
		cout << endl << "To make " << numReactors << " nuclear reactors, you will need:" << endl;
		cout << lead << " lead ingots" << endl;
		cout << iron << " iron ingots" << endl;
		cout << copper << " copper ingots" << endl;
		cout << tin << " tin ingots" << endl;
		cout << redstone << " redstone" << endl;
		cout << lapis << " lapis" << endl;
		cout << glowdust << " piles of glowstone dust" << endl;
		cout << cobble << " cobblestone" << endl;
		cout << rubber << " rubber" << endl << endl;

		cout << "To make:" << endl;
		cout << insCop << " insulated copper wire" << endl;
		cout << insTin << " insulated tin wire" << endl;
		cout << leadPlates << " lead plates" << endl;
		cout << ironPlates << " iron plates" << endl;
		cout << tinCasing << " tin casings" << endl;
		cout << furnaces << " furnaces" << endl;
		cout << machCase << " basic machine casings" << endl;
		cout << circuits << " basic circuits" << endl;
		cout << batteries << " RE batteries" << endl << endl;

		cout << "And:" << endl;
		cout << aCircuits << " advanced circuits" << endl;
		cout << circuits << " reactor chambers" << endl;
		cout << generators << " generators" << endl;
		cout << dLeadPlates << " dense lead plates" << endl << endl;

		cout << "Press q to quit. Press any other key to calculate again." << endl;
		cin >> prompt;

	}

	return 0;
}