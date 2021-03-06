# imports the Python module imountains.py
# imountains is wrapper around the COM interfaces from Mountains
# look at the file imountains.py located in the folder ..\Python\Lib\PyWin32
# the file contains wrapper classes for all the Mountains COM interfaces and their
# constants
import imountains
from imountains import constants, IStudiable

# imports the custom Python module which is dynamically created by the Mountains runtime
# this module main function is to expose the current Mountains ActiveX control
# which can be accessed through the following variable "mountains.control"
import mountains

# imports the module used to handle COM components
import win32com.client

# Version values, represented as MAJOR.MINOR.SUB
#   Ex: MAJOR = 1, MINOR = 2, SUB = 3
#       Version = 1.2.3
VERSION_MAJOR = 0
VERSION_MINOR = 1
VERSON_SUB = 0

# Force the generation of the ActiveX control Python wrappers used by the addon
addonTypeLibID = '{647044BD-DEC7-4EC2-B786-7871A1F6D631}'
win32com.client.gencache.EnsureModule(addonTypeLibID, 0, VERSION_MAJOR, VERSION_MINOR, None, None, False, True)

# Defines the type as a Study (Reserve)
type = constants.kAddonReserve
# Name of study and various langauges
publicname = {constants.kDefaultLanguage : "Multiscale statistics",
              constants.kLangFrench : "Statistiques multi-échelles"}
# The type of studiable accepted as input
input_type = { constants.kDSStudiableSeriesOfProfiles,
			   constants.kDSStudiableSeriesOfSurfaces }

# Icon location
icon_path = "Multiscale-Statistics-Icon.ico"

# Class to define group on ribbon tab
class group_infos(object):
    def __init__ (self, id, Name):
      self.id = id
      self.Name = Name

# Class to define button on ribbon tab
class button_infos(object):
    def __init__ (self, id, Name, GroupId = ''):
      self.id = id
      self.Name = Name
      self.GroupId = GroupId   

class version_infos :
    """Addon descirption information"""
    version = str(VERSION_MAJOR) + "." + str(VERSION_MINOR) + "." + str(VERSON_SUB) 
    company = "Worcester Polytechnic Institute, USA"
  
    description = { constants.kDefaultLanguage : "Statistical addon to be run on a given surface.",
                    constants.kLangEnglish : "Statistical addon to be run on a given surface."}

    comment = "More information can be found at the software's GitHub page."
    support = 'https://github.com/MatthewSpofford/Mountains-Statistical-Addons'

class StatisticalAddon :
    """Container for Study (Reserve) object"""
    def __init__(self) :
        return

    def GetCLSID(self) :
        """This method is called by Mountains to obtain the CLSID of the ActiveX to create."""

        # Python ActiveX study sample control
        return "{1B777728-F285-4DA8-81AF-0777F97B6D51}"

    def OnInit(self, studiable: IStudiable,
                paramhandler: imountains.IAddonParameterHandler, 
                reservectl) -> bool :
        """The method is called each time the studiable used as a source for the study is updated."""
        
        reservectl.UnitSystem = 1
        # forwards the message to a custom method of the ActiveX control
        reservectl.OnInit(mountains.control, studiable, paramhandler)
        return True


    def OnButtonClick(self, sId, bChecked, reservectl):
        """OnButtonClick is called when a user click on a button on the contextual study tab of the ribbon
        sId : identifiant of the button clicked
        bChecked : button state : checked or not
    
        The method must return 
        - a boolean for success or error
        - a boolean set to true if the study is modified, false otherwise."""

        # print a message to the debug window and to the Mountains log file
        # print( "onButtonClick() called : ", sId )
    
        # print( "Name : ", reservectl._oleobj_)
        # print( "Representation : ", dir(reservectl))
    
        bModified = reservectl.OnButtonClick(sId, bChecked)
    
        return True, bModified
    
    def OnUpdateButton(self, sId, reservectl):
        """OnUpdateButton is called when a user clic on a button on the contextual study tab of the ribbon.
        sId : identifiant of the button clicked
        
        The method must return:
        - a boolean for success or error.
        - a boolean for Enable or not.
        - a boolean for Checked or not.
        - a boolean for active in multiselection or not."""

        # print a message to the debug window and to the Mountains log file
        # print( "OnUpdateButton() called : ", sId )
    
        # print( "Name : ", reservectl._oleobj_)
        # print( "Representation : ", dir(reservectl))
    
        bEnable, bChecked, bActiveOnMultiSelection = reservectl.OnUpdateButton(sId)
    
        return True, bEnable, bChecked, bActiveOnMultiSelection

def CreateAddon() -> StatisticalAddon :
    """Creates the F-test study addon to be used by mountains"""
    return StatisticalAddon()