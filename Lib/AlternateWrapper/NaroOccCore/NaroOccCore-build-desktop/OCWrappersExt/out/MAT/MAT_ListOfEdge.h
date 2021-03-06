// File generated by CPPExt (Transient)
//
#ifndef _MAT_ListOfEdge_OCWrappers_HeaderFile
#define _MAT_ListOfEdge_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT_ListOfEdge.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCMAT_TListNodeOfListOfEdge;
ref class OCMAT_Edge;



public ref class OCMAT_ListOfEdge : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT_ListOfEdge(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_ListOfEdge(Handle(MAT_ListOfEdge)* nativeHandle);

// Methods PUBLIC


OCMAT_ListOfEdge();


 /*instead*/  void First() ;


 /*instead*/  void Last() ;


 /*instead*/  void Init(OCNaroWrappers::OCMAT_Edge^ aniten) ;


 /*instead*/  void Next() ;


 /*instead*/  void Previous() ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  OCMAT_Edge^ Current() ;


 /*instead*/  void Current(OCNaroWrappers::OCMAT_Edge^ anitem) ;


 /*instead*/  OCMAT_Edge^ FirstItem() ;


 /*instead*/  OCMAT_Edge^ LastItem() ;


 /*instead*/  OCMAT_Edge^ PreviousItem() ;


 /*instead*/  OCMAT_Edge^ NextItem() ;


 /*instead*/  Standard_Integer Number() ;


 /*instead*/  Standard_Integer Index() ;


 /*instead*/  OCMAT_Edge^ Brackets(Standard_Integer anindex) ;


 /*instead*/  void Unlink() ;


 /*instead*/  void LinkBefore(OCNaroWrappers::OCMAT_Edge^ anitem) ;


 /*instead*/  void LinkAfter(OCNaroWrappers::OCMAT_Edge^ anitem) ;


 /*instead*/  void FrontAdd(OCNaroWrappers::OCMAT_Edge^ anitem) ;


 /*instead*/  void BackAdd(OCNaroWrappers::OCMAT_Edge^ anitem) ;


 /*instead*/  void Permute() ;


 /*instead*/  void Loop() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Dump(Standard_Integer ashift, Standard_Integer alevel) ;

~OCMAT_ListOfEdge()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
