//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GHControlFactory : NSObject
{
}

+ (id)buttonTint;
+ (unsigned long long)defaultScheme;
+ (_Bool)isValidColorScheme:(unsigned long long)arg1;
+ (id)locateArtworkForObject:(id)arg1 atSubpath:(id)arg2;
+ (struct CGGradient *)newButtonBackgroundGradientForScheme:(unsigned long long)arg1;
+ (struct CGGradient *)newButtonBackgroundGradientForScheme:(unsigned long long)arg1 withBrighnessOffset:(double)arg2;
+ (struct CGGradient *)newButtonBackgroundGradientPressedForScheme:(unsigned long long)arg1;
+ (struct CGGradient *)newButtonBackgroundGradientSelectedForScheme:(unsigned long long)arg1;
+ (id)newButtonForScheme:(unsigned long long)arg1;
+ (id)newColor:(id)arg1 withBrightnessDelta:(double)arg2;
+ (id)newLightBackgroundColorForScheme:(unsigned long long)arg1;
+ (id)newRingColorForScheme:(unsigned long long)arg1;
+ (struct CGPath *)newRoundRectPathForRect:(struct CGRect)arg1 withRadius:(double)arg2;
+ (id)newTextColorForScheme:(unsigned long long)arg1;
+ (id)newTextColorPressedForScheme:(unsigned long long)arg1;
+ (id)newTextShadowColorForScheme:(unsigned long long)arg1;
+ (_Bool)preferRadialGradientForScheme:(unsigned long long)arg1;
+ (void)setDefaultButtonTint:(id)arg1;
+ (void)setDefaultScheme:(unsigned long long)arg1;

@end

