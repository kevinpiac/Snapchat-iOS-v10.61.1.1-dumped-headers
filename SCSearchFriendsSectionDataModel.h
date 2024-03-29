//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSearchQuery;

@interface SCSearchFriendsSectionDataModel : NSObject <NSCopying>
{
    int _maxFriends;
    SCSearchQuery *_searchQuery;
    long long _friendSectionType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) long long friendSectionType; // @synthesize friendSectionType=_friendSectionType;
- (unsigned long long)hash;
- (id)initWithSearchQuery:(id)arg1 friendSectionType:(long long)arg2 maxFriends:(int)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int maxFriends; // @synthesize maxFriends=_maxFriends;
@property(readonly, copy, nonatomic) SCSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;

@end

