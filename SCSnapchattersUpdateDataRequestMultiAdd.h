//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersUpdateDataRequestMultiAdd : NSObject <NSCopying>
{
    _Bool _isRegistration;
    NSArray *_addFriendDataRequests;
    long long _placement;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *addFriendDataRequests; // @synthesize addFriendDataRequests=_addFriendDataRequests;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddFriendDataRequests:(id)arg1 placement:(long long)arg2 isRegistration:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isRegistration; // @synthesize isRegistration=_isRegistration;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;

@end

