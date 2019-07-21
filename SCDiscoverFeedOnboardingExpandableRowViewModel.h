//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel, SCDiscoverFeedOnboardingListViewModel;

@interface SCDiscoverFeedOnboardingExpandableRowViewModel : NSObject <NSCopying>
{
    _Bool _showSeeMore;
    SCDiscoverFeedOnboardingListViewModel *_listViewModel;
    SCActionModel *_seeMoreActionModel;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithListViewModel:(id)arg1 showSeeMore:(_Bool)arg2 seeMoreActionModel:(id)arg3 preferredSize:(struct CGSize)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedOnboardingListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCActionModel *seeMoreActionModel; // @synthesize seeMoreActionModel=_seeMoreActionModel;
@property(readonly, nonatomic) _Bool showSeeMore; // @synthesize showSeeMore=_showSeeMore;

@end

