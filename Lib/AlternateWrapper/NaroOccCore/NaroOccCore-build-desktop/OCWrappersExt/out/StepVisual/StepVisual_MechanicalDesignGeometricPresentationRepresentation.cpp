// File generated by CPPExt (CPP file)
//

#include "StepVisual_MechanicalDesignGeometricPresentationRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_MechanicalDesignGeometricPresentationRepresentation::OCStepVisual_MechanicalDesignGeometricPresentationRepresentation(Handle(StepVisual_MechanicalDesignGeometricPresentationRepresentation)* nativeHandle) : OCStepVisual_PresentationRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_MechanicalDesignGeometricPresentationRepresentation(*nativeHandle);
}

OCStepVisual_MechanicalDesignGeometricPresentationRepresentation::OCStepVisual_MechanicalDesignGeometricPresentationRepresentation() : OCStepVisual_PresentationRepresentation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_MechanicalDesignGeometricPresentationRepresentation(new StepVisual_MechanicalDesignGeometricPresentationRepresentation());
}


