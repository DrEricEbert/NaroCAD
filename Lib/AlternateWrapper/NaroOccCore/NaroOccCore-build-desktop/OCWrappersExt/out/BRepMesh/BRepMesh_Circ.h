// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_Circ_OCWrappers_HeaderFile
#define _BRepMesh_Circ_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_Circ.hxx>
#include "../Converter.h"


#include "../gp/gp_XY.h"


namespace OCNaroWrappers
{

ref class OCgp_XY;


//! Describes  a  2d circle  with  a   size of  only 3 <br>
//!          Standard Real  numbers instead  of gp who  needs 7 <br>
//!          Standard Real numbers. <br>
public ref class OCBRepMesh_Circ  {

protected:
  BRepMesh_Circ* nativeHandle;
  OCBRepMesh_Circ(OCDummy^) {};

public:
  property BRepMesh_Circ* Handle
  {
    BRepMesh_Circ* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_Circ(BRepMesh_Circ* nativeHandle);

// Methods PUBLIC


OCBRepMesh_Circ();


OCBRepMesh_Circ(OCNaroWrappers::OCgp_XY^ loc, Standard_Real rad);


 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_XY^ loc) ;


 /*instead*/  void SetRadius(Standard_Real rad) ;


 /*instead*/  OCgp_XY^ Location() ;


 /*instead*/  Standard_Real Radius() ;

~OCBRepMesh_Circ()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
