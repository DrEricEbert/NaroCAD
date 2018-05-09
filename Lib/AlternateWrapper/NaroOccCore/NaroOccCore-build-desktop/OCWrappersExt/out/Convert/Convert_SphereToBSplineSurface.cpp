// File generated by CPPExt (CPP file)
//

#include "Convert_SphereToBSplineSurface.h"
#include "../Converter.h"
#include "../gp/gp_Sphere.h"


using namespace OCNaroWrappers;

OCConvert_SphereToBSplineSurface::OCConvert_SphereToBSplineSurface(Convert_SphereToBSplineSurface* nativeHandle) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCConvert_SphereToBSplineSurface::OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph, Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new Convert_SphereToBSplineSurface(*((gp_Sphere*)Sph->Handle), U1, U2, V1, V2);
}

OCConvert_SphereToBSplineSurface::OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph, Standard_Real Param1, Standard_Real Param2, System::Boolean UTrim) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new Convert_SphereToBSplineSurface(*((gp_Sphere*)Sph->Handle), Param1, Param2, OCConverter::BooleanToStandardBoolean(UTrim));
}

OCConvert_SphereToBSplineSurface::OCConvert_SphereToBSplineSurface(OCNaroWrappers::OCgp_Sphere^ Sph) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new Convert_SphereToBSplineSurface(*((gp_Sphere*)Sph->Handle));
}

