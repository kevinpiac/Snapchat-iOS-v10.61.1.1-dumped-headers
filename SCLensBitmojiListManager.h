//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCCache, SCSessionRequestManager;
@protocol SCLensUserProvider, SCPerforming;

@interface SCLensBitmojiListManager : NSObject <SCUserSessionScoped>
{
    SCCache *_bitmojiListCache;
    id <SCPerforming> _workPerformer;
    SCSessionRequestManager *_requestManager;
    id <SCLensUserProvider> _lensUserProvider;
}

- (void).cxx_destruct;
- (void)_initBitmojiListCache;
- (void)_issueBitmojiListFetch:(id)arg1 requestSettings:(id)arg2 requestKey:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_lookupInCache:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)_ttlFromCacheControlHeader:(id)arg1;
- (void)boostRequest:(id)arg1 setting:(id)arg2;
- (id)fetchBitmojiList:(id)arg1 requestSettings:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 lensUserProvider:(id)arg2;
- (void)invalidate;
- (id)lensUserProvider;
- (void)resetCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

