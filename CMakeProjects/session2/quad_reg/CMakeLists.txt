set( MOVING_QUAD_REG_SOURSES
    MovingQuadReg.cpp
    MovingQuadReg.h
)

add_library( moving_quad_reg STATIC
    ${MOVING_QUAD_REG_SOURSES}
)

target_include_directories( moving_quad_reg PUBLIC . )