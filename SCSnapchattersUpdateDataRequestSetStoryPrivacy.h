//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCSnapchattersUpdateDataRequestSetStoryPrivacy : NSObject <NSCopying>
{
    long long _storyPrivacy;
    NSArray *_userIds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStoryPrivacy:(long long)arg1 userIds:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long storyPrivacy; // @synthesize storyPrivacy=_storyPrivacy;
@property(readonly, copy, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;

@end

