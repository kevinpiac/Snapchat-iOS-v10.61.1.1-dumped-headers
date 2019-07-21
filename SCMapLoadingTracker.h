//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMapBasePersonLocationsProvider, SCXBitmojiLayer, SCXRenderLayer;
@protocol SCMapLoadingTrackerDelegate;

@interface SCMapLoadingTracker : NSObject
{
    NSString *_userId;
    id <SCMapLoadingTrackerDelegate> _delegate;
    SCXRenderLayer *_mapRenderLayer;
    SCXBitmojiLayer *_bitmojiLayer;
    SCMapBasePersonLocationsProvider *_mapBasePersonLocationsProvider;
    double _loadStartTime;
    _Bool _startedTimeoutCountdown;
    double _mapTilesLoadTime;
    double _allBitmojisLoadTime;
    double _ownBitmojiLoadTime;
    double _contentTilesLoadTime;
    double _allStoryThumbnailsLoadTime;
    _Bool _isFullyLoaded;
    _Bool _isLoadedEnoughForDisplay;
    _Bool _didTimeOut;
}

- (void).cxx_destruct;
- (void)_allBitmojisDidLoad;
- (void)_allStoryThumbnailsDidLoad;
- (void)_checkOverallLoadState;
- (void)_contentTilesDidLoad;
- (_Bool)_isSnapMapLoaded;
- (void)_ownBitmojiDidLoad;
- (void)_timedOut;
@property(readonly, nonatomic) _Bool allBitmojisLoaded;
@property(readonly, nonatomic) _Bool allStoryThumbnailsLoaded;
@property(readonly, nonatomic) _Bool contentTilesLoaded;
- (id)description;
- (void)didLoadMapboxTiles;
@property(readonly, nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
- (id)initWithUserId:(id)arg1 delegate:(id)arg2 renderLayer:(id)arg3 bitmojiLayer:(id)arg4 mapBasePersonLocationsProvider:(id)arg5;
@property(readonly, nonatomic) _Bool isFullyLoaded; // @synthesize isFullyLoaded=_isFullyLoaded;
@property(readonly, nonatomic) _Bool isLoadedEnoughForDisplay; // @synthesize isLoadedEnoughForDisplay=_isLoadedEnoughForDisplay;
@property(readonly, nonatomic) _Bool mapTilesLoaded;
@property(readonly, nonatomic) _Bool ownBitmojiLoaded;
- (void)startTimeoutCountdown;
@property(readonly, nonatomic) double timeToLoadAllBitmojis;
@property(readonly, nonatomic) double timeToLoadAllStoryThumbnails;
@property(readonly, nonatomic) double timeToLoadContentTiles;
@property(readonly, nonatomic) double timeToLoadMapTiles;
@property(readonly, nonatomic) double timeToLoadOwnBitmoji;
- (void)updateSnapMapLoadingState;

@end

