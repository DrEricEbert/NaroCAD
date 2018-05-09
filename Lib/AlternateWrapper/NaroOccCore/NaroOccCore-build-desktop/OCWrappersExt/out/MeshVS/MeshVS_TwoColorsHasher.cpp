// File generated by CPPExt (CPP file)
//

#include "MeshVS_TwoColorsHasher.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCMeshVS_TwoColorsHasher::OCMeshVS_TwoColorsHasher(MeshVS_TwoColorsHasher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCMeshVS_TwoColorsHasher::HashCode(MeshVS_TwoColors K, Standard_Integer Upper)
{
  return MeshVS_TwoColorsHasher::HashCode(K, Upper);
}

 System::Boolean OCMeshVS_TwoColorsHasher::IsEqual(MeshVS_TwoColors K1, MeshVS_TwoColors K2)
{
  return OCConverter::StandardBooleanToBoolean(MeshVS_TwoColorsHasher::IsEqual(K1, K2));
}

