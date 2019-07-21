//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraScreenBadgingStateProvider-Protocol.h"
#import "SCFeatureLensSideButtonUpdateListener-Protocol.h"
#import "SCFeatureLensSideButtonUpdateProviderImplementation-Protocol.h"

@class NSString, SCFeatureLensSideButtonUpdateListenerAnnouncer, SCLens;
@protocol SCFeatureLensSideButtonDelegate, SCFeatureLensSideButtonUpdateProviderImplementation;

@interface SCChatAndDiscoverBadgeAwareLensSideButtonUpdateProvider : NSObject <SCFeatureLensSideButtonUpdateListener, SCFeatureLensSideButtonUpdateProviderImplementation, SCCameraScreenBadgingStateProvider>
{
    id <SCFeatureLensSideButtonUpdateProviderImplementation> _implementation;
    SCFeatureLensSideButtonUpdateListenerAnnouncer *_announcer;
    id <SCFeatureLensSideButtonDelegate> _lensSideButtonDelegate;
    _Bool _isFromRegistration;
    _Bool _hasChatFeedBadge;
    _Bool _hasDiscoveryFeedBadge;
}

- (void).cxx_destruct;
- (void)_dicoverBadgeCountChanged:(id)arg1;
- (_Bool)_hasBadge;
- (void)_notifyLensButtonBadge:(_Bool)arg1;
- (_Bool)addListener:(id)arg1;
@property(readonly, nonatomic) SCLens *firstApplicableLens;
@property(nonatomic) _Bool hasChatFeedBadge; // @synthesize hasChatFeedBadge=_hasChatFeedBadge;
@property(nonatomic) _Bool hasDiscoveryFeedBadge; // @synthesize hasDiscoveryFeedBadge=_hasDiscoveryFeedBadge;
- (id)initWithProvider:(id)arg1 lensSideButtonDelegate:(id)arg2 isFromRegistration:(_Bool)arg3;
- (void)lensSideButtonDelegate:(id)arg1 didChangeNewLensesAvailable:(_Bool)arg2;
- (void)lensesTurnedOff;
- (void)lensesTurnedOn;
@property(readonly, nonatomic) _Bool newLensesAvailable;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
