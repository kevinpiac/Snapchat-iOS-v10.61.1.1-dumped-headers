//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUUnlockablesBackgroundStyle, SOJUUnlockablesFontStyle;

@interface SOJUUnlockablesCaptionStyleBuilder : NSObject
{
    NSString *_styleId;
    NSString *_displayName;
    SOJUUnlockablesFontStyle *_fontStyle;
    SOJUUnlockablesBackgroundStyle *_backgroundStyle;
    NSNumber *_colorChangeable;
    NSString *_baseColor;
    NSNumber *_isWifiOnly;
}

+ (id)withJUUnlockablesCaptionStyle:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBackgroundStyle:(id)arg1;
- (id)setBaseColor:(id)arg1;
- (id)setColorChangeable:(id)arg1;
- (id)setColorChangeableValue:(_Bool)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setFontStyle:(id)arg1;
- (id)setIsWifiOnly:(id)arg1;
- (id)setIsWifiOnlyValue:(_Bool)arg1;
- (id)setStyleId:(id)arg1;

@end

