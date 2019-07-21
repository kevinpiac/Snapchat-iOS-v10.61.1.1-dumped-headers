//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUnlockerProtocol-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCScannableLensProcessor;
@protocol SCLensByIdRetrievable, SCScannableActionAPIProvider, SCScannableLensUnlockerProtocol, SCUnlockableDataStoreWriter;

@interface SCLensScannableUnlockerImpl : NSObject <SCLensUnlockerProtocol>
{
    id <SCScannableActionAPIProvider> _APIProvider;
    id <SCScannableLensUnlockerProtocol> _scannableLensUnlocker;
    id <SCLensByIdRetrievable> _localLensCache;
    id <SCUnlockableDataStoreWriter> _dataStoreWriter;
    NSMutableDictionary *_scanSnapcodeDataToLensIDMap;
    SCScannableLensProcessor *_scannableLensProcessor;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)_fetchDidFinishWithResult:(id)arg1 forUnlockerAction:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 defaultErrorHandler:(CDUnknownBlockType)arg5;
- (void)_fetchLensForMachineReadableCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3 defaultErrorHandler:(CDUnknownBlockType)arg4;
- (id)initWithScannableActionAPIProvider:(id)arg1 scannableLensUnlocker:(id)arg2 localLensCache:(id)arg3 dataStoreWriter:(id)arg4;
- (id)initWithScannableActionAPIProvider:(id)arg1 scannableLensUnlocker:(id)arg2 localLensCache:(id)arg3 dataStoreWriter:(id)arg4 queuePerformer:(id)arg5;
- (void)performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)unlockLensDidFinishSuccessful:(_Bool)arg1 withError:(id)arg2 result:(id)arg3 unlockerAction:(id)arg4 completion:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

