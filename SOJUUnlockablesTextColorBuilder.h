//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesTextColorBuilder : NSObject
{
    NSArray *_color;
    NSArray *_colorStop;
    NSString *_colorTransform;
    NSNumber *_colorGradientAngleDegree;
    NSArray *_colorTransformParams;
}

+ (id)withJUUnlockablesTextColor:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setColor:(id)arg1;
- (id)setColorGradientAngleDegree:(id)arg1;
- (id)setColorGradientAngleDegreeValue:(double)arg1;
- (id)setColorStop:(id)arg1;
- (id)setColorTransform:(id)arg1;
- (id)setColorTransformEnum:(long long)arg1;
- (id)setColorTransformParams:(id)arg1;

@end

