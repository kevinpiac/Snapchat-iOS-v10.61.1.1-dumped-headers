//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedSnapMediaTypeInfo;

@interface SCFriendsFeedSnapMessage : NSObject <NSCopying>
{
    _Bool _isInfiniteSnap;
    SCFriendsFeedSnapMediaTypeInfo *_snapMediaTypeInfo;
    NSString *_unopenedSnapMessageId;
    NSString *_actionPerformer;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSnapMediaTypeInfo:(id)arg1 unopenedSnapMessageId:(id)arg2 actionPerformer:(id)arg3 isInfiniteSnap:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isInfiniteSnap; // @synthesize isInfiniteSnap=_isInfiniteSnap;
@property(readonly, copy, nonatomic) SCFriendsFeedSnapMediaTypeInfo *snapMediaTypeInfo; // @synthesize snapMediaTypeInfo=_snapMediaTypeInfo;
@property(readonly, copy, nonatomic) NSString *unopenedSnapMessageId; // @synthesize unopenedSnapMessageId=_unopenedSnapMessageId;

@end

