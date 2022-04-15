#pragma once
#ifndef GEOMETRY 1
#define GEOMETRY 1

#include "G4VUserDetectorConstruction.hh"

namespace A0
{
	class DetectorConstruction : public G4VUserDetectorConstruction
	{
		virtual G4VPhysicalVolume* Construct();
	};
}
#endif // !GEOMETRY 1
