/*
 *  HiveMindAgentWorldModel.h
 *  roborobo-online
 *
 *  Created by Nicolas on 27/05/10.
 *
 */


#ifndef HIVEMINDAGENTWORLDMODEL_H
#define HIVEMINDAGENTWORLDMODEL_H 

#include "RoboroboMain/common.h"
#include "RoboroboMain/roborobo.h"

#include "WorldModels/RobotAgentWorldModel.h"

class World;

class HiveMindAgentWorldModel : public RobotAgentWorldModel
{	
	private: 
		int _robotNeighborhoodCounter; // count the number of other robots within a given radius.
	
	public:

		// refer to super class to check what data / methods are available.		
		
		HiveMindAgentWorldModel();
		virtual ~HiveMindAgentWorldModel();
};


#endif


