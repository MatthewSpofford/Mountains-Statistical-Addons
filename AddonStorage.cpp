#include "pch.h"
#include "AddonStorage.h"

/**
 * Grab thread-safe singleton reference to entity.
 * @return Singleton AddonStorage object.
 */
AddonStorage& AddonStorage::getInstance() {
    static AddonStorage    instance;
    return instance;
}

IMatrixStudiablePtr AddonStorage::getStudiables() {
    return studiables;
}
void AddonStorage::setStudiables(IMatrixStudiablePtr studiables) {
    this->studiables = studiables;
}

IAddonParameterHandlerPtr AddonStorage::getParamHandler() {
    return paramHandler;
}
void AddonStorage::setParamHandler(IAddonParameterHandlerPtr paramHandler) {
    this->paramHandler = paramHandler;
}

IMountainsPtr AddonStorage::getMountains() {
    return mountains;
}
void AddonStorage::setMountains(IMountainsPtr mountains) {
    this->mountains = mountains;
}

