#pragma once

#include "pch.h"

// Mountains COM interfaces are in the namespace mountainsLib
using namespace mountainsLib;

/**
 * Singleton storage class of Mountains Statistical Study Addon.
 * Handles the 
 */
class AddonEntity
{	
public:
    AddonEntity(AddonEntity const&) = delete;       // Constructor is not needed
    void operator=(AddonEntity const&) = delete;    // Object cannot be assigned
    
    static AddonEntity& getInstance();


	IMatrixStudiablePtr getStudiables();
    void setStudiables(IMatrixStudiablePtr studiables);

    IAddonParameterHandlerPtr getParamHandler();
    void setParamHandler(IAddonParameterHandlerPtr paramHandler);

    IMountainsPtr getMountains();
    void setMountains(IMountainsPtr mountains);
	
private:
    AddonEntity() {}

    /**
     * Input surface studiable displayed in the control.
     */
    IMatrixStudiablePtr studiables;

    /**
     * Interface used to notify Mountains with the results calculated by the reserve.
     */
    IAddonParameterHandlerPtr paramHandler;

    /**
     * Interface used to access to Mountains functionalities.
     */
    IMountainsPtr mountains;
};