#include "Geometry.hh"

#include "G4Box.hh"
#include "G4SystemOfUnits.hh"
#include "G4LogicalVolume.hh"
#include "G4NistManager.hh"
#include "G4PVPlacement.hh"



namespace A0
{

	G4VPhysicalVolume* DetectorConstruction::Construct()
	{
		G4VSolid* solidworld = new G4Box("World", 0.5 * m, 0.5 * m, 0.5 * m);
		
		auto world_mat = G4NistManager::Instance();

		G4LogicalVolume* logicworld = 
			new G4LogicalVolume(solidworld, world_mat->FindOrBuildMaterial("G4_AIR"), "World");

		G4VPhysicalVolume* phyworld =
			new G4PVPlacement(0, G4ThreeVector(0, 0, 0), "World", logicworld, 0, 0, false);

		return phyworld;
	}

}