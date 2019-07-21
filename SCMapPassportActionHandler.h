//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPassportActions-Protocol.h"

@class NSString, SCMapPassportDataStore;
@protocol SCMapPassportActionHandlerDelegate, SCMapPassportContextSessionProvider, SCXBitmojiAvatarGeneratorProtocol;

@interface SCMapPassportActionHandler : NSObject <SCMapPassportActions>
{
    id <SCXBitmojiAvatarGeneratorProtocol> _bitmojiAvatarGenerator;
    NSString *_bitmojiAvatarId;
    id <SCMapPassportContextSessionProvider> _contextSessionProvider;
    id <SCMapPassportActionHandlerDelegate> _delegate;
    SCMapPassportDataStore *_mapPassportDataStore;
}

- (void).cxx_destruct;
- (void)didCloseMemoriesCard;
- (void)didScrollTimelineWithOffset:(double)arg1;
- (void)didTapBack;
- (void)didTapBucketWithBucket:(id)arg1;
- (void)didTapCharmWithCharm:(id)arg1;
- (void)didTapDeleteWithEntry:(id)arg1;
- (void)didTapEntryWithEntry:(id)arg1;
- (void)didTapLetsGo;
- (void)didTapSetStatus;
- (id)initWithBitmojiAvatarGenerator:(id)arg1 bitmojiAvatarId:(id)arg2 contextSessionProvider:(id)arg3 delegate:(id)arg4 mapPassportDataStore:(id)arg5;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

