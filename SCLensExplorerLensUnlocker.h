//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensUnlockerProtocol-Protocol.h"

@class NSString, SCLensExplorerLensUnlockerListenerAnnouncer;
@protocol SCLensExplorerLensDeeplinkSilentUnlockerProtocol, SCLensExplorerUnlockableDataStoreProtocol;

@interface SCLensExplorerLensUnlocker : NSObject <SCLensExplorerLensUnlockerProtocol>
{
    id <SCLensExplorerUnlockableDataStoreProtocol> _unlockableDataStore;
    id <SCLensExplorerLensDeeplinkSilentUnlockerProtocol> _deeplinkSilentUnlocker;
    SCLensExplorerLensUnlockerListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (id)_lensWithLensId:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)fetchLensWithDeeplinkAction:(id)arg1;
- (void)fetchLensWithLensItem:(id)arg1 placeholderLensBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUnlockableDataStore:(id)arg1 deeplinkSilentUnlocker:(id)arg2;
- (id)placeholderLensWithLensId:(id)arg1 iconURL:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)silentUnlockLens:(id)arg1 unlockSource:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unlockLensWithDeeplinkAction:(id)arg1;
- (void)unlockLensWithLensItem:(id)arg1 placeholderLensBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

