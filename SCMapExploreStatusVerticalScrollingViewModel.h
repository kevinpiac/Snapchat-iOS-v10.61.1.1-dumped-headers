//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCMapExploreVerticalScrollingViewCellModel;

@interface SCMapExploreStatusVerticalScrollingViewModel : NSObject <NSCopying>
{
    SCMapExploreVerticalScrollingViewCellModel *_cellViewModel;
    NSArray *_people;
    NSString *_placeId;
}

+ (id)viewModelWithCurrentUserId:(id)arg1 exploreDataStore:(id)arg2 isInlineReplyEnabled:(_Bool)arg3 status:(id)arg4;
+ (id)viewModelWithCurrentUserId:(id)arg1 exploreDataStore:(id)arg2 mapPeopleFriendsProvider:(id)arg3 myStatus:(id)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCMapExploreVerticalScrollingViewCellModel *cellViewModel; // @synthesize cellViewModel=_cellViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCellViewModel:(id)arg1 people:(id)arg2 placeId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;

@end

