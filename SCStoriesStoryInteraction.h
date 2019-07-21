//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesStoryInteraction : SCDocObject <NSCopying>
{
    NSString *_storyId;
    long long _impressionTimeMs;
    unsigned long long _latestImpressionTimestamp;
    long long _watchTimeMs;
    unsigned long long _latestWatchTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) long long impressionTimeMs; // @synthesize impressionTimeMs=_impressionTimeMs;
- (id)initWithStoryId:(id)arg1 impressionTimeMs:(long long)arg2 latestImpressionTimestamp:(unsigned long long)arg3 watchTimeMs:(long long)arg4 latestWatchTimestamp:(unsigned long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long latestImpressionTimestamp; // @synthesize latestImpressionTimestamp=_latestImpressionTimestamp;
@property(readonly, nonatomic) unsigned long long latestWatchTimestamp; // @synthesize latestWatchTimestamp=_latestWatchTimestamp;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) long long watchTimeMs; // @synthesize watchTimeMs=_watchTimeMs;

@end

