// File generated by CPPExt (CPP file)
//

#include "StepGeom_Point.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepGeom_Point::OCStepGeom_Point(StepGeom_Point* nativeHandle) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Point::OCStepGeom_Point() : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_Point();
}


