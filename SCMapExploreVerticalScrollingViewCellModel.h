//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCMapExploreStatusCarouselItemViewModel;

@interface SCMapExploreVerticalScrollingViewCellModel : NSObject <NSCopying>
{
    _Bool _requiresUpdate;
    SCMapExploreStatusCarouselItemViewModel *_itemViewModel;
}

+ (id)viewModelWithCurrentUserId:(id)arg1 exploreDataStore:(id)arg2 isInlineReplyEnabled:(_Bool)arg3 status:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRequiresUpdate:(_Bool)arg1 itemViewModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCMapExploreStatusCarouselItemViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(readonly, nonatomic) _Bool requiresUpdate; // @synthesize requiresUpdate=_requiresUpdate;

@end

