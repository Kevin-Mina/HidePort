#pragma once

#include "Pch.h"
#include "Attach.h"

NTSTATUS NsiMajorFunction(_In_ struct _DEVICE_OBJECT * DeviceObject, _Inout_ PIRP Irp);

class Nsi
{

};

