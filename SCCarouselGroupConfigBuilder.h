//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCarouselGroupConfigBuilder : NSObject
{
    NSString *_groupName;
    long long _rangeStart;
    long long _rangeEnd;
    long long _softLimit;
    long long _hardLimit;
}

+ (id)withCarouselGroupConfig:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setGroupName:(id)arg1;
- (id)setHardLimit:(long long)arg1;
- (id)setRangeEnd:(long long)arg1;
- (id)setRangeStart:(long long)arg1;
- (id)setSoftLimit:(long long)arg1;

@end

