//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString, SCSnapchattersIdentitySummary;

@interface SCSnapchattersFriendFeedSummary : SCDocObject <NSCopying>
{
    NSString *_feedId;
    SCSnapchattersIdentitySummary *_summary;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (unsigned long long)hash;
- (id)initWithFeedId:(id)arg1 summary:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchattersIdentitySummary *summary; // @synthesize summary=_summary;

@end

