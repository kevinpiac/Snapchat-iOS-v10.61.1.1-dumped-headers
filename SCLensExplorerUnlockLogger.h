//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensUnlockerListener-Protocol.h"

@class NSString;

@interface SCLensExplorerUnlockLogger : NSObject <SCLensExplorerLensUnlockerListener>
{
}

- (void)lensExplorerUnlocker:(id)arg1 didAddPlaceholderLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didFindAlreadyUnlockedLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didSilentUnlockLens:(id)arg2 unlockSource:(unsigned long long)arg3 error:(id)arg4;
- (void)lensExplorerUnlocker:(id)arg1 didUnlockLens:(id)arg2 withAction:(id)arg3 error:(id)arg4;
- (void)logLensWasUnlocked:(id)arg1 fromDeeplinkSource:(unsigned long long)arg2 withError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
