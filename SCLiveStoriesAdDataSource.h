//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAdDataSource.h"

#import "SCOperaPlaylistAdInsertionProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCStoryAdStreamInfo;

@interface SCLiveStoriesAdDataSource : SCAdDataSource <SCOperaPlaylistAdInsertionProtocol>
{
    NSString *_currentGroupId;
    SCStoryAdStreamInfo *_currentAdStreamInfo;
    NSMutableDictionary *_groupIdToNextAdSlotPositionMap;
    long long _minSnapsFromNextAd;
    long long _maxViewedItemIndexInGroup;
    NSMutableSet *_viewedAdItemIds;
    NSMutableSet *_viewedNonAdItemIds;
}

- (void).cxx_destruct;
- (_Bool)_canShowAdAfterItem:(id)arg1;
- (void)_incrementNextAdSlotPosition;
- (void)_insertAdIfNecessaryAfterItem:(id)arg1;
- (void)_makeAdRequestIfNecessary;
- (unsigned long long)adProductType;
- (id)adSkipEvent;
- (id)adViewContextForGroup:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (id)mediaLoadContexts;
- (void)resetInsertionData;
- (_Bool)shouldInsertPlaylistItem;
- (_Bool)shouldInsertPlaylistItemGroup;
- (void)startViewingPlaylistItem:(id)arg1;
- (void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2;
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(id)arg1;
- (void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (void)stopViewingPlaylistItemGroup:(id)arg1;
- (id)targetingParameters;
- (void)teardown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

