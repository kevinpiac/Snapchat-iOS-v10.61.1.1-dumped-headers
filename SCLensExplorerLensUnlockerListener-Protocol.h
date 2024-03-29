//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCLens, SCLensExplorerUnlockActionDataModel;
@protocol SCLensExplorerLensUnlockerProtocol;

@protocol SCLensExplorerLensUnlockerListener <NSObject>
- (void)lensExplorerUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didAddPlaceholderLens:(SCLens *)arg2 withAction:(SCLensExplorerUnlockActionDataModel *)arg3;
- (void)lensExplorerUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didFindAlreadyUnlockedLens:(SCLens *)arg2 withAction:(SCLensExplorerUnlockActionDataModel *)arg3;
- (void)lensExplorerUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didSilentUnlockLens:(SCLens *)arg2 unlockSource:(unsigned long long)arg3 error:(NSError *)arg4;
- (void)lensExplorerUnlocker:(id <SCLensExplorerLensUnlockerProtocol>)arg1 didUnlockLens:(SCLens *)arg2 withAction:(SCLensExplorerUnlockActionDataModel *)arg3 error:(NSError *)arg4;
@end

