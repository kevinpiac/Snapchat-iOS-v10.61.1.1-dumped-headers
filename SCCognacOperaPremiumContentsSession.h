//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacDataStorageUpdateListener-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"

@class NSString, SCCognacAppDataModel, SCCognacOperaDataSource, WKWebViewJavascriptBridge;

@interface SCCognacOperaPremiumContentsSession : NSObject <SCCognacDataStorageUpdateListener, SCCognacOperaSession>
{
    WKWebViewJavascriptBridge *_bridge;
    SCCognacAppDataModel *_appDataModel;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
- (void)cognacDataStorageDidUpdateWithResult:(id)arg1;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)endSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)pauseSession;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
- (void)startSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

