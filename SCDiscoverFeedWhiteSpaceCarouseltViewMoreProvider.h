//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewListSectionViewMoreProviding-Protocol.h"

@class NSString, UIImage;

@interface SCDiscoverFeedWhiteSpaceCarouseltViewMoreProvider : NSObject <SCCollectionViewListSectionViewMoreProviding>
{
    UIImage *_viewMoreImage;
    UIImage *_viewLessImage;
}

+ (Class)viewMoreCellClass;
+ (id)viewMoreCellReuseIdentifier;
- (void).cxx_destruct;
- (id)init;
- (_Bool)shouldRoundLastCellInList;
- (id)viewModelForNumberOfItemsCollapsed:(long long)arg1 numberOfItemsTotal:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

