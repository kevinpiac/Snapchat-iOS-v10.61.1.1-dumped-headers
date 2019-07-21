//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCStrokeDrawerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor;
@protocol SCStrokeDrawer;

@interface SCSingleStrokeDrawingView : UIView <SCStrokeDrawerDelegate>
{
    NSMutableArray *_points;
    double _lineWidth;
    UIColor *_lineColor;
    NSString *_emoji;
    long long _smoothingVersion;
    id <SCStrokeDrawer> _solidStrokeDrawer;
    id <SCStrokeDrawer> _emojiStrokeDrawer;
    id <SCStrokeDrawer> _currentActivateDrawer;
    long long _drawerType;
    long long _currentStrokeUniqueId;
    double _defaultStrokeWidth;
}

- (void).cxx_destruct;
- (double)_mapScaleValuefromDrawer:(id)arg1 toDrawer:(id)arg2 scale:(double)arg3;
- (void)addPoint:(id)arg1;
- (double)changeDrawerType:(long long)arg1 mapScale:(double)arg2;
- (double)clampedScale:(double)arg1;
- (void)clearDrawingView;
@property(nonatomic) long long currentStrokeUniqueId; // @synthesize currentStrokeUniqueId=_currentStrokeUniqueId;
@property(nonatomic) double defaultStrokeWidth; // @synthesize defaultStrokeWidth=_defaultStrokeWidth;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long drawerType; // @synthesize drawerType=_drawerType;
- (void)finishDrawingStroke;
- (_Bool)hasDrawing;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isPointEligibleForAdding:(id)arg1 previousPoint:(id)arg2 scale:(double)arg3;
- (id)lineColor;
- (double)lineWidth;
@property(nonatomic) long long smoothingVersion; // @synthesize smoothingVersion=_smoothingVersion;
- (id)stroke;
- (void)strokeDrawer:(id)arg1 requestDrawInRect:(struct CGRect)arg2;
- (void)strokeDrawerRequestRedraw:(id)arg1;
- (void)updateDrawingData:(id)arg1 emoji:(id)arg2 lineWidth:(double)arg3 drawerType:(long long)arg4;
- (void)updateWithStroke:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

