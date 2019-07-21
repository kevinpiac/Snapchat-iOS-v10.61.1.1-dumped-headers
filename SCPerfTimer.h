//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface SCPerfTimer : NSObject <NSCopying>
{
    double _startTime;
    NSString *_eventName;
    NSDictionary *_params;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (unsigned long long)hash;
- (id)initWithStartTime:(double)arg1 eventName:(id)arg2 params:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;

@end
