// File generated by CPPExt (CPP file)
//

#include "TopoDS_TCompound.h"
#include "../Converter.h"
#include "TopoDS_TShape.h"


using namespace OCNaroWrappers;

OCTopoDS_TCompound::OCTopoDS_TCompound(Handle(TopoDS_TCompound)* nativeHandle) : OCTopoDS_TShape((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopoDS_TCompound(*nativeHandle);
}

OCTopoDS_TCompound::OCTopoDS_TCompound() : OCTopoDS_TShape((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopoDS_TCompound(new TopoDS_TCompound());
}

 OCTopAbs_ShapeEnum OCTopoDS_TCompound::ShapeType()
{
  return (OCTopAbs_ShapeEnum)((*((Handle_TopoDS_TCompound*)nativeHandle))->ShapeType());
}

OCTopoDS_TShape^ OCTopoDS_TCompound::EmptyCopy()
{
  Handle(TopoDS_TShape) tmp = (*((Handle_TopoDS_TCompound*)nativeHandle))->EmptyCopy();
  return gcnew OCTopoDS_TShape(&tmp);
}

