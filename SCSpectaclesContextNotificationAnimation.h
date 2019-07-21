//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesContextNotificationAnimation-Protocol.h"

@class NSString;

@interface SCSpectaclesContextNotificationAnimation : NSObject <SCSpectaclesContextNotificationAnimation>
{
    int _solidDuration;
    int _blinkCount;
    int _blinkDurationOnInMs;
    int _blinkDurationOffInMs;
    int _colorIntValue;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) int blinkCount; // @synthesize blinkCount=_blinkCount;
@property(readonly, nonatomic) int blinkDurationOffInMs; // @synthesize blinkDurationOffInMs=_blinkDurationOffInMs;
@property(readonly, nonatomic) int blinkDurationOnInMs; // @synthesize blinkDurationOnInMs=_blinkDurationOnInMs;
@property(readonly, nonatomic) int colorIntValue; // @synthesize colorIntValue=_colorIntValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSolidDuration:(int)arg1 blinkCount:(int)arg2 blinkDurationOnInMs:(int)arg3 blinkDurationOffInMs:(int)arg4 colorIntValue:(int)arg5;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) int solidDuration; // @synthesize solidDuration=_solidDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
