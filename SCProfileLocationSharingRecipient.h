//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCProfileLocationSharingRecipient : NSObject <NSCopying>
{
    NSString *_groupId;
    NSString *_friendId;
    unsigned long long _subtype;
}

+ (id)friendWithFriendId:(id)arg1;
+ (id)groupWithGroupId:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)friendIdForFriend;
- (id)groupIdForGroup;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;

@end
