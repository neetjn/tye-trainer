#include "Memory.h"
#pragma unmanaged

//DEFAULT_CONSTRUCTOR
Memory::Pointer::Pointer()
        :       mBase( NULL )
        ,       mvOffsets( 0 )
{
};

//DESTRUCTOR
Memory::Pointer::~Pointer() {

};

//SINGLE_PTR_CONSTRUCTOR
Memory::Pointer::Pointer( DWORD Base, INT Offset )
        :       mBase( ( ULONG_PTR* )Base )
{
        mvOffsets.resize( 1 );
        mvOffsets[ 0 ] = Offset;
};
//MULTI_PTR_CONSTRUCTOR
Memory::Pointer::Pointer( DWORD Base, UINT Level, ... )
        :       mBase( ( ULONG_PTR* )Base )
{
        va_list vl;
        va_start( vl, Level );

        for( UINT I = 0; I != Level; ++ I ) {
                mvOffsets.push_back( va_arg( vl, INT ) );
        }

        va_end( vl );

};