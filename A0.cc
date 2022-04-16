#include "ParticleSource.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"

namespace A0 
{
	PrimaryGeneratorAction::PrimaryGeneratorAction()
	{
		G4ParticleTable* ParticleTable = G4ParticleTable::GetParticleTable();
		fParticleGun = new G4ParticleGun(1);
		fParticleGun->SetParticleDefinition(ParticleTable->FindParticle("neutron"));
		fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0, 0, 1));
		fParticleGun->SetParticleEnergy(10 * MeV);
	}

	PrimaryGeneratorAction::~PrimaryGeneratorAction()
	{
		delete fParticleGun;
	}

	void PrimaryGeneratorAction::GeneratePrimaries(G4Event* aevent)
	{
		fParticleGun->GeneratePrimaryVertex(aevent);
	}
}
