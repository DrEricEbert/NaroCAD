// File generated by CPPExt (CPP file)
//

#include "GeomLib_DenominatorMultiplier.h"
#include "../Converter.h"
#include "../Geom/Geom_BSplineSurface.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCGeomLib_DenominatorMultiplier::OCGeomLib_DenominatorMultiplier(GeomLib_DenominatorMultiplier* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomLib_DenominatorMultiplier::OCGeomLib_DenominatorMultiplier(OCNaroWrappers::OCGeom_BSplineSurface^ Surface, OCNaroWrappers::OCTColStd_Array1OfReal^ KnotVector) 
{
  nativeHandle = new GeomLib_DenominatorMultiplier(*((Handle_Geom_BSplineSurface*)Surface->Handle), *((TColStd_Array1OfReal*)KnotVector->Handle));
}

 Standard_Real OCGeomLib_DenominatorMultiplier::Value(Standard_Real UParameter, Standard_Real VParameter)
{
  return ((GeomLib_DenominatorMultiplier*)nativeHandle)->Value(UParameter, VParameter);
}


