// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ArrayOfSegments_OCWrappers_HeaderFile
#define _Graphic3d_ArrayOfSegments_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ArrayOfSegments.hxx>
#include "../Converter.h"

#include "Graphic3d_ArrayOfPrimitives.h"



namespace OCNaroWrappers
{




public ref class OCGraphic3d_ArrayOfSegments : OCGraphic3d_ArrayOfPrimitives {

protected:
  // dummy constructor;
  OCGraphic3d_ArrayOfSegments(OCDummy^) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ArrayOfSegments(Handle(Graphic3d_ArrayOfSegments)* nativeHandle);

// Methods PUBLIC

//! Creates an array of segments, <br>
//! a segment can be filled as: <br>
//! 1) creating a set of segments defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfSegments(4) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//! 2) creating a set of indexed segments defined with his vertex <br>
//!    ans edges. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfSegments(4,0,8) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(3) <br>
OCGraphic3d_ArrayOfSegments(Standard_Integer maxVertexs, Standard_Integer maxEdges, System::Boolean hasVColors);

~OCGraphic3d_ArrayOfSegments()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif