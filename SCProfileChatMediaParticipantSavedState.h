//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCProfileChatMediaParticipantSavedState : NSObject <NSCopying>
{
    _Bool _saved;
    NSString *_participant;
    unsigned long long _version;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1 saved:(_Bool)arg2 version:(unsigned long long)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) _Bool saved; // @synthesize saved=_saved;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

@end

