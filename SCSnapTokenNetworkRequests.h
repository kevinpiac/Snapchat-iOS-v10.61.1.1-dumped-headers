//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCSnapTokenNetworkRequests : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)_accessTokenHttpSuccessWithResponseData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_accessTokenSuccessWithResponse:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)_buildAccessTokenRequestForRefreshToken:(id)arg1 serverScopeNames:(id)arg2;
- (id)_buildSnapSessionRequestForUserId:(id)arg1 serverScopeNames:(id)arg2;
- (void)_snapSessionHttpSuccessWithResponseData:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchAccessTokensForServerScopeNames:(id)arg1 refreshToken:(id)arg2 completionPerformer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchSnapSessionForUserId:(id)arg1 serverScopeNames:(id)arg2 completionPerformer:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithUserSessionRequestManager:(id)arg1;
@property(readonly, nonatomic) SCSessionRequestManager *sessionRequestManager; // @synthesize sessionRequestManager=_sessionRequestManager;

@end

