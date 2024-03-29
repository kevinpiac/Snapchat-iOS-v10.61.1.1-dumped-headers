//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL, NSValue;

@interface SCM3U8Segment : NSObject <NSCopying>
{
    NSURL *_url;
    double _duration;
    NSValue *_byteRangeValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSValue *byteRangeValue; // @synthesize byteRangeValue=_byteRangeValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 duration:(double)arg2 byteRangeValue:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

@end

