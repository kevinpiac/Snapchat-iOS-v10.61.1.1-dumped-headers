//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationCashRain : NSObject <NSCopying>
{
    double _creationDateInEpochSecs;
    NSString *_senderUsername;
    NSString *_recipientUsername;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double creationDateInEpochSecs; // @synthesize creationDateInEpochSecs=_creationDateInEpochSecs;
- (unsigned long long)hash;
- (id)initWithCreationDateInEpochSecs:(double)arg1 senderUsername:(id)arg2 recipientUsername:(id)arg3 count:(unsigned long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recipientUsername; // @synthesize recipientUsername=_recipientUsername;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;

@end

