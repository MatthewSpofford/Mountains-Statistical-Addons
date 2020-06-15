# Mountains Statistical Addons
## About
This is a multiscale analysis addon developed to integrate directly with MountainsMap® (developed by [Digital Surf](https://www.digitalsurf.com/)) to act as a 'study' tool.
It uses length-scale, area-scale, or area-complexity analysis on a given set of surfaces.
The application can then be used to run multiscale regression or discrimination on the exported surface data using F-tests, T-Tests, or ANOVA analysis.

The previous iteration of this project was a [standalone application](https://github.com/MatthewSpofford/Multiscale-Statistical-Analysis) develpoed by [Nathaniel Rutkowski](https://github.com/nrutkowski1). In order to improve the user experience, this addon application was created.

## _Dependencies_
The API provided with MountainsMap® is required in order to build and modify this addon, as it is currently not included with this project. Further information on the API can be found in `<MountainsMap-install-directory>/SDK/SDK.chm`.

Installation of Microsoft's Visual C++ [MFC](https://docs.microsoft.com/en-us/cpp/mfc/mfc-desktop-applications) and [ActiveX](https://docs.microsoft.com/en-us/windows/win32/com/activex-controls) libraries will also be required for this project.
