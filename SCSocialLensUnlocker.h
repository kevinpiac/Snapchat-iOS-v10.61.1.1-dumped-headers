//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensSocialUnlocker-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCSocialLensUnlocker : NSObject <SCLensSocialUnlocker>
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)_unlockLensForID:(id)arg1 preview:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;
- (void)previewLensForID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockLensForID:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

