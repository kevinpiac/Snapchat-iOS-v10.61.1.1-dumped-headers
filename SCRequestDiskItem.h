//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString, SCNetworkRequestSchema;

@interface SCRequestDiskItem : NSObject <NSCopying, NSCoding>
{
    NSString *_contentId;
    NSDate *_itemEnqueueDate;
    unsigned long long _attemptedCount;
    SCNetworkRequestSchema *_requestSchema;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long attemptedCount; // @synthesize attemptedCount=_attemptedCount;
@property(readonly, copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentId:(id)arg1 itemEnqueueDate:(id)arg2 attemptedCount:(unsigned long long)arg3 requestSchema:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *itemEnqueueDate; // @synthesize itemEnqueueDate=_itemEnqueueDate;
- (id)queueItem;
@property(readonly, copy, nonatomic) SCNetworkRequestSchema *requestSchema; // @synthesize requestSchema=_requestSchema;

@end

