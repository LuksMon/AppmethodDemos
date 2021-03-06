//---------------------------------------------------------------------------

// This software is Copyright (c) 2015 Embarcadero Technologies, Inc.
// You may only use this software if you are an authorized licensee
// of an Embarcadero developer tools product.
// This software is considered a Redistributable as defined under
// the software license agreement that comes with the Embarcadero Products
// and is subject to that software license agreement.

//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm3D1 *Form3D1;
//---------------------------------------------------------------------------
__fastcall TForm3D1::TForm3D1(TComponent* Owner)
	: TForm3D(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3D1::Button1Click(TObject *Sender)
{
   Layer3D1->AnimateFloat("RotationAngle.Y",360,2);
   Layer3D1->AnimateFloat("Position.Z",500,1);
   Layer3D1->AnimateFloatDelay("Position.Z",0,1,1);
}
//---------------------------------------------------------------------------
