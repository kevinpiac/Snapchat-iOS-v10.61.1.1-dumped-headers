//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceNetworkRequestHandling-Protocol.h"

@protocol SCRequestManager, SCSecurityTokenUpdating;

@interface SCCommerceAuthenticatingRequestHandler : NSObject <SCCommerceNetworkRequestHandling>
{
    id <SCRequestManager> _requestManager;
    id <SCSecurityTokenUpdating> _tokenUpdater;
}

- (void).cxx_destruct;
- (void)executeCommerceRequest:(id)arg1 completionQueue:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithTokenUpdater:(id)arg1 requestManager:(id)arg2;
@property(retain, nonatomic) id <SCRequestManager> requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) id <SCSecurityTokenUpdating> tokenUpdater; // @synthesize tokenUpdater=_tokenUpdater;

@end

