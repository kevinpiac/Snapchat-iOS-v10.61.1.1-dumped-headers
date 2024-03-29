//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXTile-Protocol.h"

@class NSArray, NSString, SCMTTileId;

@interface SCXHeatmapTile : NSObject <SCXTile>
{
    int _numPoints;
    int _numFuzzPoints;
    SCMTTileId *_tileId;
    long long _epoch;
    struct SCXHeatmapPoint *_points;
    struct SCXHeatmapFuzzPoint *_fuzzPoints;
    NSArray *_quadrants;
    double _maxFuzzRadius;
    struct SCXMapBounds _bound;
}

- (void).cxx_destruct;
@property struct SCXMapBounds bound; // @synthesize bound=_bound;
- (void)dealloc;
@property long long epoch; // @synthesize epoch=_epoch;
@property struct SCXHeatmapFuzzPoint *fuzzPoints; // @synthesize fuzzPoints=_fuzzPoints;
@property double maxFuzzRadius; // @synthesize maxFuzzRadius=_maxFuzzRadius;
@property int numFuzzPoints; // @synthesize numFuzzPoints=_numFuzzPoints;
@property int numPoints; // @synthesize numPoints=_numPoints;
@property struct SCXHeatmapPoint *points; // @synthesize points=_points;
@property(retain) NSArray *quadrants; // @synthesize quadrants=_quadrants;
@property(retain) SCMTTileId *tileId; // @synthesize tileId=_tileId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

