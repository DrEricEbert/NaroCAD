// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapNodeOfDataMapOfShapeReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_DataMapOfShapeReal.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeReal.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapNodeOfDataMapOfShapeReal::OCTopTools_DataMapNodeOfDataMapOfShapeReal(Handle(TopTools_DataMapNodeOfDataMapOfShapeReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfShapeReal(*nativeHandle);
}

OCTopTools_DataMapNodeOfDataMapOfShapeReal::OCTopTools_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfShapeReal(new TopTools_DataMapNodeOfDataMapOfShapeReal(*((TopoDS_Shape*)K->Handle), I, n));
}

OCTopoDS_Shape^ OCTopTools_DataMapNodeOfDataMapOfShapeReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Real OCTopTools_DataMapNodeOfDataMapOfShapeReal::Value()
{
  return (*((Handle_TopTools_DataMapNodeOfDataMapOfShapeReal*)nativeHandle))->Value();
}


