//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensUnlockerListener-Protocol.h"
#import "SCLensExplorerLensUnlockerProtocol-Protocol.h"

@class NSString, SCLensExplorerRouter;
@protocol SCLensExplorerLensUnlockerProtocol, SCLensExplorerUnlockFlowDelegate;

@interface SCLensExplorerUnlockFlow : NSObject <SCLensExplorerLensUnlockerProtocol, SCLensExplorerLensUnlockerListener>
{
    id <SCLensExplorerLensUnlockerProtocol> _lensUnlocker;
    SCLensExplorerRouter *_lensExplorerRouter;
    id <SCLensExplorerUnlockFlowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_handleLensExplorerUnlockerLens:(id)arg1 withAction:(id)arg2;
- (_Bool)addListener:(id)arg1;
@property(nonatomic) __weak id <SCLensExplorerUnlockFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchLensWithDeeplinkAction:(id)arg1;
- (void)fetchLensWithLensItem:(id)arg1 placeholderLensBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLensUnlocker:(id)arg1 lensExplorerRouter:(id)arg2;
- (void)lensExplorerUnlocker:(id)arg1 didAddPlaceholderLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didFindAlreadyUnlockedLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didSilentUnlockLens:(id)arg2 unlockSource:(unsigned long long)arg3 error:(id)arg4;
- (void)lensExplorerUnlocker:(id)arg1 didUnlockLens:(id)arg2 withAction:(id)arg3 error:(id)arg4;
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

