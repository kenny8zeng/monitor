#ifndef __core_h_fer4r34r3fkjwij2yt6tbhbhnurfj__
#define __core_h_fer4r34r3fkjwij2yt6tbhbhnurfj__

#include "base.hpp"
#include "tinbom.hpp"

namespace nsTinbom
{
	//////////////////////////////////////////////////////////////////////////////////////
	struct tnode
	{
		netid_t 	*netid;

		struct tport< tnode >* ports[ MAX_CHILD ];
	};

} //namespace nsTinbom

#endif //__core_h_fer4r34r3fkjwij2yt6tbhbhnurfj__

