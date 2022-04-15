#include "QGSP_BERT_HP.hh"
#include "G4MTRunManager.hh"
#include "Geometry.hh"
#include "ParticleSource.hh"

namespace A0
{

int main(void)
{
	auto runManager = new G4MTRunManager;
	runManager->SetUserInitialization(new DetectorConstruction());
	runManager->SetUserInitialization(new QGSP_BERT_HP());
	runManager->SetUserInitialization(new);

	auto physics = new QGSP_BERT_HP;

	return 0;
	}

}