//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSString, SCBitmojiSelfieManager, SCCommerceProductDetailsBitmojiViewModel, SCCommerceScopedOptionsDataCoordinator, SCEventListenerAnnouncer, SCQueuePerformer, SCUserSession;
@protocol SCBitmojiManagerProtocol;

@interface SCCommerceBitmojiViewModelProvider : NSObject <SCEventListener, SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCBitmojiManagerProtocol> _bitmojiManager;
    SCBitmojiSelfieManager *_selfieManager;
    SCQueuePerformer *_queuePerformer;
    SCCommerceScopedOptionsDataCoordinator *_optionsDataCoordinator;
    SCUserSession *_userSession;
    SCCommerceProductDetailsBitmojiViewModel *_bitmojiViewModel;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_fetchComicForSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchSelfieForUserModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postUpdate;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) SCCommerceProductDetailsBitmojiViewModel *bitmojiViewModel; // @synthesize bitmojiViewModel=_bitmojiViewModel;
- (void)dealloc;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)updateWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

