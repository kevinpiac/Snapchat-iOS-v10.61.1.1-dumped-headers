//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LCVEulerAngles, LCVTranslationData;

@interface LCVSixdofFrameData : NSObject
{
    double _timestamp;
    LCVEulerAngles *_eulerAngles;
    LCVTranslationData *_translation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LCVEulerAngles *eulerAngles; // @synthesize eulerAngles=_eulerAngles;
- (id)init;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) LCVTranslationData *translation; // @synthesize translation=_translation;

@end
