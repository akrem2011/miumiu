//
//  MMIAX.h
//  MiuMiu
//
//  Created by Peter Zion on 09/10/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "MMProtocol.h"

#include <iax-client.h>

@class MMIAXCall;

#define MM_IAX_MAX_NUM_CALLS 8

@interface MMIAX : MMProtocol
{
@private
	struct iax_session *session;
	MMIAXCall *call;
	CFSocketContext socketContext;
	struct iax_session *callingSession;
	unsigned callingFormat;
	NSTimer *reregistrationTimer;
}

-(void) socketCallbackCalled;
-(void) willDestroySession;

@end
