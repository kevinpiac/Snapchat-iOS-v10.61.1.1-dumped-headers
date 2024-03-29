//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVGAttributedObject.h"

#import "GHRenderable-Protocol.h"

@class NSDictionary, NSString, UIColor;

@interface GHRenderableObject : SVGAttributedObject <GHRenderable>
{
    struct CGAffineTransform transform;
    UIColor *_fillColor;
}

+ (struct CGRect)boundingBoxForRenderableObject:(id)arg1 withSVGContext:(id)arg2 givenParentObjectsBounds:(struct CGRect)arg3;
+ (void)setupContext:(struct CGContext *)arg1 withAttributes:(id)arg2 withSVGContext:(id)arg3;
- (void).cxx_destruct;
- (void)addNamedObjects:(id)arg1;
- (void)addToClipForContext:(struct CGContext *)arg1 withSVGContext:(id)arg2 objectBoundingBox:(struct CGRect)arg3;
- (void)addToClipPathForContext:(struct CGContext *)arg1 withSVGContext:(id)arg2 objectBoundingBox:(struct CGRect)arg3;
@property(readonly, nonatomic) NSString *defaultFillColor;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (id)findRenderableObject:(struct CGPoint)arg1 withSVGContext:(id)arg2;
- (struct CGRect)getBoundingBoxWithSVGContext:(id)arg1;
- (unsigned int)getClippingTypeWithSVGContext:(id)arg1;
@property(readonly, nonatomic) _Bool hidden;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 withSVGContext:(id)arg2;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform;
- (void)setupContext:(struct CGContext *)arg1 withAttributes:(id)arg2 withSVGContext:(id)arg3;
- (id)valueForStyleAttribute:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

