//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersFriendScore : SCDocObject <NSCopying>
{
    NSString *_userId;
    long long _score;
    double _lastFetchedTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 score:(long long)arg2 lastFetchedTimestamp:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastFetchedTimestamp; // @synthesize lastFetchedTimestamp=_lastFetchedTimestamp;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end
