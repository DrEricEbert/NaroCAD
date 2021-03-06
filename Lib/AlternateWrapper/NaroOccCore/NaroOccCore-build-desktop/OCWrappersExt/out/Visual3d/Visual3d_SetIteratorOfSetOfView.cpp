// File generated by CPPExt (CPP file)
//

#include "Visual3d_SetIteratorOfSetOfView.h"
#include "../Converter.h"
#include "Visual3d_View.h"
#include "Visual3d_SetOfView.h"
#include "Visual3d_SetListOfSetOfView.h"
#include "Visual3d_ListNodeOfSetListOfSetOfView.h"
#include "Visual3d_ListIteratorOfSetListOfSetOfView.h"


using namespace OCNaroWrappers;

OCVisual3d_SetIteratorOfSetOfView::OCVisual3d_SetIteratorOfSetOfView(Visual3d_SetIteratorOfSetOfView* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCVisual3d_SetIteratorOfSetOfView::OCVisual3d_SetIteratorOfSetOfView() 
{
  nativeHandle = new Visual3d_SetIteratorOfSetOfView();
}

OCVisual3d_SetIteratorOfSetOfView::OCVisual3d_SetIteratorOfSetOfView(OCNaroWrappers::OCVisual3d_SetOfView^ S) 
{
  nativeHandle = new Visual3d_SetIteratorOfSetOfView(*((Visual3d_SetOfView*)S->Handle));
}

 void OCVisual3d_SetIteratorOfSetOfView::Initialize(OCNaroWrappers::OCVisual3d_SetOfView^ S)
{
  ((Visual3d_SetIteratorOfSetOfView*)nativeHandle)->Initialize(*((Visual3d_SetOfView*)S->Handle));
}

 System::Boolean OCVisual3d_SetIteratorOfSetOfView::More()
{
  return OCConverter::StandardBooleanToBoolean(((Visual3d_SetIteratorOfSetOfView*)nativeHandle)->More());
}

 void OCVisual3d_SetIteratorOfSetOfView::Next()
{
  ((Visual3d_SetIteratorOfSetOfView*)nativeHandle)->Next();
}

OCVisual3d_View^ OCVisual3d_SetIteratorOfSetOfView::Value()
{
  Handle(Visual3d_View) tmp = ((Visual3d_SetIteratorOfSetOfView*)nativeHandle)->Value();
  return gcnew OCVisual3d_View(&tmp);
}


