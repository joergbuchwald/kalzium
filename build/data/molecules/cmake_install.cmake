# Install script for directory: /home/joerg/github/kalzium/data/molecules

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/data/molecules" TYPE FILE FILES
    "/home/joerg/github/kalzium/data/molecules/2-aminoethanol.cml"
    "/home/joerg/github/kalzium/data/molecules/2-thioethanol.cml"
    "/home/joerg/github/kalzium/data/molecules/2_2_2-trifluoroethanol.cml"
    "/home/joerg/github/kalzium/data/molecules/but-2-yne-1_4-diol.cml"
    "/home/joerg/github/kalzium/data/molecules/butane.cml"
    "/home/joerg/github/kalzium/data/molecules/carbon_dioxide.cml"
    "/home/joerg/github/kalzium/data/molecules/carbon_monoxide.cml"
    "/home/joerg/github/kalzium/data/molecules/ethane-1_2-diol.cml"
    "/home/joerg/github/kalzium/data/molecules/ethane.cml"
    "/home/joerg/github/kalzium/data/molecules/ethanol.cml"
    "/home/joerg/github/kalzium/data/molecules/methane.cml"
    "/home/joerg/github/kalzium/data/molecules/methanol.cml"
    "/home/joerg/github/kalzium/data/molecules/porphyrin.cml"
    "/home/joerg/github/kalzium/data/molecules/propan-1-ol.cml"
    "/home/joerg/github/kalzium/data/molecules/propan-2-ol.cml"
    "/home/joerg/github/kalzium/data/molecules/propane.cml"
    "/home/joerg/github/kalzium/data/molecules/thiophene.cml"
    "/home/joerg/github/kalzium/data/molecules/water.cml"
    )
endif()

