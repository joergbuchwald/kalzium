# Install script for directory: /home/joerg/github/kalzium/doc

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HTML/en/kalzium" TYPE FILE FILES
    "/home/joerg/github/kalzium/build/doc//index.cache.bz2"
    "/home/joerg/github/kalzium/doc/./index.docbook"
    "/home/joerg/github/kalzium/doc/./gradient.png"
    "/home/joerg/github/kalzium/doc/./infodialog_bohr.png"
    "/home/joerg/github/kalzium/doc/./infodialog_data_overview.png"
    "/home/joerg/github/kalzium/doc/./infodialog_extra.png"
    "/home/joerg/github/kalzium/doc/./infodialog_isotopes.png"
    "/home/joerg/github/kalzium/doc/./infodialog_misc.png"
    "/home/joerg/github/kalzium/doc/./infodialog_spectrum.png"
    "/home/joerg/github/kalzium/doc/./quick-1.png"
    "/home/joerg/github/kalzium/doc/./quick-3.png"
    "/home/joerg/github/kalzium/doc/./quick-4.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-conc.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-eq.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-gas.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-mass.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-nucl.png"
    "/home/joerg/github/kalzium/doc/./screenshot-calc-titr.png"
    "/home/joerg/github/kalzium/doc/./screenshot-mol-edit.png"
    "/home/joerg/github/kalzium/doc/./screenshot-rs-phrases.png"
    "/home/joerg/github/kalzium/doc/./screenshot-tables.png"
    "/home/joerg/github/kalzium/doc/./screenshot1.png"
    "/home/joerg/github/kalzium/doc/./screenshot2.png"
    "/home/joerg/github/kalzium/doc/./screenshot6.png"
    "/home/joerg/github/kalzium/doc/./screenshot7.png"
    "/home/joerg/github/kalzium/doc/./screenshotnuclidboard.png"
    "/home/joerg/github/kalzium/doc/./settings1.png"
    "/home/joerg/github/kalzium/doc/./settings2.png"
    "/home/joerg/github/kalzium/doc/./settings3.png"
    "/home/joerg/github/kalzium/doc/./settings4.png"
    "/home/joerg/github/kalzium/doc/./sidebar1.png"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xkalziumx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES "/home/joerg/github/kalzium/build/doc//kalzium.1")
endif()

