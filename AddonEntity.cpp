#include "pch.h"
#include "AddonEntity.h"

/**
 * Grab thread-safe singleton reference to entity.
 * @return Singleton AddonEntity object.
 */
AddonEntity& AddonEntity::getInstance() {
    static AddonEntity    instance;
    return instance;
}

IMatrixStudiablePtr AddonEntity::getStudiables() {
    return studiables;
}
void AddonEntity::setStudiables(IMatrixStudiablePtr studiables) {
    this->studiables = studiables;
}

IAddonParameterHandlerPtr AddonEntity::getParamHandler() {
    return paramHandler;
}
void AddonEntity::setParamHandler(IAddonParameterHandlerPtr paramHandler) {
    this->paramHandler = paramHandler;
}

IMountainsPtr AddonEntity::getMountains() {
    return mountains;
}
void AddonEntity::setMountains(IMountainsPtr mountains) {
    this->mountains = mountains;
}

