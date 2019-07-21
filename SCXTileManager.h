//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSDictionary, NSString, SCMTTileSetInfo;
@protocol SCXGameStateProvider, SCXTileFetcher, SCXTileManagerDelegate;

@interface SCXTileManager : NSObject <SCTraceEnabled>
{
    id <SCXTileFetcher> _fetcher;
    NSString *_tileSetFlavor;
    NSDictionary *_tileSets;
    struct SCXMapBounds _currentMapViewBounds;
    int _numConsecLatestErrors;
    int _numConsecTileErrors;
    int _numTilesLoaded;
    int _numTileReqInFlight;
    NSDate *_lastTileSetIdFetchTime;
    _Bool _disableHeat;
    _Bool _shouldPeriodicallyRefreshTileSetId;
    _Bool _isTileFetchingPaused;
    id <SCXTileManagerDelegate> _delegate;
    id <SCXGameStateProvider> _gameStateProvider;
    SCMTTileSetInfo *_gameTileSetInfo;
}

+ (id)tileIdsCoveringMapView:(id)arg1 mapViewport:(id)arg2;
+ (id)tileIdsCoveringMapView:(id)arg1 mapViewport:(id)arg2 zoomLevel:(double)arg3;
+ (id)tileIdsCoveringPointsSW:(struct CLLocationCoordinate2D)arg1 NE:(struct CLLocationCoordinate2D)arg2 atZoomLevel:(double)arg3;
+ (struct SCXTileIndex)tileIndexForLocation:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
- (void).cxx_destruct;
- (void)_fetchLatestTileSetIds;
- (void)_fetchLatestTileSetIdsDone:(id)arg1 response:(id)arg2;
- (void)_fetchTilesForBounds:(struct SCXMapBounds)arg1;
- (void)_fetchTilesForBoundsDone:(id)arg1 request:(id)arg2 requestedTiles:(id)arg3 response:(id)arg4;
- (void)_purgeLowPriorityTilesFromCache;
@property(nonatomic) __weak id <SCXTileManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCXGameStateProvider> gameStateProvider; // @synthesize gameStateProvider=_gameStateProvider;
@property(readonly, nonatomic) SCMTTileSetInfo *gameTileSetInfo; // @synthesize gameTileSetInfo=_gameTileSetInfo;
- (id)getGameTileForId:(id)arg1;
- (id)getHeatmapTileForId:(id)arg1;
- (id)getMarkerTileForId:(id)arg1;
- (id)getPOITileForId:(id)arg1;
@property(readonly, nonatomic) SCMTTileSetInfo *heatTileSetInfo;
- (id)initWithFetcher:(id)arg1 flavor:(id)arg2 disableHeat:(_Bool)arg3;
@property(nonatomic) _Bool isTileFetchingPaused; // @synthesize isTileFetchingPaused=_isTileFetchingPaused;
- (void)mapBoundsChanged:(struct SCXMapBounds)arg1;
- (void)mapViewWillBePresented;
@property(readonly, nonatomic) SCMTTileSetInfo *markerTileSetInfo;
- (int)numTilesLoaded;
@property(readonly, nonatomic) SCMTTileSetInfo *poiTileSetInfo;
@property(nonatomic) _Bool shouldPeriodicallyRefreshTileSetId; // @synthesize shouldPeriodicallyRefreshTileSetId=_shouldPeriodicallyRefreshTileSetId;
- (void)setTargetBounds:(struct SCXMapBounds)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

