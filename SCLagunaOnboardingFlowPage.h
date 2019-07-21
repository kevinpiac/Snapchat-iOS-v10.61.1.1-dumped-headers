//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SCLagunaOnboardingFlowPage : NSObject
{
    NSString *_primaryText;
    NSString *_secondaryText;
    NSString *_accessibilityIdentifier;
    UIImage *_fallbackImage;
    NSString *_fallbackImageName;
    double _minTime;
    double _startTime;
    double _endTime;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property(copy, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;
@property(nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end
