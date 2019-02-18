# Install script for directory: /home/joerg/github/kalzium/data/toolpics

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kalzium/data/toolpics" TYPE FILE FILES
    "/home/joerg/github/kalzium/data/toolpics/abzug.jpg"
    "/home/joerg/github/kalzium/data/toolpics/becherglas.jpg"
    "/home/joerg/github/kalzium/data/toolpics/brechungsmesser.jpg"
    "/home/joerg/github/kalzium/data/toolpics/brenner.jpg"
    "/home/joerg/github/kalzium/data/toolpics/destillierbruecke.jpg"
    "/home/joerg/github/kalzium/data/toolpics/dsc.jpg"
    "/home/joerg/github/kalzium/data/toolpics/erlenmeyerkolben.jpg"
    "/home/joerg/github/kalzium/data/toolpics/exikator.jpg"
    "/home/joerg/github/kalzium/data/toolpics/halter.jpg"
    "/home/joerg/github/kalzium/data/toolpics/heizplatte.jpg"
    "/home/joerg/github/kalzium/data/toolpics/hplc.jpg"
    "/home/joerg/github/kalzium/data/toolpics/kolbenprober.png"
    "/home/joerg/github/kalzium/data/toolpics/korkring.jpg"
    "/home/joerg/github/kalzium/data/toolpics/messzylinder.jpg"
    "/home/joerg/github/kalzium/data/toolpics/moerser.jpg"
    "/home/joerg/github/kalzium/data/toolpics/phpapier.jpg"
    "/home/joerg/github/kalzium/data/toolpics/pileusball.jpg"
    "/home/joerg/github/kalzium/data/toolpics/pipette.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rg-halter.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rg.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rg-staender.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rotationsverdampfer.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rueckflusskuehler.jpg"
    "/home/joerg/github/kalzium/data/toolpics/ruehrfisch.jpg"
    "/home/joerg/github/kalzium/data/toolpics/rundkolben.jpg"
    "/home/joerg/github/kalzium/data/toolpics/scheidetrichter.jpg"
    "/home/joerg/github/kalzium/data/toolpics/schutzbrille.jpg"
    "/home/joerg/github/kalzium/data/toolpics/spatel.jpg"
    "/home/joerg/github/kalzium/data/toolpics/spritzflasche.jpg"
    "/home/joerg/github/kalzium/data/toolpics/thermometer2.jpg"
    "/home/joerg/github/kalzium/data/toolpics/thermometer.jpg"
    "/home/joerg/github/kalzium/data/toolpics/tonschale.jpg"
    "/home/joerg/github/kalzium/data/toolpics/trichter.jpg"
    "/home/joerg/github/kalzium/data/toolpics/trockenrohr.jpg"
    "/home/joerg/github/kalzium/data/toolpics/tropftrichter.jpg"
    "/home/joerg/github/kalzium/data/toolpics/uhrglas.jpg"
    "/home/joerg/github/kalzium/data/toolpics/verteiler.jpg"
    "/home/joerg/github/kalzium/data/toolpics/vollpipette.jpg"
    "/home/joerg/github/kalzium/data/toolpics/waage.jpg"
    "/home/joerg/github/kalzium/data/toolpics/wasserstrahlpumpe.jpg"
    )
endif()

