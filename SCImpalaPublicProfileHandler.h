//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImpalaPublicProfileHandling-Protocol.h"

@class NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCImpalaBusinessProfileHandler, SCUserSession;

@interface SCImpalaPublicProfileHandler : NSObject <SCImpalaPublicProfileHandling>
{
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    SCUserSession *_userSession;
    SCImpalaBusinessProfileHandler *_handler;
}

- (void).cxx_destruct;
- (void)_performOptInNotificationsUpdate:(_Bool)arg1 profile:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getStateWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SCImpalaBusinessProfileHandler *handler; // @synthesize handler=_handler;
- (id)initWithUserSession:(id)arg1 handler:(id)arg2;
- (CDUnknownBlockType)observeWithCallback:(CDUnknownBlockType)arg1;
- (id)toJavaScript;
- (void)updateOptInNotificationsWithOptedIn:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateSubscribedWithSubscribed:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

