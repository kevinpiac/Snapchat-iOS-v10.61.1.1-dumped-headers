//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface SCDDMLEngagementBuckets : NSObject <NSCoding>
{
    NSArray *_buckets;
    NSString *_friendUsername;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *friendUsername; // @synthesize friendUsername=_friendUsername;
- (void)increment:(unsigned long long)arg1 count:(long long)arg2 timestamp:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 lastUpdatedTimestamp:(id)arg2;
- (id)initWithUsername:(id)arg1 type:(unsigned long long)arg2 count:(long long)arg3 lastUpdatedTimestamp:(id)arg4;
- (id)toDictionaryWithTimestamp:(id)arg1;

@end

