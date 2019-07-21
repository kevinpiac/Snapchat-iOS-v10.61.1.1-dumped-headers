//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSequenceByParticipant : NSObject <NSCopying>
{
    NSString *_participant;
    unsigned long long _sequence;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 sequence:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;

@end

