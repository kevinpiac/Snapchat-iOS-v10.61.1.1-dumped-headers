//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCStoriesRankedStoryIdentifiers : SCDocObject <NSCopying>
{
    long long _type;
    NSArray *_rankedStoryIdentifiers;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 rankedStoryIdentifiers:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *rankedStoryIdentifiers; // @synthesize rankedStoryIdentifiers=_rankedStoryIdentifiers;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

