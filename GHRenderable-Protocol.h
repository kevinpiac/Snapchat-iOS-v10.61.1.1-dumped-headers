//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol GHRenderable, SVGContext;

@protocol GHRenderable <NSObject>
- (void)addToClipForContext:(struct CGContext *)arg1 withSVGContext:(id <SVGContext>)arg2 objectBoundingBox:(struct CGRect)arg3;
- (void)addToClipPathForContext:(struct CGContext *)arg1 withSVGContext:(id <SVGContext>)arg2 objectBoundingBox:(struct CGRect)arg3;
@property(readonly, nonatomic) NSDictionary *attributes;
- (id <GHRenderable>)findRenderableObject:(struct CGPoint)arg1 withSVGContext:(id <SVGContext>)arg2;
- (struct CGRect)getBoundingBoxWithSVGContext:(id <SVGContext>)arg1;
- (unsigned int)getClippingTypeWithSVGContext:(id <SVGContext>)arg1;
@property(readonly, nonatomic) _Bool hidden;
- (void)renderIntoContext:(struct CGContext *)arg1 withSVGContext:(id <SVGContext>)arg2;
@property(readonly, nonatomic) struct CGAffineTransform transform;
@end
