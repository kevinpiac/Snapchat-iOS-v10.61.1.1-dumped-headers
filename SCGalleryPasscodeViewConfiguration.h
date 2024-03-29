//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryPasscodeViewConfiguration : NSObject
{
    unsigned long long _passcodeLength;
    double _indicatorSize;
    double _indicatorSpacing;
    double _spacingBetweenIndicatorsAndKeys;
    double _keySize;
    double _keyHorizontalSpacing;
    double _keyVerticalSpacing;
}

+ (id)defaultConfiguration;
@property(nonatomic) double indicatorSize; // @synthesize indicatorSize=_indicatorSize;
@property(nonatomic) double indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(nonatomic) double keyHorizontalSpacing; // @synthesize keyHorizontalSpacing=_keyHorizontalSpacing;
@property(nonatomic) double keySize; // @synthesize keySize=_keySize;
@property(nonatomic) double keyVerticalSpacing; // @synthesize keyVerticalSpacing=_keyVerticalSpacing;
@property(nonatomic) unsigned long long passcodeLength; // @synthesize passcodeLength=_passcodeLength;
@property(nonatomic) double spacingBetweenIndicatorsAndKeys; // @synthesize spacingBetweenIndicatorsAndKeys=_spacingBetweenIndicatorsAndKeys;

@end

