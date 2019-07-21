//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class CLSBetaUpdate, FABNetworkClient, NSString, NSTimer;
@protocol CLSBetaControllerDelegate, OS_dispatch_queue;

@interface CLSBetaController : NSObject <NSURLSessionDelegate>
{
    NSString *_betaToken;
    _Bool _checksSuspended;
    _Bool _retrying;
    id <CLSBetaControllerDelegate> _delegate;
    FABNetworkClient *_networkClient;
    CLSBetaUpdate *_activeUpdate;
    NSTimer *_checkSuspensionTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isBetaSupported;
+ (id)pinnnedCertificates;
- (void).cxx_destruct;
- (id)APIKey;
@property(retain, nonatomic) CLSBetaUpdate *activeUpdate; // @synthesize activeUpdate=_activeUpdate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)allowChecks;
- (id)appBuildVersion;
- (id)appBundleIdentifier;
- (id)appDisplayVersion;
- (id)appInstallationSource;
- (id)appInstanceIdentifier;
- (void)applicationWillEnterForeground;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)betaEndpoint;
@property(readonly, copy, nonatomic) NSString *betaToken;
- (id)betaUpdateSuspendDurationSecs;
- (id)betaUpdateURL;
- (void)checkForUpdate;
@property(retain, nonatomic) NSTimer *checkSuspensionTimer; // @synthesize checkSuspensionTimer=_checkSuspensionTimer;
@property(nonatomic) _Bool checksSuspended; // @synthesize checksSuspended=_checksSuspended;
- (void)dealloc;
@property(nonatomic) __weak id <CLSBetaControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didGetUpdate:(id)arg1;
- (void)fabricSettingsDownloaded:(id)arg1;
- (void)handledCompletedBetaRequestWithData:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)loadUpdateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)maybeGetUpdate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) FABNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool retrying; // @synthesize retrying=_retrying;
- (id)settings;
- (_Bool)shouldGetUpdates;
- (void)showBetaAlertForUpdate:(id)arg1;
- (_Bool)start;
- (void)temporarilySuspendChecks;
- (id)updateWithData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

