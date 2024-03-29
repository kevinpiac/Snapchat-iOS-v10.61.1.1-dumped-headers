//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface SCDynamicLayoutQueryParameters : NSObject <NSCopying>
{
    NSArray *_feedTypes;
    NSDictionary *_feedTypeToNumStories;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *feedTypeToNumStories; // @synthesize feedTypeToNumStories=_feedTypeToNumStories;
@property(readonly, copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
- (unsigned long long)hash;
- (id)initWithFeedTypes:(id)arg1 feedTypeToNumStories:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

