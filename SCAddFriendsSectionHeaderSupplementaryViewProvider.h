//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCCollectionViewSectionSupplementaryViewProviding-Protocol.h"
#import "SCCollectionViewSupplementaryViewModelsConfigurable-Protocol.h"

@class NSDictionary, NSString, SCAddFriendsSectionHeaderView, SCAddFriendsSectionHeaderViewModel;
@protocol SCActionHandling, SCAddFriendsSectionHeaderBadgeProviding, SCCollectionViewSectionSupplementaryViewProviderDelegate;

@interface SCAddFriendsSectionHeaderSupplementaryViewProvider : NSObject <SCCollectionViewSectionSupplementaryViewProviding, SCCollectionViewSupplementaryViewModelsConfigurable, SCActionable>
{
    SCAddFriendsSectionHeaderViewModel *_viewModel;
    SCAddFriendsSectionHeaderViewModel *_badgedViewModel;
    id <SCAddFriendsSectionHeaderBadgeProviding> _badgeProvider;
    SCAddFriendsSectionHeaderView *_sectionHeaderView;
    _Bool _shouldBeBadged;
    NSDictionary *_supplementaryViewModels;
    id <SCCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)_updateViewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)initWithHeaderViewModel:(id)arg1;
- (id)initWithHeaderViewModel:(id)arg1 badgedViewModel:(id)arg2 badgeProvider:(id)arg3;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
@property(copy, nonatomic) NSDictionary *supplementaryViewModels; // @synthesize supplementaryViewModels=_supplementaryViewModels;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
- (id)viewClassesForSupplementaryViewsByElementKind;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

