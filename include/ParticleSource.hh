#pragma once
#ifndef ParticleSource 1
#define ParticleSource 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"


class G4Event;

namespace A0
{
	class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
	{
	public:
		PrimaryGeneratorAction();
		~PrimaryGeneratorAction();
		virtual void GeneratePrimaries(G4Event*);
	private:
		G4ParticleGun* fParticleGun;
	};
}


#endif // !ParticleSource 1