//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCContextSession, SCContextV2ClientSubstitutionHandler, SCContextV2Manager;
@protocol SCContextV2ContextInfoProvider, SCContextV2DependencyProvider, SCContextV2Logger;

@interface SCContextV2Session : NSObject
{
    SCContextV2Manager *_manager;
    id <SCContextV2ContextInfoProvider> _contextInfoProvider;
    id <SCContextV2DependencyProvider> _dependencyProvider;
    id <SCContextV2Logger> _logger;
    SCContextV2ClientSubstitutionHandler *_clientSubstitutionHandler;
    SCContextSession *_legacyContextSession;
}

- (void).cxx_destruct;
- (id)_chatInputBarJsonWithBackground:(_Bool)arg1 cameraButton:(_Bool)arg2 recipientName:(_Bool)arg3;
- (id)_locallyGeneratedCTA;
@property(readonly, nonatomic) SCContextV2ClientSubstitutionHandler *clientSubstitutionHandler; // @synthesize clientSubstitutionHandler=_clientSubstitutionHandler;
@property(readonly, nonatomic) id <SCContextV2ContextInfoProvider> contextInfoProvider; // @synthesize contextInfoProvider=_contextInfoProvider;
@property(readonly, nonatomic) id <SCContextV2DependencyProvider> dependencyProvider; // @synthesize dependencyProvider=_dependencyProvider;
- (void)generateLocalCTA:(CDUnknownBlockType)arg1;
- (id)initWithManager:(id)arg1 contextInfoProvider:(id)arg2 logger:(id)arg3 dependencyProvider:(id)arg4 legacyContextSession:(id)arg5;
@property(readonly, nonatomic) SCContextSession *legacyContextSession; // @synthesize legacyContextSession=_legacyContextSession;
@property(readonly, nonatomic) id <SCContextV2Logger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SCContextV2Manager *manager; // @synthesize manager=_manager;

@end

