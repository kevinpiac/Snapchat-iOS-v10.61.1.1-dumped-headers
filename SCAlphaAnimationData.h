//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCAlphaAnimationData : NSObject <NSCopying>
{
    double _duration;
    double _delay;
    double _startAlpha;
    double _endAlpha;
    unsigned long long _options;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (id)description;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
- (unsigned long long)hash;
- (id)initWithDuration:(double)arg1 delay:(double)arg2 startAlpha:(double)arg3 endAlpha:(double)arg4 options:(unsigned long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double startAlpha; // @synthesize startAlpha=_startAlpha;

@end

