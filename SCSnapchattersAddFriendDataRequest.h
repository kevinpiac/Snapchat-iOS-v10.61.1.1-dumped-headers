//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchatter;

@interface SCSnapchattersAddFriendDataRequest : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    long long _addSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long addSource; // @synthesize addSource=_addSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSnapchatter:(id)arg1 addSource:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;

@end
