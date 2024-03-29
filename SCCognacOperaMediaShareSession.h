//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaSession-Protocol.h"

@class NSString, SCCognacOperaDataSource, SCOperaViewController;
@protocol NavigationDelegate;

@interface SCCognacOperaMediaShareSession : NSObject <SCCognacOperaSession>
{
    SCOperaViewController *_operaVC;
    id <NavigationDelegate> _deepLinkNavigationDelegate;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
- (CDUnknownBlockType)_shareMediaToSnapchatWVJBHandler;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NavigationDelegate> deepLinkNavigationDelegate; // @synthesize deepLinkNavigationDelegate=_deepLinkNavigationDelegate;
- (void)endSession;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
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

