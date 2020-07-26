# BOOST_ROOT Environment variable required
set( Boost_USE_STATIC_LIBS      ON)
set( Boost_USE_MULTITHREADED    ON)

# Search for Boost libraries.
FIND_PACKAGE( 
    Boost REQUIRED
)

# Make found targets globally available.
IF ( Boost_FOUND )
    SET_TARGET_PROPERTIES(
        Boost::boost
        PROPERTIES IMPORTED_GLOBAL TRUE
    )
ENDIF ()
