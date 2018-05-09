// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_SiUnitAndPlaneAngleUnit_OCWrappers_HeaderFile
#define _StepBasic_SiUnitAndPlaneAngleUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_SiUnitAndPlaneAngleUnit.hxx>
#include "../Converter.h"

#include "StepBasic_SiUnit.h"

#include "StepBasic_SiPrefix.h"
#include "StepBasic_SiUnitName.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_PlaneAngleUnit;
ref class OCStepBasic_DimensionalExponents;



public ref class OCStepBasic_SiUnitAndPlaneAngleUnit : OCStepBasic_SiUnit {

protected:
  // dummy constructor;
  OCStepBasic_SiUnitAndPlaneAngleUnit(OCDummy^) : OCStepBasic_SiUnit((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_SiUnitAndPlaneAngleUnit(Handle(StepBasic_SiUnitAndPlaneAngleUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a SiUnitAndPlaneAngleUnit <br>
OCStepBasic_SiUnitAndPlaneAngleUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_DimensionalExponents^ aDimensions) override;


virtual /*instead*/  void Init(System::Boolean hasAprefix, OCStepBasic_SiPrefix aPrefix, OCStepBasic_SiUnitName aName) override;


 /*instead*/  void SetPlaneAngleUnit(OCNaroWrappers::OCStepBasic_PlaneAngleUnit^ aPlaneAngleUnit) ;


 /*instead*/  OCStepBasic_PlaneAngleUnit^ PlaneAngleUnit() ;

~OCStepBasic_SiUnitAndPlaneAngleUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif