//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCAddFriendsEmptyStateViewModel;

@interface SCDiscoverFeedFriendStoriesSectionEmptyStateViewModel : NSObject <NSCopying>
{
    NSAttributedString *_descriptionString;
    SCAddFriendsEmptyStateViewModel *_addFriendsEmptyStateViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAddFriendsEmptyStateViewModel *addFriendsEmptyStateViewModel; // @synthesize addFriendsEmptyStateViewModel=_addFriendsEmptyStateViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSAttributedString *descriptionString; // @synthesize descriptionString=_descriptionString;
- (unsigned long long)hash;
- (id)initWithDescriptionString:(id)arg1 addFriendsEmptyStateViewModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

