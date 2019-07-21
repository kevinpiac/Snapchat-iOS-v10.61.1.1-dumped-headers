//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSpringScaleAnimationData : NSObject <NSCopying>
{
    double _duration;
    double _delay;
    double _scale;
    unsigned long long _options;
    SCSpringScaleAnimationData *_nextSpringScaleAnimationData;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (unsigned long long)hash;
- (id)initWithDuration:(double)arg1 delay:(double)arg2 scale:(double)arg3 options:(unsigned long long)arg4 nextSpringScaleAnimationData:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSpringScaleAnimationData *nextSpringScaleAnimationData; // @synthesize nextSpringScaleAnimationData=_nextSpringScaleAnimationData;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;

@end
