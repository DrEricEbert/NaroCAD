// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY_OCWrappers_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "BRepMesh_ListOfXY.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_ListOfXY;
ref class OCTColStd_MapIntegerHasher;
ref class OCBRepMesh_DataMapOfIntegerListOfXY;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY;



public ref class OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(Handle(BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY(Standard_Integer K, OCNaroWrappers::OCBRepMesh_ListOfXY^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCBRepMesh_ListOfXY^ Value() ;

~OCBRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif