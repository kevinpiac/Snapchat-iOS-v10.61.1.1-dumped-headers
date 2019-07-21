//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLVectorStyleLayer.h"

@class MGLStyleValue;

@interface MGLCircleStyleLayer : MGLVectorStyleLayer
{
}

@property(retain, nonatomic) MGLStyleValue *circleBlur;
@property(nonatomic) struct MGLTransition circleBlurTransition;
@property(retain, nonatomic) MGLStyleValue *circleColor;
@property(nonatomic) struct MGLTransition circleColorTransition;
@property(retain, nonatomic) MGLStyleValue *circleOpacity;
@property(nonatomic) struct MGLTransition circleOpacityTransition;
@property(retain, nonatomic) MGLStyleValue *circlePitchAlignment;
@property(retain, nonatomic) MGLStyleValue *circlePitchScale;
@property(retain, nonatomic) MGLStyleValue *circleRadius;
@property(nonatomic) struct MGLTransition circleRadiusTransition;
@property(retain, nonatomic) MGLStyleValue *circleScaleAlignment;
@property(retain, nonatomic) MGLStyleValue *circleStrokeColor;
@property(nonatomic) struct MGLTransition circleStrokeColorTransition;
@property(retain, nonatomic) MGLStyleValue *circleStrokeOpacity;
@property(nonatomic) struct MGLTransition circleStrokeOpacityTransition;
@property(retain, nonatomic) MGLStyleValue *circleStrokeWidth;
@property(nonatomic) struct MGLTransition circleStrokeWidthTransition;
@property(retain, nonatomic) MGLStyleValue *circleTranslate;
@property(retain, nonatomic) MGLStyleValue *circleTranslateAnchor;
@property(retain, nonatomic) MGLStyleValue *circleTranslation;
@property(retain, nonatomic) MGLStyleValue *circleTranslationAnchor;
@property(nonatomic) struct MGLTransition circleTranslationTransition;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2;
- (id)predicate;
@property(readonly, nonatomic) struct CircleLayer *rawLayer;
- (void)setPredicate:(id)arg1;
- (void)setSourceLayerIdentifier:(id)arg1;
- (id)sourceIdentifier;
- (id)sourceLayerIdentifier;

@end

