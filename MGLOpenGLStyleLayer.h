//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLStyleLayer.h"

@class MGLStyle;

@interface MGLOpenGLStyleLayer : MGLStyleLayer
{
    MGLStyle *_style;
}

- (void).cxx_destruct;
- (void)addToStyle:(id)arg1 belowLayer:(id)arg2;
- (void)didMoveToMapView:(id)arg1;
- (void)drawInMapView:(id)arg1 withContext:(struct MGLStyleLayerDrawingContext)arg2;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) struct CustomLayer *rawLayer;
- (void)removeFromStyle:(id)arg1;
- (void)setNeedsDisplay;
@property(nonatomic) __weak MGLStyle *style; // @synthesize style=_style;
- (void)willMoveFromMapView:(id)arg1;

@end

