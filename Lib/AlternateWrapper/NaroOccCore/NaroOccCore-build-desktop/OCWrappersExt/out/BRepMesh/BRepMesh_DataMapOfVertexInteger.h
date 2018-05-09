// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapOfVertexInteger_OCWrappers_HeaderFile
#define _BRepMesh_DataMapOfVertexInteger_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapOfVertexInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapNodeOfDataMapOfVertexInteger;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfVertexInteger;



public ref class OCBRepMesh_DataMapOfVertexInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapOfVertexInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapOfVertexInteger(BRepMesh_DataMapOfVertexInteger* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapOfVertexInteger(Standard_Integer NbBuckets);


 /*instead*/  OCBRepMesh_DataMapOfVertexInteger^ Assign(OCNaroWrappers::OCBRepMesh_DataMapOfVertexInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Vertex^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Vertex^ K) ;

~OCBRepMesh_DataMapOfVertexInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif