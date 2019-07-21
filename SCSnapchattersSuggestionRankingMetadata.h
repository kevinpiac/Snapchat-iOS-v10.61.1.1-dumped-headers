//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersSuggestionRankingMetadata : SCDocObject <NSCopying>
{
    int _numberOfSeen;
    NSString *_userId;
    double _lastSeenTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 lastSeenTimestamp:(double)arg2 numberOfSeen:(int)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property(readonly, nonatomic) int numberOfSeen; // @synthesize numberOfSeen=_numberOfSeen;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end
