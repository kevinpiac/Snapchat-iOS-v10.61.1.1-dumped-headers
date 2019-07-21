//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCAlternatingTextAnimationData : NSObject <NSCopying>
{
    NSAttributedString *_baseText;
    NSAttributedString *_alternateText;
    double _duration;
    double _repeatingAnimationDelay;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *alternateText; // @synthesize alternateText=_alternateText;
@property(readonly, copy, nonatomic) NSAttributedString *baseText; // @synthesize baseText=_baseText;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (unsigned long long)hash;
- (id)initWithBaseText:(id)arg1 alternateText:(id)arg2 duration:(double)arg3 repeatingAnimationDelay:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double repeatingAnimationDelay; // @synthesize repeatingAnimationDelay=_repeatingAnimationDelay;

@end
