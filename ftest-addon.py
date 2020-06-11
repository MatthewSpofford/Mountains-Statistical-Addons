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
from win32com.client import Dispatch
from pywintypes import IID

# Version values, represented as MAJOR.MINOR.SUB
#   Ex: MAJOR = 1, MINOR = 2, SUB = 3
#       Version = 1.2.3
VERSION_MAJOR = 0
VERSION_MINOR = 1
VERSON_SUB = 0

# Force the generation of the ActiveX control Python wrappers (python classes which encapsulate the COM interfaces)
ActiveXStudyLIBID = '{F2F3E7EE-FEC0-4593-BDA8-62F0CF14EF4B}'
win32com.client.gencache.EnsureModule(ActiveXStudyLIBID, VERSION_MAJOR, VERSION_MINOR, 0, None, None, False, True)

# Defines the type as a Study (Reserve)
type = constants.kAddonReserve
# Name of study and various langauges
publicname = {constants.kDefaultLanguage : "Statistical F-Test",
              constants.kLangEnglish : "Statistical F-Test",
              constants.kLangFrench : "Test statistique F"}
# The type of studiable accepted as input
input_type = { constants.kDSStudiableProfile,
			   constants.kDSStudiableSurface }

# Icon location
icon_path = ".ico"

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
    version = '0.1.0'
    company = "Worcester Polytechnic Institute, USA"
  
    description = { constants.kDefaultLanguage : "Statistical F-Test to be run on a given surface.",
                    constants.kLangEnglish : "Statistical F-Test to be run on a given surface."}

    comment = "More information can be found at the GitHub page."
    support = 'https://github.com/MatthewSpofford'

def CreateAddon() -> FTestStudy :
    """Creates the F-test study addon to be used by mountains"""
    return FTestStudy()


class FTestStudy :
    """Container for Study (Reserve) object"""
    def __init__(self) :
        self.scale_min = 0
        self.scale_max = 0
        self.alpha = 0.05
        self.max_f = 0.95
        # group_1 = IStudiables...
        # group_2 = IStudiables...

    def GetCLSID(self) :
        """This method is called by Mountains to obtain the CLSID of the ActiveX to create."""

        # Python ActiveX study sample control
        return "{4848D679-6AE2-4FEC-889C-9E67910366F0}"

    def OnInit(self, studiable: IStudiable,
                paramhandler: imountains.IAddonParameterHandler, 
                reservectl) -> bool :
        """The method is called each time the studiable used as a source for the study is updated."""
        
        
        print("reservectl = ", reservectl)
        print( dir(reservectl) )

        print("paramhandler = ", paramhandler)

        # mntctrl = mountains.control

        print("UnitSytem = ", reservectl.UnitSystem)

        reservectl.UnitSystem = 1
        print("UnitSytem = ", reservectl.UnitSystem)

        # forwards the message to a custom method of the ActiveX control
        reservectl.OnInit(mountains.control, studiable, paramhandler)
        return True


    def OnButtonClick(self, sId, bChecked, reservectl):
        """OnButtonClick is called when a user clic on a button on the contextual study tab of the ribbon
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